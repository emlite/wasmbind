#include <webbind/GPUProgrammableStage.hpp>
#include <webbind/GPUShaderModule.hpp>

using emlite::Val;
namespace webbind {

GPUProgrammableStage::GPUProgrammableStage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUProgrammableStage GPUProgrammableStage::take_ownership(Handle h) noexcept {
        return GPUProgrammableStage(h);
    }
GPUProgrammableStage::GPUProgrammableStage(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUProgrammableStage::GPUProgrammableStage() noexcept: emlite::Val(emlite::Val::object()) {}
GPUProgrammableStage GPUProgrammableStage::clone() const noexcept { return *this; }

GPUShaderModule GPUProgrammableStage::module_() const {
    return emlite::Val::get("module").as<GPUShaderModule>();
}

void GPUProgrammableStage::module_(const GPUShaderModule& value) {
    emlite::Val::set("module", value);
}

jsbind::String GPUProgrammableStage::entryPoint() const {
    return emlite::Val::get("entryPoint").as<jsbind::String>();
}

void GPUProgrammableStage::entryPoint(const jsbind::String& value) {
    emlite::Val::set("entryPoint", value);
}

jsbind::Record<jsbind::String, jsbind::Any> GPUProgrammableStage::constants() const {
    return emlite::Val::get("constants").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void GPUProgrammableStage::constants(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("constants", value);
}


} // namespace webbind