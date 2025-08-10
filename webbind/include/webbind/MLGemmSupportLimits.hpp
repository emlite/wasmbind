#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGemmSupportLimits
class MLGemmSupportLimits : public emlite::Val {
  explicit MLGemmSupportLimits(Handle h) noexcept;
public:
    static MLGemmSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGemmSupportLimits(const emlite::Val &val) noexcept;
    MLGemmSupportLimits() noexcept;
    [[nodiscard]] MLGemmSupportLimits clone() const noexcept;
    /// Getter of the `a` attribute.
    [[nodiscard]] MLTensorLimits a() const;
    /// Setter of the `a` attribute.
    void a(const MLTensorLimits& value);
    /// Getter of the `b` attribute.
    [[nodiscard]] MLTensorLimits b() const;
    /// Setter of the `b` attribute.
    void b(const MLTensorLimits& value);
    /// Getter of the `c` attribute.
    [[nodiscard]] MLTensorLimits c() const;
    /// Setter of the `c` attribute.
    void c(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind