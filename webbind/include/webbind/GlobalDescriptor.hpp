#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GlobalDescriptor
class GlobalDescriptor : public emlite::Val {
  explicit GlobalDescriptor(Handle h) noexcept;
public:
    static GlobalDescriptor take_ownership(Handle h) noexcept;
    explicit GlobalDescriptor(const emlite::Val &val) noexcept;
    GlobalDescriptor() noexcept;
    [[nodiscard]] GlobalDescriptor clone() const noexcept;
    /// Getter of the `value` attribute.
    [[nodiscard]] ValueType value() const;
    /// Setter of the `value` attribute.
    void value(const ValueType& value);
    /// Getter of the `mutable` attribute.
    [[nodiscard]] bool mutable_() const;
    /// Setter of the `mutable` attribute.
    void mutable_(bool value);
};

} // namespace webbind