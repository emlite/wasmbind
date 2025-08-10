#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GlobalDescriptor
/// [`GlobalDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GlobalDescriptor)
class GlobalDescriptor : public emlite::Val {
  explicit GlobalDescriptor(Handle h) noexcept;
public:
    static GlobalDescriptor take_ownership(Handle h) noexcept;
    explicit GlobalDescriptor(const emlite::Val &val) noexcept;
    GlobalDescriptor() noexcept;
    [[nodiscard]] GlobalDescriptor clone() const noexcept;
    [[nodiscard]] ValueType value() const;
    void value(const ValueType& value);
    [[nodiscard]] bool mutable_() const;
    void mutable_(bool value);
};

} // namespace webbind