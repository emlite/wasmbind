#include <webbind/GPURenderBundle.hpp>

namespace webbind {

GPURenderBundle GPURenderBundle::take_ownership(Handle h) noexcept {
        return GPURenderBundle(h);
    }
GPURenderBundle GPURenderBundle::clone() const noexcept { return *this; }
emlite::Val GPURenderBundle::instance() noexcept { return emlite::Val::global("GPURenderBundle"); }
GPURenderBundle::GPURenderBundle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderBundle::GPURenderBundle(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPURenderBundle::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPURenderBundle::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind