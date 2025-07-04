#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ProtectedAudience : public emlite::Val {
    explicit ProtectedAudience(Handle h) noexcept;

public:
    explicit ProtectedAudience(const emlite::Val &val) noexcept;
    static ProtectedAudience take_ownership(Handle h) noexcept;

    ProtectedAudience clone() const noexcept;
    jsbind::Any queryFeatureSupport(const jsbind::DOMString& feature);
};

