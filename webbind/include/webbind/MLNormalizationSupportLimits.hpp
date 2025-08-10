#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLNormalizationSupportLimits
/// [`MLNormalizationSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLNormalizationSupportLimits)
class MLNormalizationSupportLimits : public emlite::Val {
  explicit MLNormalizationSupportLimits(Handle h) noexcept;
public:
    static MLNormalizationSupportLimits take_ownership(Handle h) noexcept;
    explicit MLNormalizationSupportLimits(const emlite::Val &val) noexcept;
    MLNormalizationSupportLimits() noexcept;
    [[nodiscard]] MLNormalizationSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits scale() const;
    void scale(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits bias() const;
    void bias(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind