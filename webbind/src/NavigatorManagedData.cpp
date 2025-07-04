#include <webbind/NavigatorManagedData.hpp>


NavigatorManagedData NavigatorManagedData::take_ownership(Handle h) noexcept {
        return NavigatorManagedData(h);
    }
NavigatorManagedData NavigatorManagedData::clone() const noexcept { return *this; }
NavigatorManagedData::NavigatorManagedData(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NavigatorManagedData::NavigatorManagedData(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise NavigatorManagedData::getManagedConfiguration(const jsbind::Sequence<jsbind::DOMString>& keys) {
    return EventTarget::call("getManagedConfiguration", keys).as<jsbind::Promise>();
}

jsbind::Any NavigatorManagedData::onmanagedconfigurationchange() const {
    return EventTarget::get("onmanagedconfigurationchange").as<jsbind::Any>();
}

void NavigatorManagedData::onmanagedconfigurationchange(const jsbind::Any& value) {
    EventTarget::set("onmanagedconfigurationchange", value);
}

jsbind::Promise NavigatorManagedData::getAnnotatedAssetId() {
    return EventTarget::call("getAnnotatedAssetId").as<jsbind::Promise>();
}

jsbind::Promise NavigatorManagedData::getAnnotatedLocation() {
    return EventTarget::call("getAnnotatedLocation").as<jsbind::Promise>();
}

jsbind::Promise NavigatorManagedData::getDirectoryId() {
    return EventTarget::call("getDirectoryId").as<jsbind::Promise>();
}

jsbind::Promise NavigatorManagedData::getHostname() {
    return EventTarget::call("getHostname").as<jsbind::Promise>();
}

jsbind::Promise NavigatorManagedData::getSerialNumber() {
    return EventTarget::call("getSerialNumber").as<jsbind::Promise>();
}

