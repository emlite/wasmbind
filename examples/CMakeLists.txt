set(DEFAULT_LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export-dynamic,--export=main,--export-table,--import-memory,--export-memory,--strip-all")
add_executable(button button.cpp)
target_link_libraries(button PRIVATE webbind::webbind)
set_target_properties(button PROPERTIES LINKER_LANGUAGE CXX SUFFIX .wasm LINK_FLAGS ${DEFAULT_LINK_FLAGS})

add_executable(jsbind_example jsbind_example.cpp)
target_link_libraries(jsbind_example PRIVATE jsbind::jsbind)
set_target_properties(jsbind_example PROPERTIES LINKER_LANGUAGE CXX SUFFIX .wasm LINK_FLAGS ${DEFAULT_LINK_FLAGS})