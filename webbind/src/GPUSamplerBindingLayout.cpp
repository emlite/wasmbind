#include <webbind/GPUSamplerBindingLayout.hpp>

namespace webbind {

GPUSamplerBindingLayout::GPUSamplerBindingLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUSamplerBindingLayout GPUSamplerBindingLayout::take_ownership(Handle h) noexcept {
    return GPUSamplerBindingLayout(h);
}

GPUSamplerBindingLayout::GPUSamplerBindingLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPUSamplerBindingLayout::GPUSamplerBindingLayout() noexcept: emlite::Val(emlite::Val::object()) {}

GPUSamplerBindingLayout GPUSamplerBindingLayout::clone() const noexcept { return *this; }

GPUSamplerBindingType GPUSamplerBindingLayout::type() const {
    return emlite::Val::get("type").as<GPUSamplerBindingType>();
}

void GPUSamplerBindingLayout::type(const GPUSamplerBindingType& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind