#include <webbind/TrustedTypePolicyFactory.hpp>
#include <webbind/TrustedTypePolicy.hpp>
#include <webbind/TrustedHTML.hpp>
#include <webbind/TrustedScript.hpp>


TrustedTypePolicyOptions::TrustedTypePolicyOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedTypePolicyOptions TrustedTypePolicyOptions::take_ownership(Handle h) noexcept {
        return TrustedTypePolicyOptions(h);
    }
TrustedTypePolicyOptions::TrustedTypePolicyOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
TrustedTypePolicyOptions::TrustedTypePolicyOptions() noexcept: emlite::Val(emlite::Val::object()) {}
TrustedTypePolicyOptions TrustedTypePolicyOptions::clone() const noexcept { return *this; }

jsbind::Function TrustedTypePolicyOptions::createHTML() const {
    return emlite::Val::get("createHTML").as<jsbind::Function>();
}

void TrustedTypePolicyOptions::createHTML(const jsbind::Function& value) {
    emlite::Val::set("createHTML", value);
}

jsbind::Function TrustedTypePolicyOptions::createScript() const {
    return emlite::Val::get("createScript").as<jsbind::Function>();
}

void TrustedTypePolicyOptions::createScript(const jsbind::Function& value) {
    emlite::Val::set("createScript", value);
}

jsbind::Function TrustedTypePolicyOptions::createScriptURL() const {
    return emlite::Val::get("createScriptURL").as<jsbind::Function>();
}

void TrustedTypePolicyOptions::createScriptURL(const jsbind::Function& value) {
    emlite::Val::set("createScriptURL", value);
}

TrustedTypePolicyFactory TrustedTypePolicyFactory::take_ownership(Handle h) noexcept {
        return TrustedTypePolicyFactory(h);
    }
TrustedTypePolicyFactory TrustedTypePolicyFactory::clone() const noexcept { return *this; }
emlite::Val TrustedTypePolicyFactory::instance() noexcept { return emlite::Val::global("TrustedTypePolicyFactory"); }
TrustedTypePolicyFactory::TrustedTypePolicyFactory(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedTypePolicyFactory::TrustedTypePolicyFactory(const emlite::Val &val) noexcept: emlite::Val(val) {}


TrustedTypePolicy TrustedTypePolicyFactory::createPolicy(const jsbind::String& policyName) {
    return emlite::Val::call("createPolicy", policyName).as<TrustedTypePolicy>();
}

TrustedTypePolicy TrustedTypePolicyFactory::createPolicy(const jsbind::String& policyName, const TrustedTypePolicyOptions& policyOptions) {
    return emlite::Val::call("createPolicy", policyName, policyOptions).as<TrustedTypePolicy>();
}

bool TrustedTypePolicyFactory::isHTML(const jsbind::Any& value) {
    return emlite::Val::call("isHTML", value).as<bool>();
}

bool TrustedTypePolicyFactory::isScript(const jsbind::Any& value) {
    return emlite::Val::call("isScript", value).as<bool>();
}

bool TrustedTypePolicyFactory::isScriptURL(const jsbind::Any& value) {
    return emlite::Val::call("isScriptURL", value).as<bool>();
}

TrustedHTML TrustedTypePolicyFactory::emptyHTML() const {
    return emlite::Val::get("emptyHTML").as<TrustedHTML>();
}

TrustedScript TrustedTypePolicyFactory::emptyScript() const {
    return emlite::Val::get("emptyScript").as<TrustedScript>();
}

jsbind::String TrustedTypePolicyFactory::getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute) {
    return emlite::Val::call("getAttributeType", tagName, attribute).as<jsbind::String>();
}

jsbind::String TrustedTypePolicyFactory::getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute, const jsbind::String& elementNs) {
    return emlite::Val::call("getAttributeType", tagName, attribute, elementNs).as<jsbind::String>();
}

jsbind::String TrustedTypePolicyFactory::getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute, const jsbind::String& elementNs, const jsbind::String& attrNs) {
    return emlite::Val::call("getAttributeType", tagName, attribute, elementNs, attrNs).as<jsbind::String>();
}

jsbind::String TrustedTypePolicyFactory::getPropertyType(const jsbind::String& tagName, const jsbind::String& property) {
    return emlite::Val::call("getPropertyType", tagName, property).as<jsbind::String>();
}

jsbind::String TrustedTypePolicyFactory::getPropertyType(const jsbind::String& tagName, const jsbind::String& property, const jsbind::String& elementNs) {
    return emlite::Val::call("getPropertyType", tagName, property, elementNs).as<jsbind::String>();
}

TrustedTypePolicy TrustedTypePolicyFactory::defaultPolicy() const {
    return emlite::Val::get("defaultPolicy").as<TrustedTypePolicy>();
}

