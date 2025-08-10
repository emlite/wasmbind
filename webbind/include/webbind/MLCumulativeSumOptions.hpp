#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLCumulativeSumOptions
/// [`MLCumulativeSumOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLCumulativeSumOptions)
class MLCumulativeSumOptions : public MLOperatorOptions {
  explicit MLCumulativeSumOptions(Handle h) noexcept;
public:
    static MLCumulativeSumOptions take_ownership(Handle h) noexcept;
    explicit MLCumulativeSumOptions(const emlite::Val &val) noexcept;
    MLCumulativeSumOptions() noexcept;
    [[nodiscard]] MLCumulativeSumOptions clone() const noexcept;
    [[nodiscard]] bool exclusive() const;
    void exclusive(bool value);
    [[nodiscard]] bool reversed() const;
    void reversed(bool value);
};

} // namespace webbind