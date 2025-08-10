#include <webbind/CookieInit.hpp>

using emlite::Val;
namespace webbind {

CookieInit::CookieInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieInit CookieInit::take_ownership(Handle h) noexcept {
        return CookieInit(h);
    }
CookieInit::CookieInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieInit::CookieInit() noexcept: emlite::Val(emlite::Val::object()) {}
CookieInit CookieInit::clone() const noexcept { return *this; }

jsbind::String CookieInit::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieInit::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieInit::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void CookieInit::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}

jsbind::Any CookieInit::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

void CookieInit::expires(const jsbind::Any& value) {
    emlite::Val::set("expires", value);
}

jsbind::String CookieInit::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void CookieInit::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String CookieInit::path() const {
    return emlite::Val::get("path").as<jsbind::String>();
}

void CookieInit::path(const jsbind::String& value) {
    emlite::Val::set("path", value);
}

CookieSameSite CookieInit::sameSite() const {
    return emlite::Val::get("sameSite").as<CookieSameSite>();
}

void CookieInit::sameSite(const CookieSameSite& value) {
    emlite::Val::set("sameSite", value);
}

bool CookieInit::partitioned() const {
    return emlite::Val::get("partitioned").as<bool>();
}

void CookieInit::partitioned(bool value) {
    emlite::Val::set("partitioned", value);
}


} // namespace webbind