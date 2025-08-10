#include <webbind/CookieChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

CookieChangeEventInit::CookieChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CookieChangeEventInit CookieChangeEventInit::take_ownership(Handle h) noexcept {
        return CookieChangeEventInit(h);
    }
CookieChangeEventInit::CookieChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
CookieChangeEventInit::CookieChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
CookieChangeEventInit CookieChangeEventInit::clone() const noexcept { return *this; }

jsbind::Any CookieChangeEventInit::changed() const {
    return emlite::Val::get("changed").as<jsbind::Any>();
}

void CookieChangeEventInit::changed(const jsbind::Any& value) {
    emlite::Val::set("changed", value);
}

jsbind::Any CookieChangeEventInit::deleted() const {
    return emlite::Val::get("deleted").as<jsbind::Any>();
}

void CookieChangeEventInit::deleted(const jsbind::Any& value) {
    emlite::Val::set("deleted", value);
}


} // namespace webbind