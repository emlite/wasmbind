#include <webbind/SyncEvent.hpp>


SyncEvent SyncEvent::take_ownership(Handle h) noexcept {
        return SyncEvent(h);
    }
SyncEvent SyncEvent::clone() const noexcept { return *this; }
SyncEvent::SyncEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
SyncEvent::SyncEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


SyncEvent::SyncEvent(const jsbind::DOMString& type, const jsbind::Any& init): ExtendableEvent(emlite::Val::global("SyncEvent").new_(type, init)) {}

jsbind::DOMString SyncEvent::tag() const {
    return ExtendableEvent::get("tag").as<jsbind::DOMString>();
}

bool SyncEvent::lastChance() const {
    return ExtendableEvent::get("lastChance").as<bool>();
}

