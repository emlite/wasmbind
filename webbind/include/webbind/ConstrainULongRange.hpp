#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ULongRange.hpp"

namespace webbind {

/// Dictionary type ConstrainULongRange
/// [`ConstrainULongRange`](https://developer.mozilla.org/en-US/docs/Web/API/ConstrainULongRange)
class ConstrainULongRange : public ULongRange {
  explicit ConstrainULongRange(Handle h) noexcept;
public:
    static ConstrainULongRange take_ownership(Handle h) noexcept;
    explicit ConstrainULongRange(const emlite::Val &val) noexcept;
    ConstrainULongRange() noexcept;
    [[nodiscard]] ConstrainULongRange clone() const noexcept;
    [[nodiscard]] unsigned long exact() const;
    void exact(unsigned long value);
    [[nodiscard]] unsigned long ideal() const;
    void ideal(unsigned long value);
};

} // namespace webbind