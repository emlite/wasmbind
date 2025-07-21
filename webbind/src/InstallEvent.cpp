#include <webbind/InstallEvent.hpp>


InstallEvent InstallEvent::take_ownership(Handle h) noexcept {
        return InstallEvent(h);
    }
InstallEvent InstallEvent::clone() const noexcept { return *this; }
InstallEvent::InstallEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
InstallEvent::InstallEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


InstallEvent::InstallEvent(const jsbind::DOMString& type) : ExtendableEvent(emlite::Val::global("InstallEvent").new_(type)) {}

InstallEvent::InstallEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("InstallEvent").new_(type, eventInitDict)) {}

jsbind::Promise<jsbind::Undefined> InstallEvent::addRoutes(const jsbind::Any& rules) {
    return ExtendableEvent::call("addRoutes", rules).as<jsbind::Promise<jsbind::Undefined>>();
}

