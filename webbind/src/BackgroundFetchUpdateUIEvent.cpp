#include <webbind/BackgroundFetchUpdateUIEvent.hpp>
#include <webbind/BackgroundFetchEventInit.hpp>
#include <webbind/BackgroundFetchUIOptions.hpp>

namespace webbind {

BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent::take_ownership(Handle h) noexcept {
        return BackgroundFetchUpdateUIEvent(h);
    }
BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent::clone() const noexcept { return *this; }
emlite::Val BackgroundFetchUpdateUIEvent::instance() noexcept { return emlite::Val::global("BackgroundFetchUpdateUIEvent"); }
BackgroundFetchUpdateUIEvent::BackgroundFetchUpdateUIEvent(Handle h) noexcept : BackgroundFetchEvent(emlite::Val::take_ownership(h)) {}
BackgroundFetchUpdateUIEvent::BackgroundFetchUpdateUIEvent(const emlite::Val &val) noexcept: BackgroundFetchEvent(val) {}

BackgroundFetchUpdateUIEvent::BackgroundFetchUpdateUIEvent(const jsbind::String& type, const BackgroundFetchEventInit& init) : BackgroundFetchEvent(emlite::Val::global("BackgroundFetchUpdateUIEvent").new_(type, init)) {}

jsbind::Promise<jsbind::Undefined> BackgroundFetchUpdateUIEvent::updateUI() {
    return BackgroundFetchEvent::call("updateUI").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> BackgroundFetchUpdateUIEvent::updateUI(const BackgroundFetchUIOptions& options) {
    return BackgroundFetchEvent::call("updateUI", options).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind