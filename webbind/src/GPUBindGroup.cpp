#include <webbind/GPUBindGroup.hpp>


GPUBindGroup GPUBindGroup::take_ownership(Handle h) noexcept {
        return GPUBindGroup(h);
    }
GPUBindGroup GPUBindGroup::clone() const noexcept { return *this; }
emlite::Val GPUBindGroup::instance() noexcept { return emlite::Val::global("GPUBindGroup"); }
GPUBindGroup::GPUBindGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroup::GPUBindGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String GPUBindGroup::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUBindGroup::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

