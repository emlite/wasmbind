#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingModelConstraint
class HandwritingModelConstraint : public emlite::Val {
  explicit HandwritingModelConstraint(Handle h) noexcept;
public:
    static HandwritingModelConstraint take_ownership(Handle h) noexcept;
    explicit HandwritingModelConstraint(const emlite::Val &val) noexcept;
    HandwritingModelConstraint() noexcept;
    [[nodiscard]] HandwritingModelConstraint clone() const noexcept;
    /// Getter of the `languages` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    /// Setter of the `languages` attribute.
    void languages(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind