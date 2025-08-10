#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLSplitSupportLimits
class MLSplitSupportLimits : public emlite::Val {
  explicit MLSplitSupportLimits(Handle h) noexcept;
public:
    static MLSplitSupportLimits take_ownership(Handle h) noexcept;
    explicit MLSplitSupportLimits(const emlite::Val &val) noexcept;
    MLSplitSupportLimits() noexcept;
    [[nodiscard]] MLSplitSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `outputs` attribute.
    [[nodiscard]] MLDataTypeLimits outputs() const;
    /// Setter of the `outputs` attribute.
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind