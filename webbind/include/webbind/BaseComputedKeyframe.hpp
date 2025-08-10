#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BaseComputedKeyframe
/// [`BaseComputedKeyframe`](https://developer.mozilla.org/en-US/docs/Web/API/BaseComputedKeyframe)
class BaseComputedKeyframe : public emlite::Val {
  explicit BaseComputedKeyframe(Handle h) noexcept;
public:
    static BaseComputedKeyframe take_ownership(Handle h) noexcept;
    explicit BaseComputedKeyframe(const emlite::Val &val) noexcept;
    BaseComputedKeyframe() noexcept;
    [[nodiscard]] BaseComputedKeyframe clone() const noexcept;
    [[nodiscard]] double offset() const;
    void offset(double value);
    [[nodiscard]] double computedOffset() const;
    void computedOffset(double value);
    [[nodiscard]] jsbind::String easing() const;
    void easing(const jsbind::String& value);
    [[nodiscard]] CompositeOperationOrAuto composite() const;
    void composite(const CompositeOperationOrAuto& value);
};

} // namespace webbind