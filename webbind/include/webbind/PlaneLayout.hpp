#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PlaneLayout
class PlaneLayout : public emlite::Val {
  explicit PlaneLayout(Handle h) noexcept;
public:
    static PlaneLayout take_ownership(Handle h) noexcept;
    explicit PlaneLayout(const emlite::Val &val) noexcept;
    PlaneLayout() noexcept;
    [[nodiscard]] PlaneLayout clone() const noexcept;
    /// Getter of the `offset` attribute.
    [[nodiscard]] unsigned long offset() const;
    /// Setter of the `offset` attribute.
    void offset(unsigned long value);
    /// Getter of the `stride` attribute.
    [[nodiscard]] unsigned long stride() const;
    /// Setter of the `stride` attribute.
    void stride(unsigned long value);
};

} // namespace webbind