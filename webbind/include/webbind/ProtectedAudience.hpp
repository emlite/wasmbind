#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ProtectedAudience
/// [`ProtectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudience)
class ProtectedAudience : public emlite::Val {
    explicit ProtectedAudience(Handle h) noexcept;
public:
    explicit ProtectedAudience(const emlite::Val &val) noexcept;
    static ProtectedAudience take_ownership(Handle h) noexcept;
    [[nodiscard]] ProtectedAudience clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The queryFeatureSupport method.
    /// [`ProtectedAudience.queryFeatureSupport`](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudience/queryFeatureSupport)
    jsbind::Any queryFeatureSupport(const jsbind::String& feature);
};

} // namespace webbind