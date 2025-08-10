#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMMatrix2DInit.hpp"

namespace webbind {

/// Dictionary type DOMMatrixInit
class DOMMatrixInit : public DOMMatrix2DInit {
  explicit DOMMatrixInit(Handle h) noexcept;
public:
    static DOMMatrixInit take_ownership(Handle h) noexcept;
    explicit DOMMatrixInit(const emlite::Val &val) noexcept;
    DOMMatrixInit() noexcept;
    [[nodiscard]] DOMMatrixInit clone() const noexcept;
    /// Getter of the `m13` attribute.
    [[nodiscard]] double m13() const;
    /// Setter of the `m13` attribute.
    void m13(double value);
    /// Getter of the `m14` attribute.
    [[nodiscard]] double m14() const;
    /// Setter of the `m14` attribute.
    void m14(double value);
    /// Getter of the `m23` attribute.
    [[nodiscard]] double m23() const;
    /// Setter of the `m23` attribute.
    void m23(double value);
    /// Getter of the `m24` attribute.
    [[nodiscard]] double m24() const;
    /// Setter of the `m24` attribute.
    void m24(double value);
    /// Getter of the `m31` attribute.
    [[nodiscard]] double m31() const;
    /// Setter of the `m31` attribute.
    void m31(double value);
    /// Getter of the `m32` attribute.
    [[nodiscard]] double m32() const;
    /// Setter of the `m32` attribute.
    void m32(double value);
    /// Getter of the `m33` attribute.
    [[nodiscard]] double m33() const;
    /// Setter of the `m33` attribute.
    void m33(double value);
    /// Getter of the `m34` attribute.
    [[nodiscard]] double m34() const;
    /// Setter of the `m34` attribute.
    void m34(double value);
    /// Getter of the `m43` attribute.
    [[nodiscard]] double m43() const;
    /// Setter of the `m43` attribute.
    void m43(double value);
    /// Getter of the `m44` attribute.
    [[nodiscard]] double m44() const;
    /// Setter of the `m44` attribute.
    void m44(double value);
    /// Getter of the `is2D` attribute.
    [[nodiscard]] bool is2D() const;
    /// Setter of the `is2D` attribute.
    void is2D(bool value);
};

} // namespace webbind