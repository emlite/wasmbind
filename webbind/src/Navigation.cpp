#include <webbind/Navigation.hpp>
#include <webbind/NavigationHistoryEntry.hpp>
#include <webbind/NavigationTransition.hpp>
#include <webbind/NavigationActivation.hpp>


NavigationUpdateCurrentEntryOptions::NavigationUpdateCurrentEntryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions::take_ownership(Handle h) noexcept {
        return NavigationUpdateCurrentEntryOptions(h);
    }
NavigationUpdateCurrentEntryOptions::NavigationUpdateCurrentEntryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationUpdateCurrentEntryOptions::NavigationUpdateCurrentEntryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationUpdateCurrentEntryOptions::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void NavigationUpdateCurrentEntryOptions::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}

NavigationResult::NavigationResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationResult NavigationResult::take_ownership(Handle h) noexcept {
        return NavigationResult(h);
    }
NavigationResult::NavigationResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationResult::NavigationResult() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationResult NavigationResult::clone() const noexcept { return *this; }

jsbind::Promise NavigationResult::committed() const {
    return emlite::Val::get("committed").as<jsbind::Promise>();
}

void NavigationResult::committed(const jsbind::Promise& value) {
    emlite::Val::set("committed", value);
}

jsbind::Promise NavigationResult::finished() const {
    return emlite::Val::get("finished").as<jsbind::Promise>();
}

void NavigationResult::finished(const jsbind::Promise& value) {
    emlite::Val::set("finished", value);
}

NavigationNavigateOptions::NavigationNavigateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationNavigateOptions NavigationNavigateOptions::take_ownership(Handle h) noexcept {
        return NavigationNavigateOptions(h);
    }
NavigationNavigateOptions::NavigationNavigateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationNavigateOptions::NavigationNavigateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationNavigateOptions NavigationNavigateOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationNavigateOptions::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void NavigationNavigateOptions::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}

NavigationHistoryBehavior NavigationNavigateOptions::history() const {
    return emlite::Val::get("history").as<NavigationHistoryBehavior>();
}

void NavigationNavigateOptions::history(const NavigationHistoryBehavior& value) {
    emlite::Val::set("history", value);
}

NavigationReloadOptions::NavigationReloadOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationReloadOptions NavigationReloadOptions::take_ownership(Handle h) noexcept {
        return NavigationReloadOptions(h);
    }
NavigationReloadOptions::NavigationReloadOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationReloadOptions::NavigationReloadOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationReloadOptions NavigationReloadOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationReloadOptions::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void NavigationReloadOptions::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}

NavigationOptions::NavigationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationOptions NavigationOptions::take_ownership(Handle h) noexcept {
        return NavigationOptions(h);
    }
NavigationOptions::NavigationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationOptions::NavigationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationOptions NavigationOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationOptions::info() const {
    return emlite::Val::get("info").as<jsbind::Any>();
}

void NavigationOptions::info(const jsbind::Any& value) {
    emlite::Val::set("info", value);
}

Navigation Navigation::take_ownership(Handle h) noexcept {
        return Navigation(h);
    }
Navigation Navigation::clone() const noexcept { return *this; }
Navigation::Navigation(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Navigation::Navigation(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Sequence<NavigationHistoryEntry> Navigation::entries() {
    return EventTarget::call("entries").as<jsbind::Sequence<NavigationHistoryEntry>>();
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

NavigationResult Navigation::navigate(const jsbind::USVString& url, const NavigationNavigateOptions& options) {
    return EventTarget::call("navigate", url, options).as<NavigationResult>();
}

NavigationResult Navigation::reload(const NavigationReloadOptions& options) {
    return EventTarget::call("reload", options).as<NavigationResult>();
}

NavigationResult Navigation::traverseTo(const jsbind::DOMString& key, const NavigationOptions& options) {
    return EventTarget::call("traverseTo", key, options).as<NavigationResult>();
}

NavigationResult Navigation::back(const NavigationOptions& options) {
    return EventTarget::call("back", options).as<NavigationResult>();
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

