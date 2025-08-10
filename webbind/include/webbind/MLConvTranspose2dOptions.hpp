#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLConvTranspose2dOptions
class MLConvTranspose2dOptions : public MLOperatorOptions {
  explicit MLConvTranspose2dOptions(Handle h) noexcept;
public:
    static MLConvTranspose2dOptions take_ownership(Handle h) noexcept;
    explicit MLConvTranspose2dOptions(const emlite::Val &val) noexcept;
    MLConvTranspose2dOptions() noexcept;
    [[nodiscard]] MLConvTranspose2dOptions clone() const noexcept;
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
    /// Getter of the `outputPadding` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputPadding() const;
    /// Setter of the `outputPadding` attribute.
    void outputPadding(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `outputSizes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputSizes() const;
    /// Setter of the `outputSizes` attribute.
    void outputSizes(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `groups` attribute.
    [[nodiscard]] unsigned long groups() const;
    /// Setter of the `groups` attribute.
    void groups(unsigned long value);
    /// Getter of the `inputLayout` attribute.
    [[nodiscard]] MLInputOperandLayout inputLayout() const;
    /// Setter of the `inputLayout` attribute.
    void inputLayout(const MLInputOperandLayout& value);
    /// Getter of the `filterLayout` attribute.
    [[nodiscard]] MLConvTranspose2dFilterOperandLayout filterLayout() const;
    /// Setter of the `filterLayout` attribute.
    void filterLayout(const MLConvTranspose2dFilterOperandLayout& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
};

} // namespace webbind