#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type InkTrailStyle
class InkTrailStyle : public emlite::Val {
  explicit InkTrailStyle(Handle h) noexcept;
public:
    static InkTrailStyle take_ownership(Handle h) noexcept;
    explicit InkTrailStyle(const emlite::Val &val) noexcept;
    InkTrailStyle() noexcept;
    [[nodiscard]] InkTrailStyle clone() const noexcept;
    /// Getter of the `color` attribute.
    [[nodiscard]] jsbind::String color() const;
    /// Setter of the `color` attribute.
    void color(const jsbind::String& value);
    /// Getter of the `diameter` attribute.
    [[nodiscard]] double diameter() const;
    /// Setter of the `diameter` attribute.
    void diameter(double value);
};

} // namespace webbind