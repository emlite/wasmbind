#include <webbind/ExtendableCookieChangeEvent.hpp>
#include <webbind/CookieStore.hpp>


ExtendableCookieChangeEvent ExtendableCookieChangeEvent::take_ownership(Handle h) noexcept {
        return ExtendableCookieChangeEvent(h);
    }
ExtendableCookieChangeEvent ExtendableCookieChangeEvent::clone() const noexcept { return *this; }
ExtendableCookieChangeEvent::ExtendableCookieChangeEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
ExtendableCookieChangeEvent::ExtendableCookieChangeEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


ExtendableCookieChangeEvent::ExtendableCookieChangeEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("ExtendableCookieChangeEvent").new_(type)) {}

ExtendableCookieChangeEvent::ExtendableCookieChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("ExtendableCookieChangeEvent").new_(type, eventInitDict)) {}

jsbind::TypedArray<CookieListItem> ExtendableCookieChangeEvent::changed() const {
    return ExtendableEvent::get("changed").as<jsbind::TypedArray<CookieListItem>>();
}

jsbind::TypedArray<CookieListItem> ExtendableCookieChangeEvent::deleted() const {
    return ExtendableEvent::get("deleted").as<jsbind::TypedArray<CookieListItem>>();
}

