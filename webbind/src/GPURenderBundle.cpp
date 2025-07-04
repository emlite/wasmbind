#include <webbind/GPURenderBundle.hpp>


GPURenderBundle GPURenderBundle::take_ownership(Handle h) noexcept {
        return GPURenderBundle(h);
    }
GPURenderBundle GPURenderBundle::clone() const noexcept { return *this; }
GPURenderBundle::GPURenderBundle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderBundle::GPURenderBundle(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPURenderBundle::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPURenderBundle::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

