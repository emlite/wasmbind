#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLConv2dOptions
/// [`MLConv2dOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLConv2dOptions)
class MLConv2dOptions : public MLOperatorOptions {
  explicit MLConv2dOptions(Handle h) noexcept;
public:
    static MLConv2dOptions take_ownership(Handle h) noexcept;
    explicit MLConv2dOptions(const emlite::Val &val) noexcept;
    MLConv2dOptions() noexcept;
    [[nodiscard]] MLConv2dOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<unsigned long> padding() const;
    void padding(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> strides() const;
    void strides(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> dilations() const;
    void dilations(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] unsigned long groups() const;
    void groups(unsigned long value);
    [[nodiscard]] MLInputOperandLayout inputLayout() const;
    void inputLayout(const MLInputOperandLayout& value);
    [[nodiscard]] MLConv2dFilterOperandLayout filterLayout() const;
    void filterLayout(const MLConv2dFilterOperandLayout& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
};

} // namespace webbind