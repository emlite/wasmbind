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
    TrustedTypePolicy createPolicy(const jsbind::String& policyName);
    TrustedTypePolicy createPolicy(const jsbind::String& policyName, const TrustedTypePolicyOptions& policyOptions);
    bool isHTML(const jsbind::Any& value);
    bool isScript(const jsbind::Any& value);
    bool isScriptURL(const jsbind::Any& value);
    TrustedHTML emptyHTML() const;
    TrustedScript emptyScript() const;
    jsbind::String getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute);
    jsbind::String getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute, const jsbind::String& elementNs);
    jsbind::String getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute, const jsbind::String& elementNs, const jsbind::String& attrNs);
    jsbind::String getPropertyType(const jsbind::String& tagName, const jsbind::String& property);
    jsbind::String getPropertyType(const jsbind::String& tagName, const jsbind::String& property, const jsbind::String& elementNs);
    TrustedTypePolicy defaultPolicy() const;
};

