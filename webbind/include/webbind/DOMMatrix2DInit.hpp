#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DOMMatrix2DInit
/// [`DOMMatrix2DInit`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix2DInit)
class DOMMatrix2DInit : public emlite::Val {
  explicit DOMMatrix2DInit(Handle h) noexcept;
public:
    static DOMMatrix2DInit take_ownership(Handle h) noexcept;
    explicit DOMMatrix2DInit(const emlite::Val &val) noexcept;
    DOMMatrix2DInit() noexcept;
    [[nodiscard]] DOMMatrix2DInit clone() const noexcept;
    [[nodiscard]] double a() const;
    void a(double value);
    [[nodiscard]] double b() const;
    void b(double value);
    [[nodiscard]] double c() const;
    void c(double value);
    [[nodiscard]] double d() const;
    void d(double value);
    [[nodiscard]] double e() const;
    void e(double value);
    [[nodiscard]] double f() const;
    void f(double value);
    [[nodiscard]] double m11() const;
    void m11(double value);
    [[nodiscard]] double m12() const;
    void m12(double value);
    [[nodiscard]] double m21() const;
    void m21(double value);
    [[nodiscard]] double m22() const;
    void m22(double value);
    [[nodiscard]] double m41() const;
    void m41(double value);
    [[nodiscard]] double m42() const;
    void m42(double value);
};

} // namespace webbind