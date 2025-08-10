#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ULongRange
/// [`ULongRange`](https://developer.mozilla.org/en-US/docs/Web/API/ULongRange)
class ULongRange : public emlite::Val {
  explicit ULongRange(Handle h) noexcept;
public:
    static ULongRange take_ownership(Handle h) noexcept;
    explicit ULongRange(const emlite::Val &val) noexcept;
    ULongRange() noexcept;
    [[nodiscard]] ULongRange clone() const noexcept;
    [[nodiscard]] unsigned long max() const;
    void max(unsigned long value);
    [[nodiscard]] unsigned long min() const;
    void min(unsigned long value);
};

} // namespace webbind