#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TrustedTypePolicy;
class TrustedTypePolicyOptions;
class TrustedHTML;
class TrustedScript;


class TrustedTypePolicyOptions : public emlite::Val {
  explicit TrustedTypePolicyOptions(Handle h) noexcept;
public:
    static TrustedTypePolicyOptions take_ownership(Handle h) noexcept;
    explicit TrustedTypePolicyOptions(const emlite::Val &val) noexcept;
    TrustedTypePolicyOptions() noexcept;
    TrustedTypePolicyOptions clone() const noexcept;
    jsbind::Function createHTML() const;
    void createHTML(const jsbind::Function& value);
    jsbind::Function createScript() const;
    void createScript(const jsbind::Function& value);
    jsbind::Function createScriptURL() const;
    void createScriptURL(const jsbind::Function& value);
};

class TrustedTypePolicyFactory : public emlite::Val {
    explicit TrustedTypePolicyFactory(Handle h) noexcept;

public:
    explicit TrustedTypePolicyFactory(const emlite::Val &val) noexcept;
    static TrustedTypePolicyFactory take_ownership(Handle h) noexcept;

    TrustedTypePolicyFactory clone() const noexcept;
    TrustedTypePolicy createPolicy(const jsbind::DOMString& policyName);
    TrustedTypePolicy createPolicy(const jsbind::DOMString& policyName, const TrustedTypePolicyOptions& policyOptions);
    bool isHTML(const jsbind::Any& value);
    bool isScript(const jsbind::Any& value);
    bool isScriptURL(const jsbind::Any& value);
    TrustedHTML emptyHTML() const;
    TrustedScript emptyScript() const;
    jsbind::DOMString getAttributeType(const jsbind::DOMString& tagName, const jsbind::DOMString& attribute);
    jsbind::DOMString getAttributeType(const jsbind::DOMString& tagName, const jsbind::DOMString& attribute, const jsbind::DOMString& elementNs);
    jsbind::DOMString getAttributeType(const jsbind::DOMString& tagName, const jsbind::DOMString& attribute, const jsbind::DOMString& elementNs, const jsbind::DOMString& attrNs);
    jsbind::DOMString getPropertyType(const jsbind::DOMString& tagName, const jsbind::DOMString& property);
    jsbind::DOMString getPropertyType(const jsbind::DOMString& tagName, const jsbind::DOMString& property, const jsbind::DOMString& elementNs);
    TrustedTypePolicy defaultPolicy() const;
};

