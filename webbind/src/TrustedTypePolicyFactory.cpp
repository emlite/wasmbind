#include "webbind/TrustedTypePolicyFactory.hpp"
#include "webbind/TrustedTypePolicy.hpp"
#include "webbind/TrustedTypePolicyOptions.hpp"
#include "webbind/TrustedHTML.hpp"
#include "webbind/TrustedScript.hpp"

namespace webbind {

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


} // namespace webbind