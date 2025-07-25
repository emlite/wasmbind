cmake_minimum_required(VERSION 3.20)
project(wasmbind)

find_package(emlite QUIET CONFIG)

if (NOT emlite_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    emlite
    GIT_REPOSITORY https://github.com/emlite/emlite-cpp.git
    GIT_TAG main
    GIT_SHALLOW TRUE
  )
  FetchContent_MakeAvailable(emlite)
endif()

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

