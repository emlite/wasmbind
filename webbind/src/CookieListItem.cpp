#include "webbind/CookieListItem.hpp"

using emlite::Val;
namespace webbind {

CookieListItem::CookieListItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieListItem CookieListItem::take_ownership(Handle h) noexcept {
        return CookieListItem(h);
    }
CookieListItem::CookieListItem(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieListItem::CookieListItem() noexcept: emlite::Val(emlite::Val::object()) {}
CookieListItem CookieListItem::clone() const noexcept { return *this; }

jsbind::String CookieListItem::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieListItem::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieListItem::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void CookieListItem::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}

jsbind::String CookieListItem::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void CookieListItem::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String CookieListItem::path() const {
    return emlite::Val::get("path").as<jsbind::String>();
}

void CookieListItem::path(const jsbind::String& value) {
    emlite::Val::set("path", value);
}

jsbind::Any CookieListItem::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

void CookieListItem::expires(const jsbind::Any& value) {
    emlite::Val::set("expires", value);
}

bool CookieListItem::secure() const {
    return emlite::Val::get("secure").as<bool>();
}

void CookieListItem::secure(bool value) {
    emlite::Val::set("secure", value);
}

CookieSameSite CookieListItem::sameSite() const {
    return emlite::Val::get("sameSite").as<CookieSameSite>();
}

void CookieListItem::sameSite(const CookieSameSite& value) {
    emlite::Val::set("sameSite", value);
}

bool CookieListItem::partitioned() const {
    return emlite::Val::get("partitioned").as<bool>();
}

void CookieListItem::partitioned(bool value) {
    emlite::Val::set("partitioned", value);
}


} // namespace webbind