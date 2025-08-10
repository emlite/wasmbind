#include <webbind/PresentationConnectionList.hpp>
#include <webbind/PresentationConnection.hpp>

namespace webbind {

PresentationConnectionList PresentationConnectionList::take_ownership(Handle h) noexcept {
        return PresentationConnectionList(h);
    }
PresentationConnectionList PresentationConnectionList::clone() const noexcept { return *this; }
emlite::Val PresentationConnectionList::instance() noexcept { return emlite::Val::global("PresentationConnectionList"); }
PresentationConnectionList::PresentationConnectionList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PresentationConnectionList::PresentationConnectionList(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::TypedArray<PresentationConnection> PresentationConnectionList::connections() const {
    return EventTarget::get("connections").as<jsbind::TypedArray<PresentationConnection>>();
}

jsbind::Any PresentationConnectionList::onconnectionavailable() const {
    return EventTarget::get("onconnectionavailable").as<jsbind::Any>();
}

void PresentationConnectionList::onconnectionavailable(const jsbind::Any& value) {
    EventTarget::set("onconnectionavailable", value);
}


} // namespace webbind