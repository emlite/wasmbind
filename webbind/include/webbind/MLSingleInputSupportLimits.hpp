#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLSingleInputSupportLimits
class MLSingleInputSupportLimits : public emlite::Val {
  explicit MLSingleInputSupportLimits(Handle h) noexcept;
public:
    static MLSingleInputSupportLimits take_ownership(Handle h) noexcept;
    explicit MLSingleInputSupportLimits(const emlite::Val &val) noexcept;
    MLSingleInputSupportLimits() noexcept;
    [[nodiscard]] MLSingleInputSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind