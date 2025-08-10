#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SVGPathDataSettings
/// [`SVGPathDataSettings`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathDataSettings)
class SVGPathDataSettings : public emlite::Val {
  explicit SVGPathDataSettings(Handle h) noexcept;
public:
    static SVGPathDataSettings take_ownership(Handle h) noexcept;
    explicit SVGPathDataSettings(const emlite::Val &val) noexcept;
    SVGPathDataSettings() noexcept;
    [[nodiscard]] SVGPathDataSettings clone() const noexcept;
    [[nodiscard]] bool normalize() const;
    void normalize(bool value);
};

} // namespace webbind