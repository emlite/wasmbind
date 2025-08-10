#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLHardSigmoidOptions
class MLHardSigmoidOptions : public MLOperatorOptions {
  explicit MLHardSigmoidOptions(Handle h) noexcept;
public:
    static MLHardSigmoidOptions take_ownership(Handle h) noexcept;
    explicit MLHardSigmoidOptions(const emlite::Val &val) noexcept;
    MLHardSigmoidOptions() noexcept;
    [[nodiscard]] MLHardSigmoidOptions clone() const noexcept;
    /// Getter of the `alpha` attribute.
    [[nodiscard]] double alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(double value);
    /// Getter of the `beta` attribute.
    [[nodiscard]] double beta() const;
    /// Setter of the `beta` attribute.
    void beta(double value);
};

} // namespace webbind