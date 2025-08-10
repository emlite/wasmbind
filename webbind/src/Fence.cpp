#include "webbind/Fence.hpp"
#include "webbind/FenceEvent.hpp"
#include "webbind/FencedFrameConfig.hpp"
#include "webbind/Event.hpp"

namespace webbind {

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


} // namespace webbind