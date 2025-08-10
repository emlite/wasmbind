#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingModelConstraint
/// [`HandwritingModelConstraint`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingModelConstraint)
class HandwritingModelConstraint : public emlite::Val {
  explicit HandwritingModelConstraint(Handle h) noexcept;
public:
    static HandwritingModelConstraint take_ownership(Handle h) noexcept;
    explicit HandwritingModelConstraint(const emlite::Val &val) noexcept;
    HandwritingModelConstraint() noexcept;
    [[nodiscard]] HandwritingModelConstraint clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    void languages(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind