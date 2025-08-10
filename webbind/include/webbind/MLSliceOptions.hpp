#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLSliceOptions
class MLSliceOptions : public MLOperatorOptions {
  explicit MLSliceOptions(Handle h) noexcept;
public:
    static MLSliceOptions take_ownership(Handle h) noexcept;
    explicit MLSliceOptions(const emlite::Val &val) noexcept;
    MLSliceOptions() noexcept;
    [[nodiscard]] MLSliceOptions clone() const noexcept;
    /// Getter of the `strides` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    /// Setter of the `strides` attribute.
    void strides(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind