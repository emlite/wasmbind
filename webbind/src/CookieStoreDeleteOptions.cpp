#include <webbind/CookieStoreDeleteOptions.hpp>

namespace webbind {

CookieStoreDeleteOptions::CookieStoreDeleteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieStoreDeleteOptions CookieStoreDeleteOptions::take_ownership(Handle h) noexcept {
    return CookieStoreDeleteOptions(h);
}

CookieStoreDeleteOptions::CookieStoreDeleteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CookieStoreDeleteOptions::CookieStoreDeleteOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CookieStoreDeleteOptions CookieStoreDeleteOptions::clone() const noexcept { return *this; }

jsbind::String CookieStoreDeleteOptions::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieStoreDeleteOptions::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieStoreDeleteOptions::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void CookieStoreDeleteOptions::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String CookieStoreDeleteOptions::path() const {
    return emlite::Val::get("path").as<jsbind::String>();
}

void CookieStoreDeleteOptions::path(const jsbind::String& value) {
    emlite::Val::set("path", value);
}

bool CookieStoreDeleteOptions::partitioned() const {
    return emlite::Val::get("partitioned").as<bool>();
}

void CookieStoreDeleteOptions::partitioned(bool value) {
    emlite::Val::set("partitioned", value);
}


} // namespace webbind