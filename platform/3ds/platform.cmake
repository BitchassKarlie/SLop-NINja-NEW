set_target_properties(fruit_ninja PROPERTIES SUFFIX ".elf")
# Keep exception support enabled even when a devkitARM toolchain defaults it off.
target_compile_options(fruit_core PRIVATE -fexceptions)
target_compile_options(fruit_platform PRIVATE -fexceptions)
target_compile_options(fruit_assets PRIVATE -fexceptions)
target_compile_options(fruit_ninja PRIVATE -fexceptions)
