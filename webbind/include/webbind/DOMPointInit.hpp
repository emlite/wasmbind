#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DOMPointInit
class DOMPointInit : public emlite::Val {
  explicit DOMPointInit(Handle h) noexcept;
public:
    static DOMPointInit take_ownership(Handle h) noexcept;
    explicit DOMPointInit(const emlite::Val &val) noexcept;
    DOMPointInit() noexcept;
    [[nodiscard]] DOMPointInit clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    void x(double value);
    /// Getter of the `y` attribute.
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    void y(double value);
    /// Getter of the `z` attribute.
    [[nodiscard]] double z() const;
    /// Setter of the `z` attribute.
    void z(double value);
    /// Getter of the `w` attribute.
    [[nodiscard]] double w() const;
    /// Setter of the `w` attribute.
    void w(double value);
};

} // namespace webbind