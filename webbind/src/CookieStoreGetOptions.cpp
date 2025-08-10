#include <webbind/CookieStoreGetOptions.hpp>

using emlite::Val;
namespace webbind {

CookieStoreGetOptions::CookieStoreGetOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieStoreGetOptions CookieStoreGetOptions::take_ownership(Handle h) noexcept {
        return CookieStoreGetOptions(h);
    }
CookieStoreGetOptions::CookieStoreGetOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieStoreGetOptions::CookieStoreGetOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CookieStoreGetOptions CookieStoreGetOptions::clone() const noexcept { return *this; }

jsbind::String CookieStoreGetOptions::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieStoreGetOptions::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieStoreGetOptions::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void CookieStoreGetOptions::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}


} // namespace webbind