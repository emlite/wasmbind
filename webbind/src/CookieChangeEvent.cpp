#include <webbind/CookieChangeEvent.hpp>
#include <webbind/CookieStore.hpp>


CookieChangeEvent CookieChangeEvent::take_ownership(Handle h) noexcept {
        return CookieChangeEvent(h);
    }
CookieChangeEvent CookieChangeEvent::clone() const noexcept { return *this; }
CookieChangeEvent::CookieChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CookieChangeEvent::CookieChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


CookieChangeEvent::CookieChangeEvent(const jsbind::String& type) : Event(emlite::Val::global("CookieChangeEvent").new_(type)) {}

CookieChangeEvent::CookieChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("CookieChangeEvent").new_(type, eventInitDict)) {}

jsbind::TypedArray<CookieListItem> CookieChangeEvent::changed() const {
    return Event::get("changed").as<jsbind::TypedArray<CookieListItem>>();
}

jsbind::TypedArray<CookieListItem> CookieChangeEvent::deleted() const {
    return Event::get("deleted").as<jsbind::TypedArray<CookieListItem>>();
}

