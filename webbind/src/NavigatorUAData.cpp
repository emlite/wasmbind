#include <webbind/NavigatorUAData.hpp>


NavigatorUABrandVersion::NavigatorUABrandVersion(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigatorUABrandVersion NavigatorUABrandVersion::take_ownership(Handle h) noexcept {
        return NavigatorUABrandVersion(h);
    }
NavigatorUABrandVersion::NavigatorUABrandVersion(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigatorUABrandVersion::NavigatorUABrandVersion() noexcept: emlite::Val(emlite::Val::object()) {}
NavigatorUABrandVersion NavigatorUABrandVersion::clone() const noexcept { return *this; }

jsbind::String NavigatorUABrandVersion::brand() const {
    return emlite::Val::get("brand").as<jsbind::String>();
}

void NavigatorUABrandVersion::brand(const jsbind::String& value) {
    emlite::Val::set("brand", value);
}

jsbind::String NavigatorUABrandVersion::version() const {
    return emlite::Val::get("version").as<jsbind::String>();
}

void NavigatorUABrandVersion::version(const jsbind::String& value) {
    emlite::Val::set("version", value);
}

UADataValues::UADataValues(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UADataValues UADataValues::take_ownership(Handle h) noexcept {
        return UADataValues(h);
    }
UADataValues::UADataValues(const emlite::Val &val) noexcept: emlite::Val(val) {}
UADataValues::UADataValues() noexcept: emlite::Val(emlite::Val::object()) {}
UADataValues UADataValues::clone() const noexcept { return *this; }

jsbind::String UADataValues::architecture() const {
    return emlite::Val::get("architecture").as<jsbind::String>();
}

void UADataValues::architecture(const jsbind::String& value) {
    emlite::Val::set("architecture", value);
}

jsbind::String UADataValues::bitness() const {
    return emlite::Val::get("bitness").as<jsbind::String>();
}

void UADataValues::bitness(const jsbind::String& value) {
    emlite::Val::set("bitness", value);
}

jsbind::TypedArray<NavigatorUABrandVersion> UADataValues::brands() const {
    return emlite::Val::get("brands").as<jsbind::TypedArray<NavigatorUABrandVersion>>();
}

void UADataValues::brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value) {
    emlite::Val::set("brands", value);
}

jsbind::TypedArray<jsbind::String> UADataValues::formFactors() const {
    return emlite::Val::get("formFactors").as<jsbind::TypedArray<jsbind::String>>();
}

void UADataValues::formFactors(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("formFactors", value);
}

jsbind::TypedArray<NavigatorUABrandVersion> UADataValues::fullVersionList() const {
    return emlite::Val::get("fullVersionList").as<jsbind::TypedArray<NavigatorUABrandVersion>>();
}

void UADataValues::fullVersionList(const jsbind::TypedArray<NavigatorUABrandVersion>& value) {
    emlite::Val::set("fullVersionList", value);
}

jsbind::String UADataValues::model() const {
    return emlite::Val::get("model").as<jsbind::String>();
}

void UADataValues::model(const jsbind::String& value) {
    emlite::Val::set("model", value);
}

bool UADataValues::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

void UADataValues::mobile(bool value) {
    emlite::Val::set("mobile", value);
}

jsbind::String UADataValues::platform() const {
    return emlite::Val::get("platform").as<jsbind::String>();
}

void UADataValues::platform(const jsbind::String& value) {
    emlite::Val::set("platform", value);
}

jsbind::String UADataValues::platformVersion() const {
    return emlite::Val::get("platformVersion").as<jsbind::String>();
}

void UADataValues::platformVersion(const jsbind::String& value) {
    emlite::Val::set("platformVersion", value);
}

jsbind::String UADataValues::uaFullVersion() const {
    return emlite::Val::get("uaFullVersion").as<jsbind::String>();
}

void UADataValues::uaFullVersion(const jsbind::String& value) {
    emlite::Val::set("uaFullVersion", value);
}

bool UADataValues::wow64() const {
    return emlite::Val::get("wow64").as<bool>();
}

void UADataValues::wow64(bool value) {
    emlite::Val::set("wow64", value);
}

UALowEntropyJSON::UALowEntropyJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UALowEntropyJSON UALowEntropyJSON::take_ownership(Handle h) noexcept {
        return UALowEntropyJSON(h);
    }
UALowEntropyJSON::UALowEntropyJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
UALowEntropyJSON::UALowEntropyJSON() noexcept: emlite::Val(emlite::Val::object()) {}
UALowEntropyJSON UALowEntropyJSON::clone() const noexcept { return *this; }

jsbind::TypedArray<NavigatorUABrandVersion> UALowEntropyJSON::brands() const {
    return emlite::Val::get("brands").as<jsbind::TypedArray<NavigatorUABrandVersion>>();
}

void UALowEntropyJSON::brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value) {
    emlite::Val::set("brands", value);
}

bool UALowEntropyJSON::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

void UALowEntropyJSON::mobile(bool value) {
    emlite::Val::set("mobile", value);
}

jsbind::String UALowEntropyJSON::platform() const {
    return emlite::Val::get("platform").as<jsbind::String>();
}

void UALowEntropyJSON::platform(const jsbind::String& value) {
    emlite::Val::set("platform", value);
}

NavigatorUAData NavigatorUAData::take_ownership(Handle h) noexcept {
        return NavigatorUAData(h);
    }
NavigatorUAData NavigatorUAData::clone() const noexcept { return *this; }
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

