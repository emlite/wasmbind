#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SVGBoundingBoxOptions
/// [`SVGBoundingBoxOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SVGBoundingBoxOptions)
class SVGBoundingBoxOptions : public emlite::Val {
  explicit SVGBoundingBoxOptions(Handle h) noexcept;
public:
    static SVGBoundingBoxOptions take_ownership(Handle h) noexcept;
    explicit SVGBoundingBoxOptions(const emlite::Val &val) noexcept;
    SVGBoundingBoxOptions() noexcept;
    [[nodiscard]] SVGBoundingBoxOptions clone() const noexcept;
    [[nodiscard]] bool fill() const;
    void fill(bool value);
    [[nodiscard]] bool stroke() const;
    void stroke(bool value);
    [[nodiscard]] bool markers() const;
    void markers(bool value);
    [[nodiscard]] bool clipped() const;
    void clipped(bool value);
};

} // namespace webbind