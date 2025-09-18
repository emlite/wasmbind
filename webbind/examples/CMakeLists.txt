set(DEFAULT_LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export-dynamic,--export=main,--export-table,--import-memory,--export-memory,--strip-all")

set(WEBBIND_EXAMPLES button audio)
foreach(item IN LISTS WEBBIND_EXAMPLES)
  add_executable(${item} ${item}.cpp)
  target_link_libraries(${item} PRIVATE wasmbind::webbind)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE CXX
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()