#include <cstdint>
// Music is streamed, leaving room for textures, meshes and short sound effects.
extern "C" {
unsigned int _newlib_heap_size_user = 128 * 1024 * 1024;
}
