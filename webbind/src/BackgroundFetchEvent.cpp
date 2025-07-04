#include <webbind/BackgroundFetchEvent.hpp>
#include <webbind/BackgroundFetchRegistration.hpp>


BackgroundFetchEvent BackgroundFetchEvent::take_ownership(Handle h) noexcept {
        return BackgroundFetchEvent(h);
    }
BackgroundFetchEvent BackgroundFetchEvent::clone() const noexcept { return *this; }
BackgroundFetchEvent::BackgroundFetchEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
BackgroundFetchEvent::BackgroundFetchEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


BackgroundFetchEvent::BackgroundFetchEvent(const jsbind::DOMString& type, const jsbind::Any& init): ExtendableEvent(emlite::Val::global("BackgroundFetchEvent").new_(type, init)) {}

BackgroundFetchRegistration BackgroundFetchEvent::registration() const {
    return ExtendableEvent::get("registration").as<BackgroundFetchRegistration>();
}

