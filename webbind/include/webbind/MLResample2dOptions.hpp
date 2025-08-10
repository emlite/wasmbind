#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLResample2dOptions
/// [`MLResample2dOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLResample2dOptions)
class MLResample2dOptions : public MLOperatorOptions {
  explicit MLResample2dOptions(Handle h) noexcept;
public:
    static MLResample2dOptions take_ownership(Handle h) noexcept;
    explicit MLResample2dOptions(const emlite::Val &val) noexcept;
    MLResample2dOptions() noexcept;
    [[nodiscard]] MLResample2dOptions clone() const noexcept;
    [[nodiscard]] MLInterpolationMode mode() const;
    void mode(const MLInterpolationMode& value);
    [[nodiscard]] jsbind::TypedArray<float> scales() const;
    void scales(jsbind::TypedArray<float> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> sizes() const;
    void sizes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind