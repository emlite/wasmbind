#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUBufferBindingLayout
class GPUBufferBindingLayout : public emlite::Val {
  explicit GPUBufferBindingLayout(Handle h) noexcept;
public:
    static GPUBufferBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUBufferBindingLayout(const emlite::Val &val) noexcept;
    GPUBufferBindingLayout() noexcept;
    [[nodiscard]] GPUBufferBindingLayout clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] GPUBufferBindingType type() const;
    /// Setter of the `type` attribute.
    void type(const GPUBufferBindingType& value);
    /// Getter of the `hasDynamicOffset` attribute.
    [[nodiscard]] bool hasDynamicOffset() const;
    /// Setter of the `hasDynamicOffset` attribute.
    void hasDynamicOffset(bool value);
    /// Getter of the `minBindingSize` attribute.
    [[nodiscard]] jsbind::Any minBindingSize() const;
    /// Setter of the `minBindingSize` attribute.
    void minBindingSize(const jsbind::Any& value);
};

} // namespace webbind