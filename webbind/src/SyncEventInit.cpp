#include "webbind/SyncEventInit.hpp"

using emlite::Val;
namespace webbind {

SyncEventInit::SyncEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
SyncEventInit SyncEventInit::take_ownership(Handle h) noexcept {
        return SyncEventInit(h);
    }
SyncEventInit::SyncEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
SyncEventInit::SyncEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
SyncEventInit SyncEventInit::clone() const noexcept { return *this; }

jsbind::String SyncEventInit::tag() const {
    return emlite::Val::get("tag").as<jsbind::String>();
}

void SyncEventInit::tag(const jsbind::String& value) {
    emlite::Val::set("tag", value);
}

bool SyncEventInit::lastChance() const {
    return emlite::Val::get("lastChance").as<bool>();
}

void SyncEventInit::lastChance(bool value) {
    emlite::Val::set("lastChance", value);
}


} // namespace webbind