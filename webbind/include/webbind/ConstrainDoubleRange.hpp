#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DoubleRange.hpp"

namespace webbind {

/// Dictionary type ConstrainDoubleRange
/// [`ConstrainDoubleRange`](https://developer.mozilla.org/en-US/docs/Web/API/ConstrainDoubleRange)
class ConstrainDoubleRange : public DoubleRange {
  explicit ConstrainDoubleRange(Handle h) noexcept;
public:
    static ConstrainDoubleRange take_ownership(Handle h) noexcept;
    explicit ConstrainDoubleRange(const emlite::Val &val) noexcept;
    ConstrainDoubleRange() noexcept;
    [[nodiscard]] ConstrainDoubleRange clone() const noexcept;
    [[nodiscard]] double exact() const;
    void exact(double value);
    [[nodiscard]] double ideal() const;
    void ideal(double value);
};

} // namespace webbind