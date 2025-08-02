#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PermissionsPolicy class.
/// [`PermissionsPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy)
class PermissionsPolicy : public emlite::Val {
    explicit PermissionsPolicy(Handle h) noexcept;

public:
    explicit PermissionsPolicy(const emlite::Val &val) noexcept;
    static PermissionsPolicy take_ownership(Handle h) noexcept;

    [[nodiscard]] PermissionsPolicy clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The allowsFeature method.
    /// [`PermissionsPolicy.allowsFeature`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy/allowsFeature)
    bool allowsFeature(const jsbind::String& feature);
    /// The allowsFeature method.
    /// [`PermissionsPolicy.allowsFeature`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy/allowsFeature)
    bool allowsFeature(const jsbind::String& feature, const jsbind::String& origin);
    /// The features method.
    /// [`PermissionsPolicy.features`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy/features)
    jsbind::TypedArray<jsbind::String> features();
    /// The allowedFeatures method.
    /// [`PermissionsPolicy.allowedFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy/allowedFeatures)
    jsbind::TypedArray<jsbind::String> allowedFeatures();
    /// The getAllowlistForFeature method.
    /// [`PermissionsPolicy.getAllowlistForFeature`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicy/getAllowlistForFeature)
    jsbind::TypedArray<jsbind::String> getAllowlistForFeature(const jsbind::String& feature);
};

