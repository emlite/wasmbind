#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUColorDict
class GPUColorDict : public emlite::Val {
  explicit GPUColorDict(Handle h) noexcept;
public:
    static GPUColorDict take_ownership(Handle h) noexcept;
    explicit GPUColorDict(const emlite::Val &val) noexcept;
    GPUColorDict() noexcept;
    [[nodiscard]] GPUColorDict clone() const noexcept;
    /// Getter of the `r` attribute.
    [[nodiscard]] double r() const;
    /// Setter of the `r` attribute.
    void r(double value);
    /// Getter of the `g` attribute.
    [[nodiscard]] double g() const;
    /// Setter of the `g` attribute.
    void g(double value);
    /// Getter of the `b` attribute.
    [[nodiscard]] double b() const;
    /// Setter of the `b` attribute.
    void b(double value);
    /// Getter of the `a` attribute.
    [[nodiscard]] double a() const;
    /// Setter of the `a` attribute.
    void a(double value);
};

} // namespace webbind