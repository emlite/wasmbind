#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BaseComputedKeyframe
class BaseComputedKeyframe : public emlite::Val {
  explicit BaseComputedKeyframe(Handle h) noexcept;
public:
    static BaseComputedKeyframe take_ownership(Handle h) noexcept;
    explicit BaseComputedKeyframe(const emlite::Val &val) noexcept;
    BaseComputedKeyframe() noexcept;
    [[nodiscard]] BaseComputedKeyframe clone() const noexcept;
    /// Getter of the `offset` attribute.
    [[nodiscard]] double offset() const;
    /// Setter of the `offset` attribute.
    void offset(double value);
    /// Getter of the `computedOffset` attribute.
    [[nodiscard]] double computedOffset() const;
    /// Setter of the `computedOffset` attribute.
    void computedOffset(double value);
    /// Getter of the `easing` attribute.
    [[nodiscard]] jsbind::String easing() const;
    /// Setter of the `easing` attribute.
    void easing(const jsbind::String& value);
    /// Getter of the `composite` attribute.
    [[nodiscard]] CompositeOperationOrAuto composite() const;
    /// Setter of the `composite` attribute.
    void composite(const CompositeOperationOrAuto& value);
};

} // namespace webbind