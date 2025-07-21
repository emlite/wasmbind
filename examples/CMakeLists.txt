set(DEFAULT_LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export-dynamic,--export=main,--export-table,--import-memory,--export-memory,--strip-all")

set(JSBIND_EXAMPLES jsbind_example array_example date_example object_example function_example math_example string_example error_example reflect_example response_example url_example promise_example)
foreach(item IN LISTS JSBIND_EXAMPLES)
  add_executable(${item} ${item}.cpp)
  target_link_libraries(${item} PRIVATE jsbind::jsbind)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE CXX
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()

set(WEBBIND_EXAMPLES button audio)
foreach(item IN LISTS WEBBIND_EXAMPLES)
  add_executable(${item} ${item}.cpp)
  target_link_libraries(${item} PRIVATE webbind::webbind)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE CXX
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()