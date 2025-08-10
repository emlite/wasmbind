#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLEluOptions
/// [`MLEluOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLEluOptions)
class MLEluOptions : public MLOperatorOptions {
  explicit MLEluOptions(Handle h) noexcept;
public:
    static MLEluOptions take_ownership(Handle h) noexcept;
    explicit MLEluOptions(const emlite::Val &val) noexcept;
    MLEluOptions() noexcept;
    [[nodiscard]] MLEluOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
};

} // namespace webbind