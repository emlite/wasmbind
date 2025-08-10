#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DoubleRange.hpp"

namespace webbind {

/// Dictionary type ConstrainDoubleRange
class ConstrainDoubleRange : public DoubleRange {
  explicit ConstrainDoubleRange(Handle h) noexcept;
public:
    static ConstrainDoubleRange take_ownership(Handle h) noexcept;
    explicit ConstrainDoubleRange(const emlite::Val &val) noexcept;
    ConstrainDoubleRange() noexcept;
    [[nodiscard]] ConstrainDoubleRange clone() const noexcept;
    /// Getter of the `exact` attribute.
    [[nodiscard]] double exact() const;
    /// Setter of the `exact` attribute.
    void exact(double value);
    /// Getter of the `ideal` attribute.
    [[nodiscard]] double ideal() const;
    /// Setter of the `ideal` attribute.
    void ideal(double value);
};

} // namespace webbind