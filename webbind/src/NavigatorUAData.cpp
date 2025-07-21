#include <webbind/NavigatorUAData.hpp>


NavigatorUABrandVersion::NavigatorUABrandVersion(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigatorUABrandVersion NavigatorUABrandVersion::take_ownership(Handle h) noexcept {
        return NavigatorUABrandVersion(h);
    }
NavigatorUABrandVersion::NavigatorUABrandVersion(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigatorUABrandVersion::NavigatorUABrandVersion() noexcept: emlite::Val(emlite::Val::object()) {}
NavigatorUABrandVersion NavigatorUABrandVersion::clone() const noexcept { return *this; }

jsbind::DOMString NavigatorUABrandVersion::brand() const {
    return emlite::Val::get("brand").as<jsbind::DOMString>();
}

void NavigatorUABrandVersion::brand(const jsbind::DOMString& value) {
    emlite::Val::set("brand", value);
}

jsbind::DOMString NavigatorUABrandVersion::version() const {
    return emlite::Val::get("version").as<jsbind::DOMString>();
}

void NavigatorUABrandVersion::version(const jsbind::DOMString& value) {
    emlite::Val::set("version", value);
}

UADataValues::UADataValues(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UADataValues UADataValues::take_ownership(Handle h) noexcept {
        return UADataValues(h);
    }
UADataValues::UADataValues(const emlite::Val &val) noexcept: emlite::Val(val) {}
UADataValues::UADataValues() noexcept: emlite::Val(emlite::Val::object()) {}
UADataValues UADataValues::clone() const noexcept { return *this; }

jsbind::DOMString UADataValues::architecture() const {
    return emlite::Val::get("architecture").as<jsbind::DOMString>();
}

void UADataValues::architecture(const jsbind::DOMString& value) {
    emlite::Val::set("architecture", value);
}

jsbind::DOMString UADataValues::bitness() const {
    return emlite::Val::get("bitness").as<jsbind::DOMString>();
}

void UADataValues::bitness(const jsbind::DOMString& value) {
    emlite::Val::set("bitness", value);
}

jsbind::Sequence<NavigatorUABrandVersion> UADataValues::brands() const {
    return emlite::Val::get("brands").as<jsbind::Sequence<NavigatorUABrandVersion>>();
}

void UADataValues::brands(const jsbind::Sequence<NavigatorUABrandVersion>& value) {
    emlite::Val::set("brands", value);
}

jsbind::Sequence<jsbind::DOMString> UADataValues::formFactors() const {
    return emlite::Val::get("formFactors").as<jsbind::Sequence<jsbind::DOMString>>();
}

void UADataValues::formFactors(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("formFactors", value);
}

jsbind::Sequence<NavigatorUABrandVersion> UADataValues::fullVersionList() const {
    return emlite::Val::get("fullVersionList").as<jsbind::Sequence<NavigatorUABrandVersion>>();
}

void UADataValues::fullVersionList(const jsbind::Sequence<NavigatorUABrandVersion>& value) {
    emlite::Val::set("fullVersionList", value);
}

jsbind::DOMString UADataValues::model() const {
    return emlite::Val::get("model").as<jsbind::DOMString>();
}

void UADataValues::model(const jsbind::DOMString& value) {
    emlite::Val::set("model", value);
}

bool UADataValues::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

void UADataValues::mobile(bool value) {
    emlite::Val::set("mobile", value);
}

jsbind::DOMString UADataValues::platform() const {
    return emlite::Val::get("platform").as<jsbind::DOMString>();
}

void UADataValues::platform(const jsbind::DOMString& value) {
    emlite::Val::set("platform", value);
}

jsbind::DOMString UADataValues::platformVersion() const {
    return emlite::Val::get("platformVersion").as<jsbind::DOMString>();
}

void UADataValues::platformVersion(const jsbind::DOMString& value) {
    emlite::Val::set("platformVersion", value);
}

jsbind::DOMString UADataValues::uaFullVersion() const {
    return emlite::Val::get("uaFullVersion").as<jsbind::DOMString>();
}

void UADataValues::uaFullVersion(const jsbind::DOMString& value) {
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

jsbind::Sequence<NavigatorUABrandVersion> UALowEntropyJSON::brands() const {
    return emlite::Val::get("brands").as<jsbind::Sequence<NavigatorUABrandVersion>>();
}

void UALowEntropyJSON::brands(const jsbind::Sequence<NavigatorUABrandVersion>& value) {
    emlite::Val::set("brands", value);
}

bool UALowEntropyJSON::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

void UALowEntropyJSON::mobile(bool value) {
    emlite::Val::set("mobile", value);
}

jsbind::DOMString UALowEntropyJSON::platform() const {
    return emlite::Val::get("platform").as<jsbind::DOMString>();
}

void UALowEntropyJSON::platform(const jsbind::DOMString& value) {
    emlite::Val::set("platform", value);
}

NavigatorUAData NavigatorUAData::take_ownership(Handle h) noexcept {
        return NavigatorUAData(h);
    }
NavigatorUAData NavigatorUAData::clone() const noexcept { return *this; }
NavigatorUAData::NavigatorUAData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigatorUAData::NavigatorUAData(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<NavigatorUABrandVersion> NavigatorUAData::brands() const {
    return emlite::Val::get("brands").as<jsbind::FrozenArray<NavigatorUABrandVersion>>();
}

bool NavigatorUAData::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

jsbind::DOMString NavigatorUAData::platform() const {
    return emlite::Val::get("platform").as<jsbind::DOMString>();
}

jsbind::Promise<UADataValues> NavigatorUAData::getHighEntropyValues(const jsbind::Sequence<jsbind::DOMString>& hints) {
    return emlite::Val::call("getHighEntropyValues", hints).as<jsbind::Promise<UADataValues>>();
}

UALowEntropyJSON NavigatorUAData::toJSON() {
    return emlite::Val::call("toJSON").as<UALowEntropyJSON>();
}

