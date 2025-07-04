#include <webbind/PresentationConnectionList.hpp>
#include <webbind/PresentationConnection.hpp>


PresentationConnectionList PresentationConnectionList::take_ownership(Handle h) noexcept {
        return PresentationConnectionList(h);
    }
PresentationConnectionList PresentationConnectionList::clone() const noexcept { return *this; }
PresentationConnectionList::PresentationConnectionList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PresentationConnectionList::PresentationConnectionList(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::FrozenArray<PresentationConnection> PresentationConnectionList::connections() const {
    return EventTarget::get("connections").as<jsbind::FrozenArray<PresentationConnection>>();
}

jsbind::Any PresentationConnectionList::onconnectionavailable() const {
    return EventTarget::get("onconnectionavailable").as<jsbind::Any>();
}

void PresentationConnectionList::onconnectionavailable(const jsbind::Any& value) {
    EventTarget::set("onconnectionavailable", value);
}

