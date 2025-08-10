#include <webbind/GPUShaderModuleCompilationHint.hpp>

using emlite::Val;
namespace webbind {

GPUShaderModuleCompilationHint::GPUShaderModuleCompilationHint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUShaderModuleCompilationHint GPUShaderModuleCompilationHint::take_ownership(Handle h) noexcept {
        return GPUShaderModuleCompilationHint(h);
    }
GPUShaderModuleCompilationHint::GPUShaderModuleCompilationHint(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUShaderModuleCompilationHint::GPUShaderModuleCompilationHint() noexcept: emlite::Val(emlite::Val::object()) {}
GPUShaderModuleCompilationHint GPUShaderModuleCompilationHint::clone() const noexcept { return *this; }

jsbind::String GPUShaderModuleCompilationHint::entryPoint() const {
    return emlite::Val::get("entryPoint").as<jsbind::String>();
}

void GPUShaderModuleCompilationHint::entryPoint(const jsbind::String& value) {
    emlite::Val::set("entryPoint", value);
}

jsbind::Any GPUShaderModuleCompilationHint::layout() const {
    return emlite::Val::get("layout").as<jsbind::Any>();
}

void GPUShaderModuleCompilationHint::layout(const jsbind::Any& value) {
    emlite::Val::set("layout", value);
}


} // namespace webbind