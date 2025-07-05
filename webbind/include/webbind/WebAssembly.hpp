#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Module;


namespace WebAssembly {
    bool validate(const jsbind::Any& bytes);
    jsbind::Promise compile(const jsbind::Any& bytes);
    jsbind::Promise instantiate(const jsbind::Any& bytes);
    jsbind::Promise instantiate(const jsbind::Any& bytes, const jsbind::Object& importObject);
    jsbind::Promise instantiate(const Module& moduleObject);
    jsbind::Promise instantiate(const Module& moduleObject, const jsbind::Object& importObject);
} // namespace WebAssembly



namespace WebAssembly {
    jsbind::Promise compileStreaming(const jsbind::Promise& source);
    jsbind::Promise instantiateStreaming(const jsbind::Promise& source);
    jsbind::Promise instantiateStreaming(const jsbind::Promise& source, const jsbind::Object& importObject);
} // namespace WebAssembly

