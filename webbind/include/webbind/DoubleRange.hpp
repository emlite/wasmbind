#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DoubleRange
class DoubleRange : public emlite::Val {
  explicit DoubleRange(Handle h) noexcept;
public:
    static DoubleRange take_ownership(Handle h) noexcept;
    explicit DoubleRange(const emlite::Val &val) noexcept;
    DoubleRange() noexcept;
    [[nodiscard]] DoubleRange clone() const noexcept;
    /// Getter of the `max` attribute.
    [[nodiscard]] double max() const;
    /// Setter of the `max` attribute.
    void max(double value);
    /// Getter of the `min` attribute.
    [[nodiscard]] double min() const;
    /// Setter of the `min` attribute.
    void min(double value);
};

} // namespace webbind