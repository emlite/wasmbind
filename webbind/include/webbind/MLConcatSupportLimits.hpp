#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLConcatSupportLimits
/// [`MLConcatSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLConcatSupportLimits)
class MLConcatSupportLimits : public emlite::Val {
  explicit MLConcatSupportLimits(Handle h) noexcept;
public:
    static MLConcatSupportLimits take_ownership(Handle h) noexcept;
    explicit MLConcatSupportLimits(const emlite::Val &val) noexcept;
    MLConcatSupportLimits() noexcept;
    [[nodiscard]] MLConcatSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits inputs() const;
    void inputs(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind