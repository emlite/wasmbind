#include "webbind/Navigation.hpp"
#include "webbind/NavigationHistoryEntry.hpp"
#include "webbind/NavigationUpdateCurrentEntryOptions.hpp"
#include "webbind/NavigationTransition.hpp"
#include "webbind/NavigationActivation.hpp"
#include "webbind/NavigationResult.hpp"
#include "webbind/NavigationNavigateOptions.hpp"
#include "webbind/NavigationReloadOptions.hpp"
#include "webbind/NavigationOptions.hpp"

namespace webbind {

Navigation Navigation::take_ownership(Handle h) noexcept {
        return Navigation(h);
    }
Navigation Navigation::clone() const noexcept { return *this; }
emlite::Val Navigation::instance() noexcept { return emlite::Val::global("Navigation"); }
Navigation::Navigation(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Navigation::Navigation(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::TypedArray<NavigationHistoryEntry> Navigation::entries() {
    return EventTarget::call("entries").as<jsbind::TypedArray<NavigationHistoryEntry>>();
}

NavigationHistoryEntry Navigation::currentEntry() const {
    return EventTarget::get("currentEntry").as<NavigationHistoryEntry>();
}

jsbind::Undefined Navigation::updateCurrentEntry(const NavigationUpdateCurrentEntryOptions& options) {
    return EventTarget::call("updateCurrentEntry", options).as<jsbind::Undefined>();
}

NavigationTransition Navigation::transition() const {
    return EventTarget::get("transition").as<NavigationTransition>();
}

NavigationActivation Navigation::activation() const {
    return EventTarget::get("activation").as<NavigationActivation>();
}

bool Navigation::canGoBack() const {
    return EventTarget::get("canGoBack").as<bool>();
}

bool Navigation::canGoForward() const {
    return EventTarget::get("canGoForward").as<bool>();
}

NavigationResult Navigation::navigate(const jsbind::String& url) {
    return EventTarget::call("navigate", url).as<NavigationResult>();
}

NavigationResult Navigation::navigate(const jsbind::String& url, const NavigationNavigateOptions& options) {
    return EventTarget::call("navigate", url, options).as<NavigationResult>();
}

NavigationResult Navigation::reload() {
    return EventTarget::call("reload").as<NavigationResult>();
}

NavigationResult Navigation::reload(const NavigationReloadOptions& options) {
    return EventTarget::call("reload", options).as<NavigationResult>();
}

NavigationResult Navigation::traverseTo(const jsbind::String& key) {
    return EventTarget::call("traverseTo", key).as<NavigationResult>();
}

NavigationResult Navigation::traverseTo(const jsbind::String& key, const NavigationOptions& options) {
    return EventTarget::call("traverseTo", key, options).as<NavigationResult>();
}

NavigationResult Navigation::back() {
    return EventTarget::call("back").as<NavigationResult>();
}

NavigationResult Navigation::back(const NavigationOptions& options) {
    return EventTarget::call("back", options).as<NavigationResult>();
}

NavigationResult Navigation::forward() {
    return EventTarget::call("forward").as<NavigationResult>();
}

NavigationResult Navigation::forward(const NavigationOptions& options) {
    return EventTarget::call("forward", options).as<NavigationResult>();
}

jsbind::Any Navigation::onnavigate() const {
    return EventTarget::get("onnavigate").as<jsbind::Any>();
}

void Navigation::onnavigate(const jsbind::Any& value) {
    EventTarget::set("onnavigate", value);
}

jsbind::Any Navigation::onnavigatesuccess() const {
    return EventTarget::get("onnavigatesuccess").as<jsbind::Any>();
}

void Navigation::onnavigatesuccess(const jsbind::Any& value) {
    EventTarget::set("onnavigatesuccess", value);
}

jsbind::Any Navigation::onnavigateerror() const {
    return EventTarget::get("onnavigateerror").as<jsbind::Any>();
}

void Navigation::onnavigateerror(const jsbind::Any& value) {
    EventTarget::set("onnavigateerror", value);
}

jsbind::Any Navigation::oncurrententrychange() const {
    return EventTarget::get("oncurrententrychange").as<jsbind::Any>();
}

void Navigation::oncurrententrychange(const jsbind::Any& value) {
    EventTarget::set("oncurrententrychange", value);
}


} // namespace webbind