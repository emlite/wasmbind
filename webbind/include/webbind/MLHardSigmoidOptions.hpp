#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLHardSigmoidOptions
/// [`MLHardSigmoidOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLHardSigmoidOptions)
class MLHardSigmoidOptions : public MLOperatorOptions {
  explicit MLHardSigmoidOptions(Handle h) noexcept;
public:
    static MLHardSigmoidOptions take_ownership(Handle h) noexcept;
    explicit MLHardSigmoidOptions(const emlite::Val &val) noexcept;
    MLHardSigmoidOptions() noexcept;
    [[nodiscard]] MLHardSigmoidOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
};

} // namespace webbind