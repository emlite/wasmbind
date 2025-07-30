#include <webbind/GPUBindGroupLayout.hpp>


GPUBindGroupLayout GPUBindGroupLayout::take_ownership(Handle h) noexcept {
        return GPUBindGroupLayout(h);
    }
GPUBindGroupLayout GPUBindGroupLayout::clone() const noexcept { return *this; }
GPUBindGroupLayout::GPUBindGroupLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroupLayout::GPUBindGroupLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String GPUBindGroupLayout::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUBindGroupLayout::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

