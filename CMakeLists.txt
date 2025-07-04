cmake_minimum_required(VERSION 3.20)
project(wasmbind)

include(FetchContent)

FetchContent_Declare(
    emlite
    GIT_REPOSITORY https://github.com/MoAlyousef/emlite.git
    GIT_TAG main
    GIT_SHALLOW True
)

FetchContent_MakeAvailable(emlite)

add_subdirectory(jsbind)
add_subdirectory(webbind)

if (WASMBIND_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

