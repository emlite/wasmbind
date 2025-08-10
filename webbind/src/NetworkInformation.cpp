#include "webbind/NetworkInformation.hpp"

namespace webbind {

NetworkInformation NetworkInformation::take_ownership(Handle h) noexcept {
        return NetworkInformation(h);
    }
NetworkInformation NetworkInformation::clone() const noexcept { return *this; }
emlite::Val NetworkInformation::instance() noexcept { return emlite::Val::global("NetworkInformation"); }
NetworkInformation::NetworkInformation(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NetworkInformation::NetworkInformation(const emlite::Val &val) noexcept: EventTarget(val) {}

ConnectionType NetworkInformation::type() const {
    return EventTarget::get("type").as<ConnectionType>();
}

EffectiveConnectionType NetworkInformation::effectiveType() const {
    return EventTarget::get("effectiveType").as<EffectiveConnectionType>();
}

jsbind::Any NetworkInformation::downlinkMax() const {
    return EventTarget::get("downlinkMax").as<jsbind::Any>();
}

jsbind::Any NetworkInformation::downlink() const {
    return EventTarget::get("downlink").as<jsbind::Any>();
}

jsbind::Any NetworkInformation::rtt() const {
    return EventTarget::get("rtt").as<jsbind::Any>();
}

jsbind::Any NetworkInformation::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void NetworkInformation::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

bool NetworkInformation::saveData() const {
    return EventTarget::get("saveData").as<bool>();
}


} // namespace webbind