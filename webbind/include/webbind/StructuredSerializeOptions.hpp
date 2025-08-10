#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StructuredSerializeOptions
class StructuredSerializeOptions : public emlite::Val {
  explicit StructuredSerializeOptions(Handle h) noexcept;
public:
    static StructuredSerializeOptions take_ownership(Handle h) noexcept;
    explicit StructuredSerializeOptions(const emlite::Val &val) noexcept;
    StructuredSerializeOptions() noexcept;
    [[nodiscard]] StructuredSerializeOptions clone() const noexcept;
    /// Getter of the `transfer` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Object> transfer() const;
    /// Setter of the `transfer` attribute.
    void transfer(const jsbind::TypedArray<jsbind::Object>& value);
};

} // namespace webbind