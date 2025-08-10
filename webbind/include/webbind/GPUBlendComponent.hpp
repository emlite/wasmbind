#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUBlendComponent
class GPUBlendComponent : public emlite::Val {
  explicit GPUBlendComponent(Handle h) noexcept;
public:
    static GPUBlendComponent take_ownership(Handle h) noexcept;
    explicit GPUBlendComponent(const emlite::Val &val) noexcept;
    GPUBlendComponent() noexcept;
    [[nodiscard]] GPUBlendComponent clone() const noexcept;
    /// Getter of the `operation` attribute.
    [[nodiscard]] GPUBlendOperation operation() const;
    /// Setter of the `operation` attribute.
    void operation(const GPUBlendOperation& value);
    /// Getter of the `srcFactor` attribute.
    [[nodiscard]] GPUBlendFactor srcFactor() const;
    /// Setter of the `srcFactor` attribute.
    void srcFactor(const GPUBlendFactor& value);
    /// Getter of the `dstFactor` attribute.
    [[nodiscard]] GPUBlendFactor dstFactor() const;
    /// Setter of the `dstFactor` attribute.
    void dstFactor(const GPUBlendFactor& value);
};

} // namespace webbind