#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLReverseOptions
class MLReverseOptions : public MLOperatorOptions {
  explicit MLReverseOptions(Handle h) noexcept;
public:
    static MLReverseOptions take_ownership(Handle h) noexcept;
    explicit MLReverseOptions(const emlite::Val &val) noexcept;
    MLReverseOptions() noexcept;
    [[nodiscard]] MLReverseOptions clone() const noexcept;
    /// Getter of the `axes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    /// Setter of the `axes` attribute.
    void axes(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind