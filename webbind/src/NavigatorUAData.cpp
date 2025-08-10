#include <webbind/NavigatorUAData.hpp>
#include <webbind/NavigatorUABrandVersion.hpp>
#include <webbind/UADataValues.hpp>
#include <webbind/UALowEntropyJSON.hpp>

namespace webbind {

NavigatorUAData NavigatorUAData::take_ownership(Handle h) noexcept {
    return NavigatorUAData(h);
}

NavigatorUAData NavigatorUAData::clone() const noexcept { return *this; }

emlite::Val NavigatorUAData::instance() noexcept { return emlite::Val::global("NavigatorUAData"); }

NavigatorUAData::NavigatorUAData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NavigatorUAData::NavigatorUAData(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::TypedArray<NavigatorUABrandVersion> NavigatorUAData::brands() const {
    return emlite::Val::get("brands").as<jsbind::TypedArray<NavigatorUABrandVersion>>();
}

bool NavigatorUAData::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

jsbind::String NavigatorUAData::platform() const {
    return emlite::Val::get("platform").as<jsbind::String>();
}

jsbind::Promise<UADataValues> NavigatorUAData::getHighEntropyValues(const jsbind::TypedArray<jsbind::String>& hints) {
    return emlite::Val::call("getHighEntropyValues", hints).as<jsbind::Promise<UADataValues>>();
}

UALowEntropyJSON NavigatorUAData::toJSON() {
    return emlite::Val::call("toJSON").as<UALowEntropyJSON>();
}


} // namespace webbind