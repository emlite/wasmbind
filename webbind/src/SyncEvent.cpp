#include <webbind/SyncEvent.hpp>
#include <webbind/SyncEventInit.hpp>

namespace webbind {

SyncEvent SyncEvent::take_ownership(Handle h) noexcept {
        return SyncEvent(h);
    }
SyncEvent SyncEvent::clone() const noexcept { return *this; }
emlite::Val SyncEvent::instance() noexcept { return emlite::Val::global("SyncEvent"); }
SyncEvent::SyncEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
SyncEvent::SyncEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

SyncEvent::SyncEvent(const jsbind::String& type, const SyncEventInit& init) : ExtendableEvent(emlite::Val::global("SyncEvent").new_(type, init)) {}

jsbind::String SyncEvent::tag() const {
    return ExtendableEvent::get("tag").as<jsbind::String>();
}

bool SyncEvent::lastChance() const {
    return ExtendableEvent::get("lastChance").as<bool>();
}


} // namespace webbind