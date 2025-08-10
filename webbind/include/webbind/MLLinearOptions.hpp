#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLLinearOptions
/// [`MLLinearOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLLinearOptions)
class MLLinearOptions : public MLOperatorOptions {
  explicit MLLinearOptions(Handle h) noexcept;
public:
    static MLLinearOptions take_ownership(Handle h) noexcept;
    explicit MLLinearOptions(const emlite::Val &val) noexcept;
    MLLinearOptions() noexcept;
    [[nodiscard]] MLLinearOptions clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
};

} // namespace webbind