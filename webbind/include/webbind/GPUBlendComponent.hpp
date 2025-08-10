#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUBlendComponent
/// [`GPUBlendComponent`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBlendComponent)
class GPUBlendComponent : public emlite::Val {
  explicit GPUBlendComponent(Handle h) noexcept;
public:
    static GPUBlendComponent take_ownership(Handle h) noexcept;
    explicit GPUBlendComponent(const emlite::Val &val) noexcept;
    GPUBlendComponent() noexcept;
    [[nodiscard]] GPUBlendComponent clone() const noexcept;
    [[nodiscard]] GPUBlendOperation operation() const;
    void operation(const GPUBlendOperation& value);
    [[nodiscard]] GPUBlendFactor srcFactor() const;
    void srcFactor(const GPUBlendFactor& value);
    [[nodiscard]] GPUBlendFactor dstFactor() const;
    void dstFactor(const GPUBlendFactor& value);
};

} // namespace webbind