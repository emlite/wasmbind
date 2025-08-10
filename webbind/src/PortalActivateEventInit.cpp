#include "webbind/PortalActivateEventInit.hpp"

using emlite::Val;
namespace webbind {

PortalActivateEventInit::PortalActivateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PortalActivateEventInit PortalActivateEventInit::take_ownership(Handle h) noexcept {
        return PortalActivateEventInit(h);
    }
PortalActivateEventInit::PortalActivateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
PortalActivateEventInit::PortalActivateEventInit() noexcept: EventInit(emlite::Val::object()) {}
PortalActivateEventInit PortalActivateEventInit::clone() const noexcept { return *this; }

jsbind::Any PortalActivateEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void PortalActivateEventInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind