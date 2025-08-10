#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DOMRectInit
class DOMRectInit : public emlite::Val {
  explicit DOMRectInit(Handle h) noexcept;
public:
    static DOMRectInit take_ownership(Handle h) noexcept;
    explicit DOMRectInit(const emlite::Val &val) noexcept;
    DOMRectInit() noexcept;
    [[nodiscard]] DOMRectInit clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    void x(double value);
    /// Getter of the `y` attribute.
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    void y(double value);
    /// Getter of the `width` attribute.
    [[nodiscard]] double width() const;
    /// Setter of the `width` attribute.
    void width(double value);
    /// Getter of the `height` attribute.
    [[nodiscard]] double height() const;
    /// Setter of the `height` attribute.
    void height(double value);
};

} // namespace webbind