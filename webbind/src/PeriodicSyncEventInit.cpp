#include "webbind/PeriodicSyncEventInit.hpp"

using emlite::Val;
namespace webbind {

PeriodicSyncEventInit::PeriodicSyncEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
PeriodicSyncEventInit PeriodicSyncEventInit::take_ownership(Handle h) noexcept {
        return PeriodicSyncEventInit(h);
    }
PeriodicSyncEventInit::PeriodicSyncEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
PeriodicSyncEventInit::PeriodicSyncEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
PeriodicSyncEventInit PeriodicSyncEventInit::clone() const noexcept { return *this; }

jsbind::String PeriodicSyncEventInit::tag() const {
    return emlite::Val::get("tag").as<jsbind::String>();
}

void PeriodicSyncEventInit::tag(const jsbind::String& value) {
    emlite::Val::set("tag", value);
}


} // namespace webbind