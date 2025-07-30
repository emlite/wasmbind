#include <webbind/NavigationHistoryEntry.hpp>


NavigationHistoryEntry NavigationHistoryEntry::take_ownership(Handle h) noexcept {
        return NavigationHistoryEntry(h);
    }
NavigationHistoryEntry NavigationHistoryEntry::clone() const noexcept { return *this; }
NavigationHistoryEntry::NavigationHistoryEntry(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NavigationHistoryEntry::NavigationHistoryEntry(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::String NavigationHistoryEntry::url() const {
    return EventTarget::get("url").as<jsbind::String>();
}

jsbind::String NavigationHistoryEntry::key() const {
    return EventTarget::get("key").as<jsbind::String>();
}

jsbind::String NavigationHistoryEntry::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

long long NavigationHistoryEntry::index() const {
    return EventTarget::get("index").as<long long>();
}

bool NavigationHistoryEntry::sameDocument() const {
    return EventTarget::get("sameDocument").as<bool>();
}

jsbind::Any NavigationHistoryEntry::getState() {
    return EventTarget::call("getState").as<jsbind::Any>();
}

jsbind::Any NavigationHistoryEntry::ondispose() const {
    return EventTarget::get("ondispose").as<jsbind::Any>();
}

void NavigationHistoryEntry::ondispose(const jsbind::Any& value) {
    EventTarget::set("ondispose", value);
}

