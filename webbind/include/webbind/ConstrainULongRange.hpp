#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ULongRange.hpp"

namespace webbind {

/// Dictionary type ConstrainULongRange
class ConstrainULongRange : public ULongRange {
  explicit ConstrainULongRange(Handle h) noexcept;
public:
    static ConstrainULongRange take_ownership(Handle h) noexcept;
    explicit ConstrainULongRange(const emlite::Val &val) noexcept;
    ConstrainULongRange() noexcept;
    [[nodiscard]] ConstrainULongRange clone() const noexcept;
    /// Getter of the `exact` attribute.
    [[nodiscard]] unsigned long exact() const;
    /// Setter of the `exact` attribute.
    void exact(unsigned long value);
    /// Getter of the `ideal` attribute.
    [[nodiscard]] unsigned long ideal() const;
    /// Setter of the `ideal` attribute.
    void ideal(unsigned long value);
};

} // namespace webbind