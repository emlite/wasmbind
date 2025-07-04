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
    bool allowsFeature(const jsbind::DOMString& feature, const jsbind::DOMString& origin);
    jsbind::Sequence<jsbind::DOMString> features();
    jsbind::Sequence<jsbind::DOMString> allowedFeatures();
    jsbind::Sequence<jsbind::DOMString> getAllowlistForFeature(const jsbind::DOMString& feature);
};

