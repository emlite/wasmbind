#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StructuredSerializeOptions
/// [`StructuredSerializeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/StructuredSerializeOptions)
class StructuredSerializeOptions : public emlite::Val {
  explicit StructuredSerializeOptions(Handle h) noexcept;
public:
    static StructuredSerializeOptions take_ownership(Handle h) noexcept;
    explicit StructuredSerializeOptions(const emlite::Val &val) noexcept;
    StructuredSerializeOptions() noexcept;
    [[nodiscard]] StructuredSerializeOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Object> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::Object>& value);
};

} // namespace webbind