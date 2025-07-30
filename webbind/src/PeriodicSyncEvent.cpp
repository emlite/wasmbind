#include <webbind/PeriodicSyncEvent.hpp>


PeriodicSyncEvent PeriodicSyncEvent::take_ownership(Handle h) noexcept {
        return PeriodicSyncEvent(h);
    }
PeriodicSyncEvent PeriodicSyncEvent::clone() const noexcept { return *this; }
PeriodicSyncEvent::PeriodicSyncEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PeriodicSyncEvent::PeriodicSyncEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


PeriodicSyncEvent::PeriodicSyncEvent(const jsbind::String& type, const jsbind::Any& init) : ExtendableEvent(emlite::Val::global("PeriodicSyncEvent").new_(type, init)) {}

jsbind::String PeriodicSyncEvent::tag() const {
    return ExtendableEvent::get("tag").as<jsbind::String>();
}

