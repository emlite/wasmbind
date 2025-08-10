#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPointInit;

/// Dictionary type DOMQuadInit
class DOMQuadInit : public emlite::Val {
  explicit DOMQuadInit(Handle h) noexcept;
public:
    static DOMQuadInit take_ownership(Handle h) noexcept;
    explicit DOMQuadInit(const emlite::Val &val) noexcept;
    DOMQuadInit() noexcept;
    [[nodiscard]] DOMQuadInit clone() const noexcept;
    /// Getter of the `p1` attribute.
    [[nodiscard]] DOMPointInit p1() const;
    /// Setter of the `p1` attribute.
    void p1(const DOMPointInit& value);
    /// Getter of the `p2` attribute.
    [[nodiscard]] DOMPointInit p2() const;
    /// Setter of the `p2` attribute.
    void p2(const DOMPointInit& value);
    /// Getter of the `p3` attribute.
    [[nodiscard]] DOMPointInit p3() const;
    /// Setter of the `p3` attribute.
    void p3(const DOMPointInit& value);
    /// Getter of the `p4` attribute.
    [[nodiscard]] DOMPointInit p4() const;
    /// Setter of the `p4` attribute.
    void p4(const DOMPointInit& value);
};

} // namespace webbind