#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BaseKeyframe
class BaseKeyframe : public emlite::Val {
  explicit BaseKeyframe(Handle h) noexcept;
public:
    static BaseKeyframe take_ownership(Handle h) noexcept;
    explicit BaseKeyframe(const emlite::Val &val) noexcept;
    BaseKeyframe() noexcept;
    [[nodiscard]] BaseKeyframe clone() const noexcept;
    /// Getter of the `offset` attribute.
    [[nodiscard]] double offset() const;
    /// Setter of the `offset` attribute.
    void offset(double value);
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