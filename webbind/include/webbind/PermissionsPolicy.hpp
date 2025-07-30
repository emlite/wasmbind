#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PermissionsPolicy : public emlite::Val {
    explicit PermissionsPolicy(Handle h) noexcept;

public:
    explicit PermissionsPolicy(const emlite::Val &val) noexcept;
    static PermissionsPolicy take_ownership(Handle h) noexcept;

    PermissionsPolicy clone() const noexcept;
    bool allowsFeature(const jsbind::String& feature);
    bool allowsFeature(const jsbind::String& feature, const jsbind::String& origin);
    jsbind::TypedArray<jsbind::String> features();
    jsbind::TypedArray<jsbind::String> allowedFeatures();
    jsbind::TypedArray<jsbind::String> getAllowlistForFeature(const jsbind::String& feature);
};

