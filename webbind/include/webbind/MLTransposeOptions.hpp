#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLTransposeOptions
/// [`MLTransposeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLTransposeOptions)
class MLTransposeOptions : public MLOperatorOptions {
  explicit MLTransposeOptions(Handle h) noexcept;
public:
    static MLTransposeOptions take_ownership(Handle h) noexcept;
    explicit MLTransposeOptions(const emlite::Val &val) noexcept;
    MLTransposeOptions() noexcept;
    [[nodiscard]] MLTransposeOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> permutation() const;
    void permutation(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind