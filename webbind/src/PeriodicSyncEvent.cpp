#include "webbind/PeriodicSyncEvent.hpp"
#include "webbind/PeriodicSyncEventInit.hpp"

namespace webbind {

PeriodicSyncEvent PeriodicSyncEvent::take_ownership(Handle h) noexcept {
        return PeriodicSyncEvent(h);
    }
PeriodicSyncEvent PeriodicSyncEvent::clone() const noexcept { return *this; }
emlite::Val PeriodicSyncEvent::instance() noexcept { return emlite::Val::global("PeriodicSyncEvent"); }
PeriodicSyncEvent::PeriodicSyncEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PeriodicSyncEvent::PeriodicSyncEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

PeriodicSyncEvent::PeriodicSyncEvent(const jsbind::String& type, const PeriodicSyncEventInit& init) : ExtendableEvent(emlite::Val::global("PeriodicSyncEvent").new_(type, init)) {}

jsbind::String PeriodicSyncEvent::tag() const {
    return ExtendableEvent::get("tag").as<jsbind::String>();
}


} // namespace webbind