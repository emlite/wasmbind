#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLCumulativeSumOptions
class MLCumulativeSumOptions : public MLOperatorOptions {
  explicit MLCumulativeSumOptions(Handle h) noexcept;
public:
    static MLCumulativeSumOptions take_ownership(Handle h) noexcept;
    explicit MLCumulativeSumOptions(const emlite::Val &val) noexcept;
    MLCumulativeSumOptions() noexcept;
    [[nodiscard]] MLCumulativeSumOptions clone() const noexcept;
    /// Getter of the `exclusive` attribute.
    [[nodiscard]] bool exclusive() const;
    /// Setter of the `exclusive` attribute.
    void exclusive(bool value);
    /// Getter of the `reversed` attribute.
    [[nodiscard]] bool reversed() const;
    /// Setter of the `reversed` attribute.
    void reversed(bool value);
};

} // namespace webbind