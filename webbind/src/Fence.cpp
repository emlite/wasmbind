#include <webbind/Fence.hpp>
#include <webbind/FencedFrameConfig.hpp>
#include <webbind/Event.hpp>


FenceEvent::FenceEvent(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FenceEvent FenceEvent::take_ownership(Handle h) noexcept {
        return FenceEvent(h);
    }
FenceEvent::FenceEvent(const emlite::Val &val) noexcept: emlite::Val(val) {}
FenceEvent::FenceEvent() noexcept: emlite::Val(emlite::Val::object()) {}
FenceEvent FenceEvent::clone() const noexcept { return *this; }

jsbind::String FenceEvent::eventType() const {
    return emlite::Val::get("eventType").as<jsbind::String>();
}

void FenceEvent::eventType(const jsbind::String& value) {
    emlite::Val::set("eventType", value);
}

jsbind::String FenceEvent::eventData() const {
    return emlite::Val::get("eventData").as<jsbind::String>();
}

void FenceEvent::eventData(const jsbind::String& value) {
    emlite::Val::set("eventData", value);
}

jsbind::TypedArray<FenceReportingDestination> FenceEvent::destination() const {
    return emlite::Val::get("destination").as<jsbind::TypedArray<FenceReportingDestination>>();
}

void FenceEvent::destination(const jsbind::TypedArray<FenceReportingDestination>& value) {
    emlite::Val::set("destination", value);
}

bool FenceEvent::crossOriginExposed() const {
    return emlite::Val::get("crossOriginExposed").as<bool>();
}

void FenceEvent::crossOriginExposed(bool value) {
    emlite::Val::set("crossOriginExposed", value);
}

bool FenceEvent::once() const {
    return emlite::Val::get("once").as<bool>();
}

void FenceEvent::once(bool value) {
    emlite::Val::set("once", value);
}

jsbind::String FenceEvent::destinationURL() const {
    return emlite::Val::get("destinationURL").as<jsbind::String>();
}

void FenceEvent::destinationURL(const jsbind::String& value) {
    emlite::Val::set("destinationURL", value);
}

Fence Fence::take_ownership(Handle h) noexcept {
        return Fence(h);
    }
Fence Fence::clone() const noexcept { return *this; }
emlite::Val Fence::instance() noexcept { return emlite::Val::global("Fence"); }
Fence::Fence(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Fence::Fence(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined Fence::reportEvent() {
    return emlite::Val::call("reportEvent").as<jsbind::Undefined>();
}

jsbind::Undefined Fence::reportEvent(const jsbind::Any& event) {
    return emlite::Val::call("reportEvent", event).as<jsbind::Undefined>();
}

jsbind::Undefined Fence::setReportEventDataForAutomaticBeacons() {
    return emlite::Val::call("setReportEventDataForAutomaticBeacons").as<jsbind::Undefined>();
}

jsbind::Undefined Fence::setReportEventDataForAutomaticBeacons(const FenceEvent& event) {
    return emlite::Val::call("setReportEventDataForAutomaticBeacons", event).as<jsbind::Undefined>();
}

jsbind::TypedArray<FencedFrameConfig> Fence::getNestedConfigs() {
    return emlite::Val::call("getNestedConfigs").as<jsbind::TypedArray<FencedFrameConfig>>();
}

jsbind::Promise<jsbind::Undefined> Fence::disableUntrustedNetwork() {
    return emlite::Val::call("disableUntrustedNetwork").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined Fence::notifyEvent(const Event& event) {
    return emlite::Val::call("notifyEvent", event).as<jsbind::Undefined>();
}

