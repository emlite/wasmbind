#include <webbind/BackgroundFetchUpdateUIEvent.hpp>


BackgroundFetchUIOptions::BackgroundFetchUIOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BackgroundFetchUIOptions BackgroundFetchUIOptions::take_ownership(Handle h) noexcept {
        return BackgroundFetchUIOptions(h);
    }
BackgroundFetchUIOptions::BackgroundFetchUIOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BackgroundFetchUIOptions::BackgroundFetchUIOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BackgroundFetchUIOptions BackgroundFetchUIOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> BackgroundFetchUIOptions::icons() const {
    return emlite::Val::get("icons").as<jsbind::TypedArray<jsbind::Any>>();
}

void BackgroundFetchUIOptions::icons(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("icons", value);
}

jsbind::String BackgroundFetchUIOptions::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void BackgroundFetchUIOptions::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent::take_ownership(Handle h) noexcept {
        return BackgroundFetchUpdateUIEvent(h);
    }
BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent::clone() const noexcept { return *this; }
BackgroundFetchUpdateUIEvent::BackgroundFetchUpdateUIEvent(Handle h) noexcept : BackgroundFetchEvent(emlite::Val::take_ownership(h)) {}
BackgroundFetchUpdateUIEvent::BackgroundFetchUpdateUIEvent(const emlite::Val &val) noexcept: BackgroundFetchEvent(val) {}


BackgroundFetchUpdateUIEvent::BackgroundFetchUpdateUIEvent(const jsbind::String& type, const jsbind::Any& init) : BackgroundFetchEvent(emlite::Val::global("BackgroundFetchUpdateUIEvent").new_(type, init)) {}

jsbind::Promise<jsbind::Undefined> BackgroundFetchUpdateUIEvent::updateUI() {
    return BackgroundFetchEvent::call("updateUI").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> BackgroundFetchUpdateUIEvent::updateUI(const BackgroundFetchUIOptions& options) {
    return BackgroundFetchEvent::call("updateUI", options).as<jsbind::Promise<jsbind::Undefined>>();
}

