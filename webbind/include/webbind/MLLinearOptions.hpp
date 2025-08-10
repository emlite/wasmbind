#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLLinearOptions
class MLLinearOptions : public MLOperatorOptions {
  explicit MLLinearOptions(Handle h) noexcept;
public:
    static MLLinearOptions take_ownership(Handle h) noexcept;
    explicit MLLinearOptions(const emlite::Val &val) noexcept;
    MLLinearOptions() noexcept;
    [[nodiscard]] MLLinearOptions clone() const noexcept;
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