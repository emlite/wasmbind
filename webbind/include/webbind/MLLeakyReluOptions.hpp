#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLLeakyReluOptions
/// [`MLLeakyReluOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLLeakyReluOptions)
class MLLeakyReluOptions : public MLOperatorOptions {
  explicit MLLeakyReluOptions(Handle h) noexcept;
public:
    static MLLeakyReluOptions take_ownership(Handle h) noexcept;
    explicit MLLeakyReluOptions(const emlite::Val &val) noexcept;
    MLLeakyReluOptions() noexcept;
    [[nodiscard]] MLLeakyReluOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
};

} // namespace webbind