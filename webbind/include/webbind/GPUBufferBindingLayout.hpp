#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUBufferBindingLayout
/// [`GPUBufferBindingLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferBindingLayout)
class GPUBufferBindingLayout : public emlite::Val {
  explicit GPUBufferBindingLayout(Handle h) noexcept;
public:
    static GPUBufferBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUBufferBindingLayout(const emlite::Val &val) noexcept;
    GPUBufferBindingLayout() noexcept;
    [[nodiscard]] GPUBufferBindingLayout clone() const noexcept;
    [[nodiscard]] GPUBufferBindingType type() const;
    void type(const GPUBufferBindingType& value);
    [[nodiscard]] bool hasDynamicOffset() const;
    void hasDynamicOffset(bool value);
    [[nodiscard]] jsbind::Any minBindingSize() const;
    void minBindingSize(const jsbind::Any& value);
};

} // namespace webbind