#include <webbind/GPUPipelineLayout.hpp>


GPUPipelineLayout GPUPipelineLayout::take_ownership(Handle h) noexcept {
        return GPUPipelineLayout(h);
    }
GPUPipelineLayout GPUPipelineLayout::clone() const noexcept { return *this; }
GPUPipelineLayout::GPUPipelineLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUPipelineLayout::GPUPipelineLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPUPipelineLayout::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUPipelineLayout::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

