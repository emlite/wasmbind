#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLSingleInputSupportLimits
/// [`MLSingleInputSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLSingleInputSupportLimits)
class MLSingleInputSupportLimits : public emlite::Val {
  explicit MLSingleInputSupportLimits(Handle h) noexcept;
public:
    static MLSingleInputSupportLimits take_ownership(Handle h) noexcept;
    explicit MLSingleInputSupportLimits(const emlite::Val &val) noexcept;
    MLSingleInputSupportLimits() noexcept;
    [[nodiscard]] MLSingleInputSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind