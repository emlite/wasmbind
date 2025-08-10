#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUColorDict
/// [`GPUColorDict`](https://developer.mozilla.org/en-US/docs/Web/API/GPUColorDict)
class GPUColorDict : public emlite::Val {
  explicit GPUColorDict(Handle h) noexcept;
public:
    static GPUColorDict take_ownership(Handle h) noexcept;
    explicit GPUColorDict(const emlite::Val &val) noexcept;
    GPUColorDict() noexcept;
    [[nodiscard]] GPUColorDict clone() const noexcept;
    [[nodiscard]] double r() const;
    void r(double value);
    [[nodiscard]] double g() const;
    void g(double value);
    [[nodiscard]] double b() const;
    void b(double value);
    [[nodiscard]] double a() const;
    void a(double value);
};

} // namespace webbind