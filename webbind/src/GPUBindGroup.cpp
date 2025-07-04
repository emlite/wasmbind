#include <webbind/GPUBindGroup.hpp>


GPUBindGroup GPUBindGroup::take_ownership(Handle h) noexcept {
        return GPUBindGroup(h);
    }
GPUBindGroup GPUBindGroup::clone() const noexcept { return *this; }
GPUBindGroup::GPUBindGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroup::GPUBindGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPUBindGroup::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUBindGroup::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

