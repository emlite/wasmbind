#include <webbind/GPUShaderModule.hpp>
#include <webbind/GPUCompilationInfo.hpp>


GPUShaderModule GPUShaderModule::take_ownership(Handle h) noexcept {
        return GPUShaderModule(h);
    }
GPUShaderModule GPUShaderModule::clone() const noexcept { return *this; }
GPUShaderModule::GPUShaderModule(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUShaderModule::GPUShaderModule(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<GPUCompilationInfo> GPUShaderModule::getCompilationInfo() {
    return emlite::Val::call("getCompilationInfo").as<jsbind::Promise<GPUCompilationInfo>>();
}

jsbind::String GPUShaderModule::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUShaderModule::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

