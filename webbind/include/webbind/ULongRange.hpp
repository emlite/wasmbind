#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ULongRange
class ULongRange : public emlite::Val {
  explicit ULongRange(Handle h) noexcept;
public:
    static ULongRange take_ownership(Handle h) noexcept;
    explicit ULongRange(const emlite::Val &val) noexcept;
    ULongRange() noexcept;
    [[nodiscard]] ULongRange clone() const noexcept;
    /// Getter of the `max` attribute.
    [[nodiscard]] unsigned long max() const;
    /// Setter of the `max` attribute.
    void max(unsigned long value);
    /// Getter of the `min` attribute.
    [[nodiscard]] unsigned long min() const;
    /// Setter of the `min` attribute.
    void min(unsigned long value);
};

} // namespace webbind