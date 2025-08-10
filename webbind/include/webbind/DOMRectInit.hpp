#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DOMRectInit
/// [`DOMRectInit`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectInit)
class DOMRectInit : public emlite::Val {
  explicit DOMRectInit(Handle h) noexcept;
public:
    static DOMRectInit take_ownership(Handle h) noexcept;
    explicit DOMRectInit(const emlite::Val &val) noexcept;
    DOMRectInit() noexcept;
    [[nodiscard]] DOMRectInit clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
    [[nodiscard]] double width() const;
    void width(double value);
    [[nodiscard]] double height() const;
    void height(double value);
};

} // namespace webbind