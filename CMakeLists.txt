cmake_minimum_required(VERSION 3.20)
project(wasmbind)

add_subdirectory(emlite-cpp)

option(WASMBIND_BUILD_WEBBIND  "Build webbind library"  ON)

if (PROJECT_IS_TOP_LEVEL)
  option(WASMBIND_BUILD_EXAMPLES "Build examples" OFF)
endif()

add_subdirectory(jsbind)

if (WASMBIND_BUILD_WEBBIND)
    add_subdirectory(webbind)
endif()

if (WASMBIND_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

