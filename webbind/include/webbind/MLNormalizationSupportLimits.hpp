#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLNormalizationSupportLimits
class MLNormalizationSupportLimits : public emlite::Val {
  explicit MLNormalizationSupportLimits(Handle h) noexcept;
public:
    static MLNormalizationSupportLimits take_ownership(Handle h) noexcept;
    explicit MLNormalizationSupportLimits(const emlite::Val &val) noexcept;
    MLNormalizationSupportLimits() noexcept;
    [[nodiscard]] MLNormalizationSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `scale` attribute.
    [[nodiscard]] MLTensorLimits scale() const;
    /// Setter of the `scale` attribute.
    void scale(const MLTensorLimits& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLTensorLimits bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind