#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Module;
class Response;
class Instance;


namespace WebAssembly {
    bool validate(const jsbind::Any& bytes);
    jsbind::Promise<Module> compile(const jsbind::Any& bytes);
    jsbind::Promise<jsbind::Any> instantiate(const jsbind::Any& bytes);
    jsbind::Promise<jsbind::Any> instantiate(const jsbind::Any& bytes, const jsbind::Object& importObject);
    jsbind::Promise<Instance> instantiate(const Module& moduleObject);
    jsbind::Promise<Instance> instantiate(const Module& moduleObject, const jsbind::Object& importObject);
} // namespace WebAssembly



namespace WebAssembly {
    jsbind::Promise<Module> compileStreaming(const jsbind::Promise<Response>& source);
    jsbind::Promise<jsbind::Any> instantiateStreaming(const jsbind::Promise<Response>& source);
    jsbind::Promise<jsbind::Any> instantiateStreaming(const jsbind::Promise<Response>& source, const jsbind::Object& importObject);
} // namespace WebAssembly

