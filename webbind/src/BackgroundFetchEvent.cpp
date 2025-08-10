#include "webbind/BackgroundFetchEvent.hpp"
#include "webbind/BackgroundFetchEventInit.hpp"
#include "webbind/BackgroundFetchRegistration.hpp"

namespace webbind {

BackgroundFetchEvent BackgroundFetchEvent::take_ownership(Handle h) noexcept {
        return BackgroundFetchEvent(h);
    }
BackgroundFetchEvent BackgroundFetchEvent::clone() const noexcept { return *this; }
emlite::Val BackgroundFetchEvent::instance() noexcept { return emlite::Val::global("BackgroundFetchEvent"); }
BackgroundFetchEvent::BackgroundFetchEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
BackgroundFetchEvent::BackgroundFetchEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

BackgroundFetchEvent::BackgroundFetchEvent(const jsbind::String& type, const BackgroundFetchEventInit& init) : ExtendableEvent(emlite::Val::global("BackgroundFetchEvent").new_(type, init)) {}

BackgroundFetchRegistration BackgroundFetchEvent::registration() const {
    return ExtendableEvent::get("registration").as<BackgroundFetchRegistration>();
}


} // namespace webbind