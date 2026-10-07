set_target_properties(fruit_ninja PROPERTIES SUFFIX ".html" OUTPUT_NAME "index")
target_link_options(fruit_ninja PRIVATE
 "-fexceptions" "-sASYNCIFY=1" "-sASYNCIFY_STACK_SIZE=131072"
 "-sALLOW_MEMORY_GROWTH=1" "-sINITIAL_MEMORY=67108864"
 "-sSTACK_SIZE=2097152" "-sEXIT_RUNTIME=1" "-sFORCE_FILESYSTEM=1"
 "-lidbfs.js" "-sEXPORTED_RUNTIME_METHODS=callMain"
 "SHELL:--shell-file \"${CMAKE_CURRENT_SOURCE_DIR}/platform/wasm/shell.html\""
 "SHELL:--preload-file \"${CMAKE_CURRENT_SOURCE_DIR}/assets/original@/assets/original\""
 "SHELL:--preload-file \"${CMAKE_CURRENT_SOURCE_DIR}/assets/config@/assets/config\"")
