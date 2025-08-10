#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLOperandDescriptor
class MLOperandDescriptor : public emlite::Val {
  explicit MLOperandDescriptor(Handle h) noexcept;
public:
    static MLOperandDescriptor take_ownership(Handle h) noexcept;
    explicit MLOperandDescriptor(const emlite::Val &val) noexcept;
    MLOperandDescriptor() noexcept;
    [[nodiscard]] MLOperandDescriptor clone() const noexcept;
    /// Getter of the `dataType` attribute.
    [[nodiscard]] MLOperandDataType dataType() const;
    /// Setter of the `dataType` attribute.
    void dataType(const MLOperandDataType& value);
    /// Getter of the `shape` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> shape() const;
    /// Setter of the `shape` attribute.
    void shape(jsbind::TypedArray<unsigned long> value);
};

} // namespace webbind