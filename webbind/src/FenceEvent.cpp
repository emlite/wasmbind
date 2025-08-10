#include <webbind/FenceEvent.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind