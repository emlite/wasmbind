#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLPool2dOptions
class MLPool2dOptions : public MLOperatorOptions {
  explicit MLPool2dOptions(Handle h) noexcept;
public:
    static MLPool2dOptions take_ownership(Handle h) noexcept;
    explicit MLPool2dOptions(const emlite::Val &val) noexcept;
    MLPool2dOptions() noexcept;
    [[nodiscard]] MLPool2dOptions clone() const noexcept;
    /// Getter of the `windowDimensions` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> windowDimensions() const;
    /// Setter of the `windowDimensions` attribute.
    void windowDimensions(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `padding` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    /// Setter of the `padding` attribute.
    void padding(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `strides` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    /// Setter of the `strides` attribute.
    void strides(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `dilations` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    /// Setter of the `dilations` attribute.
    void dilations(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] MLInputOperandLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const MLInputOperandLayout& value);
    /// Getter of the `roundingType` attribute.
    [[nodiscard]] MLRoundingType roundingType() const;
    /// Setter of the `roundingType` attribute.
    void roundingType(const MLRoundingType& value);
    /// Getter of the `outputSizes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputSizes() const;
    /// Setter of the `outputSizes` attribute.
    void outputSizes(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind