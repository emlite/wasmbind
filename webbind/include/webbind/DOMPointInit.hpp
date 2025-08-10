#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DOMPointInit
/// [`DOMPointInit`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointInit)
class DOMPointInit : public emlite::Val {
  explicit DOMPointInit(Handle h) noexcept;
public:
    static DOMPointInit take_ownership(Handle h) noexcept;
    explicit DOMPointInit(const emlite::Val &val) noexcept;
    DOMPointInit() noexcept;
    [[nodiscard]] DOMPointInit clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
    [[nodiscard]] double z() const;
    void z(double value);
    [[nodiscard]] double w() const;
    void w(double value);
};

} // namespace webbind