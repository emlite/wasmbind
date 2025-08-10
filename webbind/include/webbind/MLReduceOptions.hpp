#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLReduceOptions
class MLReduceOptions : public MLOperatorOptions {
  explicit MLReduceOptions(Handle h) noexcept;
public:
    static MLReduceOptions take_ownership(Handle h) noexcept;
    explicit MLReduceOptions(const emlite::Val &val) noexcept;
    MLReduceOptions() noexcept;
    [[nodiscard]] MLReduceOptions clone() const noexcept;
    /// Getter of the `axes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    /// Setter of the `axes` attribute.
    void axes(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `keepDimensions` attribute.
    [[nodiscard]] bool keepDimensions() const;
    /// Setter of the `keepDimensions` attribute.
    void keepDimensions(bool value);
};

} // namespace webbind