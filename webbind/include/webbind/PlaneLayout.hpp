#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PlaneLayout
/// [`PlaneLayout`](https://developer.mozilla.org/en-US/docs/Web/API/PlaneLayout)
class PlaneLayout : public emlite::Val {
  explicit PlaneLayout(Handle h) noexcept;
public:
    static PlaneLayout take_ownership(Handle h) noexcept;
    explicit PlaneLayout(const emlite::Val &val) noexcept;
    PlaneLayout() noexcept;
    [[nodiscard]] PlaneLayout clone() const noexcept;
    [[nodiscard]] unsigned long offset() const;
    void offset(unsigned long value);
    [[nodiscard]] unsigned long stride() const;
    void stride(unsigned long value);
};

} // namespace webbind