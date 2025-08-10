#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SVGBoundingBoxOptions
class SVGBoundingBoxOptions : public emlite::Val {
  explicit SVGBoundingBoxOptions(Handle h) noexcept;
public:
    static SVGBoundingBoxOptions take_ownership(Handle h) noexcept;
    explicit SVGBoundingBoxOptions(const emlite::Val &val) noexcept;
    SVGBoundingBoxOptions() noexcept;
    [[nodiscard]] SVGBoundingBoxOptions clone() const noexcept;
    /// Getter of the `fill` attribute.
    [[nodiscard]] bool fill() const;
    /// Setter of the `fill` attribute.
    void fill(bool value);
    /// Getter of the `stroke` attribute.
    [[nodiscard]] bool stroke() const;
    /// Setter of the `stroke` attribute.
    void stroke(bool value);
    /// Getter of the `markers` attribute.
    [[nodiscard]] bool markers() const;
    /// Setter of the `markers` attribute.
    void markers(bool value);
    /// Getter of the `clipped` attribute.
    [[nodiscard]] bool clipped() const;
    /// Setter of the `clipped` attribute.
    void clipped(bool value);
};

} // namespace webbind