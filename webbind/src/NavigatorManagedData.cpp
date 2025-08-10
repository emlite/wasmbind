#include "webbind/NavigatorManagedData.hpp"

namespace webbind {

NavigatorManagedData NavigatorManagedData::take_ownership(Handle h) noexcept {
        return NavigatorManagedData(h);
    }
NavigatorManagedData NavigatorManagedData::clone() const noexcept { return *this; }
emlite::Val NavigatorManagedData::instance() noexcept { return emlite::Val::global("NavigatorManagedData"); }
NavigatorManagedData::NavigatorManagedData(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NavigatorManagedData::NavigatorManagedData(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Object>> NavigatorManagedData::getManagedConfiguration(const jsbind::TypedArray<jsbind::String>& keys) {
    return EventTarget::call("getManagedConfiguration", keys).as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Object>>>();
}

jsbind::Any NavigatorManagedData::onmanagedconfigurationchange() const {
    return EventTarget::get("onmanagedconfigurationchange").as<jsbind::Any>();
}

void NavigatorManagedData::onmanagedconfigurationchange(const jsbind::Any& value) {
    EventTarget::set("onmanagedconfigurationchange", value);
}

jsbind::Promise<jsbind::String> NavigatorManagedData::getAnnotatedAssetId() {
    return EventTarget::call("getAnnotatedAssetId").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> NavigatorManagedData::getAnnotatedLocation() {
    return EventTarget::call("getAnnotatedLocation").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> NavigatorManagedData::getDirectoryId() {
    return EventTarget::call("getDirectoryId").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> NavigatorManagedData::getHostname() {
    return EventTarget::call("getHostname").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> NavigatorManagedData::getSerialNumber() {
    return EventTarget::call("getSerialNumber").as<jsbind::Promise<jsbind::String>>();
}


} // namespace webbind