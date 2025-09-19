cmake_minimum_required(VERSION 3.20)
project(wasmbind VERSION 0.1.8 LANGUAGES CXX)

find_package(emlite CONFIG QUIET)
if (NOT emlite_FOUND)
    add_subdirectory(emlite-cpp)
endif()

option(WASMBIND_BUILD_WEBBIND  "Build webbind library"  ON)
option(WASMBIND_BUILD_EXAMPLES "Build examples" OFF)

add_subdirectory(jsbind)

if (WASMBIND_BUILD_WEBBIND)
    add_subdirectory(webbind)
endif()

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

set(wasmbind_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/wasmbind")

configure_package_config_file(
  "${CMAKE_CURRENT_LIST_DIR}/cmake/wasmbindConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/wasmbindConfig.cmake"
  INSTALL_DESTINATION "${wasmbind_INSTALL_CMAKEDIR}"
  NO_CHECK_REQUIRED_COMPONENTS_MACRO
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/wasmbindConfigVersion.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion
)

install(
  EXPORT wasmbindTargets
  FILE wasmbindTargets.cmake
  NAMESPACE wasmbind::
  DESTINATION "${wasmbind_INSTALL_CMAKEDIR}"
)

install(FILES
  "${CMAKE_CURRENT_BINARY_DIR}/wasmbindConfig.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/wasmbindConfigVersion.cmake"
  DESTINATION "${wasmbind_INSTALL_CMAKEDIR}"
)
