#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGemmSupportLimits
/// [`MLGemmSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLGemmSupportLimits)
class MLGemmSupportLimits : public emlite::Val {
  explicit MLGemmSupportLimits(Handle h) noexcept;
public:
    static MLGemmSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGemmSupportLimits(const emlite::Val &val) noexcept;
    MLGemmSupportLimits() noexcept;
    [[nodiscard]] MLGemmSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits a() const;
    void a(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits b() const;
    void b(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits c() const;
    void c(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind