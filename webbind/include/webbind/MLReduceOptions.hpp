#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLReduceOptions
/// [`MLReduceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLReduceOptions)
class MLReduceOptions : public MLOperatorOptions {
  explicit MLReduceOptions(Handle h) noexcept;
public:
    static MLReduceOptions take_ownership(Handle h) noexcept;
    explicit MLReduceOptions(const emlite::Val &val) noexcept;
    MLReduceOptions() noexcept;
    [[nodiscard]] MLReduceOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] bool keepDimensions() const;
    void keepDimensions(bool value);
};

} // namespace webbind