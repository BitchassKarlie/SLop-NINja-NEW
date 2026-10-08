set_target_properties(fruit_ninja PROPERTIES SUFFIX ".elf")

# The asset readers and game loaders use C++ exceptions on startup.
target_compile_options(fruit_core PRIVATE -fexceptions)
target_compile_options(fruit_platform PRIVATE -fexceptions)
target_compile_options(fruit_assets PRIVATE -fexceptions)
target_compile_options(fruit_ninja PRIVATE -fexceptions)
