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
    src/WindowProxy.cpp
)

add_library(webbind)

target_sources(webbind 
    PRIVATE 
       ${WEBBIND_SOURCES}
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${WEBBIND_HEADERS}
)

target_link_libraries(webbind PUBLIC emlite::emlite jsbind::jsbind)
target_compile_features(webbind PUBLIC cxx_std_20)
target_precompile_headers(webbind PRIVATE
    <jsbind/jsbind.hpp>
    <webbind/enums.hpp>
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