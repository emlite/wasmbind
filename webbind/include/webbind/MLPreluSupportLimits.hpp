#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLPreluSupportLimits
class MLPreluSupportLimits : public emlite::Val {
  explicit MLPreluSupportLimits(Handle h) noexcept;
public:
    static MLPreluSupportLimits take_ownership(Handle h) noexcept;
    explicit MLPreluSupportLimits(const emlite::Val &val) noexcept;
    MLPreluSupportLimits() noexcept;
    [[nodiscard]] MLPreluSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `slope` attribute.
    [[nodiscard]] MLTensorLimits slope() const;
    /// Setter of the `slope` attribute.
    void slope(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind