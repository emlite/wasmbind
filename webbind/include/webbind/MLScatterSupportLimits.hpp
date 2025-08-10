#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLScatterSupportLimits
class MLScatterSupportLimits : public emlite::Val {
  explicit MLScatterSupportLimits(Handle h) noexcept;
public:
    static MLScatterSupportLimits take_ownership(Handle h) noexcept;
    explicit MLScatterSupportLimits(const emlite::Val &val) noexcept;
    MLScatterSupportLimits() noexcept;
    [[nodiscard]] MLScatterSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `indices` attribute.
    [[nodiscard]] MLTensorLimits indices() const;
    /// Setter of the `indices` attribute.
    void indices(const MLTensorLimits& value);
    /// Getter of the `updates` attribute.
    [[nodiscard]] MLTensorLimits updates() const;
    /// Setter of the `updates` attribute.
    void updates(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind