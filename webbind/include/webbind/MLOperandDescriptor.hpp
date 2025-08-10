#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLOperandDescriptor
/// [`MLOperandDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperandDescriptor)
class MLOperandDescriptor : public emlite::Val {
  explicit MLOperandDescriptor(Handle h) noexcept;
public:
    static MLOperandDescriptor take_ownership(Handle h) noexcept;
    explicit MLOperandDescriptor(const emlite::Val &val) noexcept;
    MLOperandDescriptor() noexcept;
    [[nodiscard]] MLOperandDescriptor clone() const noexcept;
    [[nodiscard]] MLOperandDataType dataType() const;
    void dataType(const MLOperandDataType& value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> shape() const;
    void shape(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind