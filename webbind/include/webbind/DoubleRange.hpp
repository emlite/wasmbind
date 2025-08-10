#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DoubleRange
/// [`DoubleRange`](https://developer.mozilla.org/en-US/docs/Web/API/DoubleRange)
class DoubleRange : public emlite::Val {
  explicit DoubleRange(Handle h) noexcept;
public:
    static DoubleRange take_ownership(Handle h) noexcept;
    explicit DoubleRange(const emlite::Val &val) noexcept;
    DoubleRange() noexcept;
    [[nodiscard]] DoubleRange clone() const noexcept;
    [[nodiscard]] double max() const;
    void max(double value);
    [[nodiscard]] double min() const;
    void min(double value);
};

} // namespace webbind