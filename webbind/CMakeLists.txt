# -DWEBBIND_FEATURES=HTMLFormElement,HTMLDivElement,SVGElement or ALL
set(WEBBIND_FEATURES "" CACHE STRING
    "Comma/semicolon separated list of feature file stems (e.g. HTMLFormElement,HTMLDivElement). \
Empty => build only the baseline. Use ALL to build everything.")

file(GLOB WEBBIND_HEADERS CONFIGURE_DEPENDS "include/webbind/*.hpp")
file(GLOB WEBBIND_SOURCES CONFIGURE_DEPENDS "src/*.cpp")

set(WEBBIND_BASELINE_SOURCES
    src/EventTarget.cpp
    src/Node.cpp
    src/Element.cpp
    src/HTMLElement.cpp
    src/HTMLCollection.cpp
    src/Document.cpp
    src/Window.cpp
    src/console.cpp
    src/enums.cpp
    src/Event.cpp
    src/UIEvent.cpp
    src/MouseEvent.cpp
    src/PointerEvent.cpp
    src/CSSStyleDeclaration.cpp
    src/CSSStyleProperties.cpp
    src/window.cpp
)

set(_webbind_sources_to_build "")

if(NOT WEBBIND_FEATURES OR WEBBIND_FEATURES STREQUAL "")
    # Default: All
    set(_webbind_sources_to_build "${WEBBIND_SOURCES}")
    message(STATUS "webbind: WEBBIND_FEATURES not set -> building baseline only.")
elseif(WEBBIND_FEATURES STREQUAL "ALL")
    # Build everything
    set(_webbind_sources_to_build "${WEBBIND_SOURCES}")
    message(STATUS "webbind: WEBBIND_FEATURES=ALL -> building all sources (${CMAKE_CURRENT_LIST_DIR}/src/*.cpp).")
else()
    string(REPLACE "," ";" WEBBIND_FEATURES_LIST "${WEBBIND_FEATURES}")
    set(_webbind_sources_to_build "${WEBBIND_BASELINE_SOURCES}")

    foreach(stem IN LISTS WEBBIND_FEATURES_LIST)
        string(STRIP "${stem}" stem)
        if(stem STREQUAL "")
            continue()
        endif()

        set(file "${CMAKE_CURRENT_LIST_DIR}/src/${stem}.cpp")
        if(EXISTS "${file}")
            list(APPEND _webbind_sources_to_build "${file}")
        else()
            message(FATAL_ERROR
                "WEBBIND_FEATURES requested '${stem}', but file '${file}' does not exist")
        endif()
    endforeach()

    list(REMOVE_DUPLICATES _webbind_sources_to_build)
    message(STATUS "webbind: building baseline + requested features (${WEBBIND_FEATURES}):")
endif()

if(CMAKE_VERBOSE_MAKEFILE)
    foreach(f IN LISTS _webbind_sources_to_build)
        message(STATUS "  ${f}")
    endforeach()
endif()

add_library(webbind)

target_sources(webbind 
    PRIVATE 
       ${_webbind_sources_to_build}
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${WEBBIND_HEADERS}
)

target_link_libraries(webbind PUBLIC emlite::emlite jsbind::jsbind)
target_compile_features(webbind PUBLIC cxx_std_20)
target_precompile_headers(webbind PRIVATE
    <jsbind/jsbind.hpp>
)
add_library(webbind::webbind ALIAS webbind)

include(GNUInstallDirs)

install(
    TARGETS   webbind
    EXPORT    webbindTargets
    FILE_SET  HEADERS
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT webbindTargets
    FILE webbindTargets.cmake
    NAMESPACE webbind::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/webbind
)