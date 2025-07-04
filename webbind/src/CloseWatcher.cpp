#include <webbind/CloseWatcher.hpp>


CloseWatcher CloseWatcher::take_ownership(Handle h) noexcept {
        return CloseWatcher(h);
    }
CloseWatcher CloseWatcher::clone() const noexcept { return *this; }
CloseWatcher::CloseWatcher(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
CloseWatcher::CloseWatcher(const emlite::Val &val) noexcept: EventTarget(val) {}


CloseWatcher::CloseWatcher(const jsbind::Any& options): EventTarget(emlite::Val::global("CloseWatcher").new_(options)) {}

jsbind::Undefined CloseWatcher::requestClose() {
    return EventTarget::call("requestClose").as<jsbind::Undefined>();
}

jsbind::Undefined CloseWatcher::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined CloseWatcher::destroy() {
    return EventTarget::call("destroy").as<jsbind::Undefined>();
}

jsbind::Any CloseWatcher::oncancel() const {
    return EventTarget::get("oncancel").as<jsbind::Any>();
}

void CloseWatcher::oncancel(const jsbind::Any& value) {
    EventTarget::set("oncancel", value);
}

jsbind::Any CloseWatcher::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void CloseWatcher::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

