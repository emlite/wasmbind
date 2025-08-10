#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SVGPathDataSettings
class SVGPathDataSettings : public emlite::Val {
  explicit SVGPathDataSettings(Handle h) noexcept;
public:
    static SVGPathDataSettings take_ownership(Handle h) noexcept;
    explicit SVGPathDataSettings(const emlite::Val &val) noexcept;
    SVGPathDataSettings() noexcept;
    [[nodiscard]] SVGPathDataSettings clone() const noexcept;
    /// Getter of the `normalize` attribute.
    [[nodiscard]] bool normalize() const;
    /// Setter of the `normalize` attribute.
    void normalize(bool value);
};

} // namespace webbind