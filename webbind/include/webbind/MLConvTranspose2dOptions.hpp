#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLConvTranspose2dOptions
/// [`MLConvTranspose2dOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLConvTranspose2dOptions)
class MLConvTranspose2dOptions : public MLOperatorOptions {
  explicit MLConvTranspose2dOptions(Handle h) noexcept;
public:
    static MLConvTranspose2dOptions take_ownership(Handle h) noexcept;
    explicit MLConvTranspose2dOptions(const emlite::Val &val) noexcept;
    MLConvTranspose2dOptions() noexcept;
    [[nodiscard]] MLConvTranspose2dOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    void padding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    void dilations(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputPadding() const;
    void outputPadding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputSizes() const;
    void outputSizes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] unsigned long groups() const;
    void groups(unsigned long value);
    [[nodiscard]] MLInputOperandLayout inputLayout() const;
    void inputLayout(const MLInputOperandLayout& value);
    [[nodiscard]] MLConvTranspose2dFilterOperandLayout filterLayout() const;
    void filterLayout(const MLConvTranspose2dFilterOperandLayout& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
};

} // namespace webbind