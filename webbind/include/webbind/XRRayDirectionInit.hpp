#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRRayDirectionInit
/// [`XRRayDirectionInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRRayDirectionInit)
class XRRayDirectionInit : public emlite::Val {
  explicit XRRayDirectionInit(Handle h) noexcept;
public:
    static XRRayDirectionInit take_ownership(Handle h) noexcept;
    explicit XRRayDirectionInit(const emlite::Val &val) noexcept;
    XRRayDirectionInit() noexcept;
    [[nodiscard]] XRRayDirectionInit clone() const noexcept;
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