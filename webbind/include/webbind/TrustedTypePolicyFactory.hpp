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
    [[nodiscard]] TrustedTypePolicyOptions clone() const noexcept;
    [[nodiscard]] jsbind::Function createHTML() const;
    void createHTML(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function createScript() const;
    void createScript(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function createScriptURL() const;
    void createScriptURL(const jsbind::Function& value);
};

/// The TrustedTypePolicyFactory class.
/// [`TrustedTypePolicyFactory`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory)
class TrustedTypePolicyFactory : public emlite::Val {
    explicit TrustedTypePolicyFactory(Handle h) noexcept;

public:
    explicit TrustedTypePolicyFactory(const emlite::Val &val) noexcept;
    static TrustedTypePolicyFactory take_ownership(Handle h) noexcept;

    [[nodiscard]] TrustedTypePolicyFactory clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createPolicy method.
    /// [`TrustedTypePolicyFactory.createPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/createPolicy)
    TrustedTypePolicy createPolicy(const jsbind::String& policyName);
    /// The createPolicy method.
    /// [`TrustedTypePolicyFactory.createPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/createPolicy)
    TrustedTypePolicy createPolicy(const jsbind::String& policyName, const TrustedTypePolicyOptions& policyOptions);
    /// The isHTML method.
    /// [`TrustedTypePolicyFactory.isHTML`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/isHTML)
    bool isHTML(const jsbind::Any& value);
    /// The isScript method.
    /// [`TrustedTypePolicyFactory.isScript`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/isScript)
    bool isScript(const jsbind::Any& value);
    /// The isScriptURL method.
    /// [`TrustedTypePolicyFactory.isScriptURL`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/isScriptURL)
    bool isScriptURL(const jsbind::Any& value);
    /// Getter of the `emptyHTML` attribute.
    /// [`TrustedTypePolicyFactory.emptyHTML`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/emptyHTML)
    [[nodiscard]] TrustedHTML emptyHTML() const;
    /// Getter of the `emptyScript` attribute.
    /// [`TrustedTypePolicyFactory.emptyScript`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/emptyScript)
    [[nodiscard]] TrustedScript emptyScript() const;
    /// The getAttributeType method.
    /// [`TrustedTypePolicyFactory.getAttributeType`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/getAttributeType)
    jsbind::String getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute);
    /// The getAttributeType method.
    /// [`TrustedTypePolicyFactory.getAttributeType`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/getAttributeType)
    jsbind::String getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute, const jsbind::String& elementNs);
    /// The getAttributeType method.
    /// [`TrustedTypePolicyFactory.getAttributeType`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/getAttributeType)
    jsbind::String getAttributeType(const jsbind::String& tagName, const jsbind::String& attribute, const jsbind::String& elementNs, const jsbind::String& attrNs);
    /// The getPropertyType method.
    /// [`TrustedTypePolicyFactory.getPropertyType`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/getPropertyType)
    jsbind::String getPropertyType(const jsbind::String& tagName, const jsbind::String& property);
    /// The getPropertyType method.
    /// [`TrustedTypePolicyFactory.getPropertyType`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/getPropertyType)
    jsbind::String getPropertyType(const jsbind::String& tagName, const jsbind::String& property, const jsbind::String& elementNs);
    /// Getter of the `defaultPolicy` attribute.
    /// [`TrustedTypePolicyFactory.defaultPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedTypePolicyFactory/defaultPolicy)
    [[nodiscard]] TrustedTypePolicy defaultPolicy() const;
};

