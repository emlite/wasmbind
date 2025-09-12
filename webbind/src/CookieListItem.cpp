#include <webbind/CookieListItem.hpp>

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


} // namespace webbind