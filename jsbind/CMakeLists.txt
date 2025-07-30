add_library(jsbind)

set(JSBIND_SOURCES
    src/Function.cpp 
    src/Any.cpp 
    src/lib.cpp 
    src/Undefined.cpp
    src/Array.cpp
    src/String.cpp
    src/Reflect.cpp
    src/Null.cpp
    src/Date.cpp
    src/JSON.cpp
    src/Error.cpp
    src/time.cpp
    src/Response.cpp
    src/url.cpp
    src/Math.cpp
    src/text.cpp
)

set(JSBIND_HEADERS
    include/jsbind/Function.hpp 
    include/jsbind/Promise.hpp 
    include/jsbind/Any.hpp 
    include/jsbind/jsbind.hpp 
    include/jsbind/Object.hpp 
    include/jsbind/Undefined.hpp
    include/jsbind/Array.hpp
    include/jsbind/String.hpp
    include/jsbind/Reflect.hpp
    include/jsbind/Null.hpp
    include/jsbind/Console.hpp
    include/jsbind/utils.hpp
    include/jsbind/Set.hpp
    include/jsbind/Map.hpp
    include/jsbind/Math.hpp
    include/jsbind/Date.hpp
    include/jsbind/JSON.hpp
    include/jsbind/Error.hpp
    include/jsbind/time.hpp
    include/jsbind/Response.hpp
    include/jsbind/url.hpp
    include/jsbind/text.hpp
)

target_sources(jsbind 
    PRIVATE 
        ${JSBIND_SOURCES} 
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${JSBIND_HEADERS}
)

target_compile_features(jsbind PUBLIC cxx_std_20)
target_link_libraries(jsbind PUBLIC emlite::emlite)

add_library(jsbind::jsbind ALIAS jsbind)

include(GNUInstallDirs)

install(
    TARGETS   jsbind
    EXPORT    jsbindTargets
    FILE_SET  HEADERS
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT jsbindTargets
    FILE jsbindTargets.cmake
    NAMESPACE jsbind::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/jsbind
)