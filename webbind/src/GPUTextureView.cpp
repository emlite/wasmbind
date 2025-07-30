#include <webbind/GPUTextureView.hpp>


GPUTextureView GPUTextureView::take_ownership(Handle h) noexcept {
        return GPUTextureView(h);
    }
GPUTextureView GPUTextureView::clone() const noexcept { return *this; }
GPUTextureView::GPUTextureView(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTextureView::GPUTextureView(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String GPUTextureView::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUTextureView::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

