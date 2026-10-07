# Native analysis notes

Addresses below use Ghidra's loaded image base of 0x10000. They differ from ELF relative virtual addresses by 0x10000. Start with the analyzed Ghidra project to inspect instructions, relocation-applied data and cross-references.

| Address / function | Evidence / role |
| --- | --- |
| `0008c1d4`, `Java_com_halfbrick_fruitninja_NativeGameLib_native_1init` | JNI initialization entry point |
| `0008c138`, `...native_1step` | Frame/game loop entry point |
| `0008c170`, `...native_1touchEvent` | Touch input entry point |
| `0008c1a8`, `...native_1InitFileManager` | Filesystem/APK path setup entry point |
| `0008c084`, `...native_1saveOnExit` | Save/exit entry point |
| `00024030`, `FUN_00024030` | References `xml/fruitList.xml` and interprets fruit configuration |
| `0009f4cc`, `FUN_0009f4cc` | Asset read path; XML bytes XOR with a 255-byte repeating table |
| `000cbfd4` | XOR table address in this loaded binary |
| `000a6f34`, `FUN_000a6f34` | Texture upload; confirms pixel layout selection |

Texture header: first 16 bytes contain tag u32, flags/format u32, log2 width/height bytes at offsets 8/9, additional flags at 10/11 and little-endian width/height u16 at 12/14. Pixel data begins at 16. Native uploader masks format with 0xf: 3 uses RGBA unsigned short 5-5-5-1, 4 uses RGBA unsigned short 4-4-4-4, and 5 uses RGB unsigned short 5-6-5. These correspond to stored values 403, 404, 405 in this APK. No texture orientation flip is applied by the recovery tools.

MMD geometry: candidate HBR0 chunk has kind=0, version=0 and an explicit payload length. Its payload begins `00 00 21`, a u32 index count, and u16 triangle indices. Observed vertex headers are `00 ff 01 00 12` (36-byte vertices) and `00 e3 01 00 12` (32-byte vertices), followed by u32 vertex count. UV floats precede optional packed color, normal floats and position floats. Bounds are checked against exact chunk lengths. The 36-byte color field is not exported to OBJ. Node transforms and materials are not applied.

The XML decode key is extracted from the original ARMv7 ELF by resolving the literal at loaded address 0009f714 and adding the native PC-relative constant 0x9f678. The resulting table begins at loaded address 000cbfd4 (ELF/file offset 0xbbfd4). Configuration bytes are XORed with `key[offset % 255]`. All 16 results parse as XML.

Combined pseudocode and individual function files are the same export. Function names and C signatures inferred by Ghidra require review. `defined_data.tsv` helps resolve DAT_ references and PC-relative strings in pseudocode; `call_edges.tsv` records direct call edges and does not cover all indirect calls.
