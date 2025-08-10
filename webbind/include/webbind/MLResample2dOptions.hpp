#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLResample2dOptions
class MLResample2dOptions : public MLOperatorOptions {
  explicit MLResample2dOptions(Handle h) noexcept;
public:
    static MLResample2dOptions take_ownership(Handle h) noexcept;
    explicit MLResample2dOptions(const emlite::Val &val) noexcept;
    MLResample2dOptions() noexcept;
    [[nodiscard]] MLResample2dOptions clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] MLInterpolationMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const MLInterpolationMode& value);
    /// Getter of the `scales` attribute.
    [[nodiscard]] jsbind::TypedArray<float> scales() const;
    /// Setter of the `scales` attribute.
    void scales(jsbind::TypedArray<float> value);
    /// Getter of the `sizes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> sizes() const;
    /// Setter of the `sizes` attribute.
    void sizes(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `axes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    /// Setter of the `axes` attribute.
    void axes(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind