#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLSplitSupportLimits
/// [`MLSplitSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLSplitSupportLimits)
class MLSplitSupportLimits : public emlite::Val {
  explicit MLSplitSupportLimits(Handle h) noexcept;
public:
    static MLSplitSupportLimits take_ownership(Handle h) noexcept;
    explicit MLSplitSupportLimits(const emlite::Val &val) noexcept;
    MLSplitSupportLimits() noexcept;
    [[nodiscard]] MLSplitSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits outputs() const;
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind