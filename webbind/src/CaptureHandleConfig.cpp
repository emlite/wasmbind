#include <webbind/CaptureHandleConfig.hpp>

using emlite::Val;
namespace webbind {

CaptureHandleConfig::CaptureHandleConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaptureHandleConfig CaptureHandleConfig::take_ownership(Handle h) noexcept {
        return CaptureHandleConfig(h);
    }
CaptureHandleConfig::CaptureHandleConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
CaptureHandleConfig::CaptureHandleConfig() noexcept: emlite::Val(emlite::Val::object()) {}
CaptureHandleConfig CaptureHandleConfig::clone() const noexcept { return *this; }

bool CaptureHandleConfig::exposeOrigin() const {
    return emlite::Val::get("exposeOrigin").as<bool>();
}

void CaptureHandleConfig::exposeOrigin(bool value) {
    emlite::Val::set("exposeOrigin", value);
}

jsbind::String CaptureHandleConfig::handle() const {
    return emlite::Val::get("handle").as<jsbind::String>();
}

void CaptureHandleConfig::handle(const jsbind::String& value) {
    emlite::Val::set("handle", value);
}

jsbind::TypedArray<jsbind::String> CaptureHandleConfig::permittedOrigins() const {
    return emlite::Val::get("permittedOrigins").as<jsbind::TypedArray<jsbind::String>>();
}

void CaptureHandleConfig::permittedOrigins(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("permittedOrigins", value);
}


} // namespace webbind