#include <webbind/GPUExternalTextureBindingLayout.hpp>

namespace webbind {

GPUExternalTextureBindingLayout::GPUExternalTextureBindingLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUExternalTextureBindingLayout GPUExternalTextureBindingLayout::take_ownership(Handle h) noexcept {
    return GPUExternalTextureBindingLayout(h);
}

GPUExternalTextureBindingLayout::GPUExternalTextureBindingLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPUExternalTextureBindingLayout::GPUExternalTextureBindingLayout() noexcept: emlite::Val(emlite::Val::object()) {}

GPUExternalTextureBindingLayout GPUExternalTextureBindingLayout::clone() const noexcept { return *this; }


} // namespace webbind