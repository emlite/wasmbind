# -DWEBBIND_FEATURES=HTMLFormElement,HTMLDivElement,SVGElement or ALL
set(WEBBIND_FEATURES "" CACHE STRING
    "Comma/semicolon separated list of feature file stems (e.g. HTMLFormElement,HTMLDivElement). \
Empty => build only the passed features. Use ALL to build everything.")

file(GLOB WEBBIND_HEADERS CONFIGURE_DEPENDS "include/webbind/*.hpp")
file(GLOB WEBBIND_SOURCES CONFIGURE_DEPENDS "src/*.cpp")

# This is here for testing purposes!
set(WEBBIND_HTMLSOURCES
    src/EventTarget.cpp
    src/Node.cpp
    src/Element.cpp
    src/HTMLElement.cpp
    src/HTMLButtonElement.cpp
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

set(WEBBIND_BASELINE_SOURCES src/enums.cpp)

include(cmake/feature_map.cmake)

# Look up a feature 'stem' in WEBBIND_FEATURE_MAP, else fallback to src/<stem>.cpp
function(webbind_feature_files stem out_var)
    set(found FALSE)
    list(LENGTH WEBBIND_FEATURE_MAP _len)
    math(EXPR _last "${_len} - 1")
    foreach(i RANGE 0 ${_last} 2)
        list(GET WEBBIND_FEATURE_MAP ${i}     key)
        math(EXPR j "${idx} + 1")
        list(GET WEBBIND_FEATURE_MAP ${j}   val)
        if(key STREQUAL "${stem}")
            # val is already a ';'-separated list
            set(files)
            foreach(v IN LISTS val)
                list(APPEND files "${CMAKE_CURRENT_LIST_DIR}/src/${v}")
            endforeach()
            set(found TRUE)
            break()
        endif()
    endforeach()

    if(NOT found)
        set(candidate "${CMAKE_CURRENT_LIST_DIR}/src/${stem}.cpp")
        if(EXISTS "${candidate}")
            set(files "${candidate}")
        else()
            message(FATAL_ERROR
                "Feature '${stem}' not in WEBBIND_FEATURE_MAP and file '${candidate}' does not exist")
        endif()
    endif()

    list(REMOVE_DUPLICATES files)
    set(${out_var} "${files}" PARENT_SCOPE)
endfunction()

set(WEBBIND_FINAL_SOURCES)

if(NOT WEBBIND_FEATURES OR WEBBIND_FEATURES STREQUAL "" OR WEBBIND_FEATURES STREQUAL "ALL")
    list(APPEND WEBBIND_FINAL_SOURCES ${WEBBIND_SOURCES})
    message(STATUS "webbind: WEBBIND_FEATURES empty/ALL -> building all sources.")
else()
    list(APPEND WEBBIND_FINAL_SOURCES ${WEBBIND_BASELINE_SOURCES})
    string(REPLACE "," ";" WEBBIND_FEATURES_LIST "${WEBBIND_FEATURES}")

    foreach(stem IN LISTS WEBBIND_FEATURES_LIST)
        string(STRIP "${stem}" stem)
        if(stem STREQUAL "")
            continue()
        endif()

        webbind_feature_files("${stem}" files)
        list(APPEND WEBBIND_FINAL_SOURCES ${files})
    endforeach()

    list(REMOVE_DUPLICATES WEBBIND_FINAL_SOURCES)
    message(STATUS "webbind: building baseline + requested features (${WEBBIND_FEATURES}).")
endif()

if(CMAKE_VERBOSE_MAKEFILE)
    foreach(f IN LISTS WEBBIND_FINAL_SOURCES)
        message(STATUS "  ${f}")
    endforeach()
endif()

add_library(webbind)

target_sources(webbind 
    PRIVATE 
       ${WEBBIND_FINAL_SOURCES}
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