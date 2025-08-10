#include <webbind/GPUShaderModuleDescriptor.hpp>
#include <webbind/GPUShaderModuleCompilationHint.hpp>

using emlite::Val;
namespace webbind {

GPUShaderModuleDescriptor::GPUShaderModuleDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUShaderModuleDescriptor GPUShaderModuleDescriptor::take_ownership(Handle h) noexcept {
        return GPUShaderModuleDescriptor(h);
    }
GPUShaderModuleDescriptor::GPUShaderModuleDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUShaderModuleDescriptor::GPUShaderModuleDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUShaderModuleDescriptor GPUShaderModuleDescriptor::clone() const noexcept { return *this; }

jsbind::String GPUShaderModuleDescriptor::code() const {
    return emlite::Val::get("code").as<jsbind::String>();
}

void GPUShaderModuleDescriptor::code(const jsbind::String& value) {
    emlite::Val::set("code", value);
}

jsbind::TypedArray<GPUShaderModuleCompilationHint> GPUShaderModuleDescriptor::compilationHints() const {
    return emlite::Val::get("compilationHints").as<jsbind::TypedArray<GPUShaderModuleCompilationHint>>();
}

void GPUShaderModuleDescriptor::compilationHints(const jsbind::TypedArray<GPUShaderModuleCompilationHint>& value) {
    emlite::Val::set("compilationHints", value);
}


} // namespace webbind