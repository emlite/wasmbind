#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DOMMatrix2DInit
class DOMMatrix2DInit : public emlite::Val {
  explicit DOMMatrix2DInit(Handle h) noexcept;
public:
    static DOMMatrix2DInit take_ownership(Handle h) noexcept;
    explicit DOMMatrix2DInit(const emlite::Val &val) noexcept;
    DOMMatrix2DInit() noexcept;
    [[nodiscard]] DOMMatrix2DInit clone() const noexcept;
    /// Getter of the `a` attribute.
    [[nodiscard]] double a() const;
    /// Setter of the `a` attribute.
    void a(double value);
    /// Getter of the `b` attribute.
    [[nodiscard]] double b() const;
    /// Setter of the `b` attribute.
    void b(double value);
    /// Getter of the `c` attribute.
    [[nodiscard]] double c() const;
    /// Setter of the `c` attribute.
    void c(double value);
    /// Getter of the `d` attribute.
    [[nodiscard]] double d() const;
    /// Setter of the `d` attribute.
    void d(double value);
    /// Getter of the `e` attribute.
    [[nodiscard]] double e() const;
    /// Setter of the `e` attribute.
    void e(double value);
    /// Getter of the `f` attribute.
    [[nodiscard]] double f() const;
    /// Setter of the `f` attribute.
    void f(double value);
    /// Getter of the `m11` attribute.
    [[nodiscard]] double m11() const;
    /// Setter of the `m11` attribute.
    void m11(double value);
    /// Getter of the `m12` attribute.
    [[nodiscard]] double m12() const;
    /// Setter of the `m12` attribute.
    void m12(double value);
    /// Getter of the `m21` attribute.
    [[nodiscard]] double m21() const;
    /// Setter of the `m21` attribute.
    void m21(double value);
    /// Getter of the `m22` attribute.
    [[nodiscard]] double m22() const;
    /// Setter of the `m22` attribute.
    void m22(double value);
    /// Getter of the `m41` attribute.
    [[nodiscard]] double m41() const;
    /// Setter of the `m41` attribute.
    void m41(double value);
    /// Getter of the `m42` attribute.
    [[nodiscard]] double m42() const;
    /// Setter of the `m42` attribute.
    void m42(double value);
};

} // namespace webbind