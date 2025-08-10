#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMMatrix2DInit.hpp"

namespace webbind {

/// Dictionary type DOMMatrixInit
/// [`DOMMatrixInit`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixInit)
class DOMMatrixInit : public DOMMatrix2DInit {
  explicit DOMMatrixInit(Handle h) noexcept;
public:
    static DOMMatrixInit take_ownership(Handle h) noexcept;
    explicit DOMMatrixInit(const emlite::Val &val) noexcept;
    DOMMatrixInit() noexcept;
    [[nodiscard]] DOMMatrixInit clone() const noexcept;
    [[nodiscard]] double m13() const;
    void m13(double value);
    [[nodiscard]] double m14() const;
    void m14(double value);
    [[nodiscard]] double m23() const;
    void m23(double value);
    [[nodiscard]] double m24() const;
    void m24(double value);
    [[nodiscard]] double m31() const;
    void m31(double value);
    [[nodiscard]] double m32() const;
    void m32(double value);
    [[nodiscard]] double m33() const;
    void m33(double value);
    [[nodiscard]] double m34() const;
    void m34(double value);
    [[nodiscard]] double m43() const;
    void m43(double value);
    [[nodiscard]] double m44() const;
    void m44(double value);
    [[nodiscard]] bool is2D() const;
    void is2D(bool value);
};

} // namespace webbind