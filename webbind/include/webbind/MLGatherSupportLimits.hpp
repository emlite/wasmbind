#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGatherSupportLimits
class MLGatherSupportLimits : public emlite::Val {
  explicit MLGatherSupportLimits(Handle h) noexcept;
public:
    static MLGatherSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGatherSupportLimits(const emlite::Val &val) noexcept;
    MLGatherSupportLimits() noexcept;
    [[nodiscard]] MLGatherSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `indices` attribute.
    [[nodiscard]] MLTensorLimits indices() const;
    /// Setter of the `indices` attribute.
    void indices(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind