#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type InkTrailStyle
/// [`InkTrailStyle`](https://developer.mozilla.org/en-US/docs/Web/API/InkTrailStyle)
class InkTrailStyle : public emlite::Val {
  explicit InkTrailStyle(Handle h) noexcept;
public:
    static InkTrailStyle take_ownership(Handle h) noexcept;
    explicit InkTrailStyle(const emlite::Val &val) noexcept;
    InkTrailStyle() noexcept;
    [[nodiscard]] InkTrailStyle clone() const noexcept;
    [[nodiscard]] jsbind::String color() const;
    void color(const jsbind::String& value);
    [[nodiscard]] double diameter() const;
    void diameter(double value);
};

} // namespace webbind