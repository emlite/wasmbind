#include <webbind/GPUPipelineLayout.hpp>


GPUPipelineLayout GPUPipelineLayout::take_ownership(Handle h) noexcept {
        return GPUPipelineLayout(h);
    }
GPUPipelineLayout GPUPipelineLayout::clone() const noexcept { return *this; }
GPUPipelineLayout::GPUPipelineLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUPipelineLayout::GPUPipelineLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String GPUPipelineLayout::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUPipelineLayout::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

