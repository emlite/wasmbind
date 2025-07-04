#include <webbind/GPUExternalTexture.hpp>


GPUExternalTexture GPUExternalTexture::take_ownership(Handle h) noexcept {
        return GPUExternalTexture(h);
    }
GPUExternalTexture GPUExternalTexture::clone() const noexcept { return *this; }
GPUExternalTexture::GPUExternalTexture(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUExternalTexture::GPUExternalTexture(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPUExternalTexture::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUExternalTexture::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

