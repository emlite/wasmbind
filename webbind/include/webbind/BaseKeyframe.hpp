#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BaseKeyframe
/// [`BaseKeyframe`](https://developer.mozilla.org/en-US/docs/Web/API/BaseKeyframe)
class BaseKeyframe : public emlite::Val {
  explicit BaseKeyframe(Handle h) noexcept;
public:
    static BaseKeyframe take_ownership(Handle h) noexcept;
    explicit BaseKeyframe(const emlite::Val &val) noexcept;
    BaseKeyframe() noexcept;
    [[nodiscard]] BaseKeyframe clone() const noexcept;
    [[nodiscard]] double offset() const;
    void offset(double value);
    [[nodiscard]] jsbind::String easing() const;
    void easing(const jsbind::String& value);
    [[nodiscard]] CompositeOperationOrAuto composite() const;
    void composite(const CompositeOperationOrAuto& value);
};

} // namespace webbind