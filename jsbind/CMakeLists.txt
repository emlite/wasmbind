add_library(jsbind)

set(JSBIND_SOURCES
    src/Function.cpp 
    src/Promise.cpp 
    src/Any.cpp 
    src/lib.cpp 
    src/Object.cpp 
    src/Undefined.cpp
    src/Array.cpp
    src/String.cpp
    src/Reflect.cpp
    src/Null.cpp
)

set(JSBIND_HEADERS
    include/jsbind/Function.hpp 
    include/jsbind/Promise.hpp 
    include/jsbind/Any.hpp 
    include/jsbind/jsbind.hpp 
    include/jsbind/Object.hpp 
    include/jsbind/Sequence.hpp 
    include/jsbind/Record.hpp 
    include/jsbind/Undefined.hpp
    include/jsbind/Array.hpp
    include/jsbind/String.hpp
    include/jsbind/Reflect.hpp
    include/jsbind/Null.hpp
    include/jsbind/utils.hpp
)

target_sources(jsbind 
    PRIVATE 
        ${JSBIND_SOURCES} 
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${JSBIND_HEADERS}
)

target_compile_features(jsbind PUBLIC cxx_std_17)
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