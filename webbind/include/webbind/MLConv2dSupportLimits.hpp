#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLConv2dSupportLimits
class MLConv2dSupportLimits : public emlite::Val {
  explicit MLConv2dSupportLimits(Handle h) noexcept;
public:
    static MLConv2dSupportLimits take_ownership(Handle h) noexcept;
    explicit MLConv2dSupportLimits(const emlite::Val &val) noexcept;
    MLConv2dSupportLimits() noexcept;
    [[nodiscard]] MLConv2dSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `filter` attribute.
    [[nodiscard]] MLTensorLimits filter() const;
    /// Setter of the `filter` attribute.
    void filter(const MLTensorLimits& value);
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