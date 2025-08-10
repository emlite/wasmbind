#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLPool2dOptions
/// [`MLPool2dOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLPool2dOptions)
class MLPool2dOptions : public MLOperatorOptions {
  explicit MLPool2dOptions(Handle h) noexcept;
public:
    static MLPool2dOptions take_ownership(Handle h) noexcept;
    explicit MLPool2dOptions(const emlite::Val &val) noexcept;
    MLPool2dOptions() noexcept;
    [[nodiscard]] MLPool2dOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> windowDimensions() const;
    void windowDimensions(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    void padding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    void dilations(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] MLInputOperandLayout layout() const;
    void layout(const MLInputOperandLayout& value);
    [[nodiscard]] MLRoundingType roundingType() const;
    void roundingType(const MLRoundingType& value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputSizes() const;
    void outputSizes(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind