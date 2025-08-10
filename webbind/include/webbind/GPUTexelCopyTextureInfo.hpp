#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUTexture;

/// Dictionary type GPUTexelCopyTextureInfo
class GPUTexelCopyTextureInfo : public emlite::Val {
  explicit GPUTexelCopyTextureInfo(Handle h) noexcept;
public:
    static GPUTexelCopyTextureInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyTextureInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyTextureInfo() noexcept;
    [[nodiscard]] GPUTexelCopyTextureInfo clone() const noexcept;
    /// Getter of the `texture` attribute.
    [[nodiscard]] GPUTexture texture() const;
    /// Setter of the `texture` attribute.
    void texture(const GPUTexture& value);
    /// Getter of the `mipLevel` attribute.
    [[nodiscard]] jsbind::Any mipLevel() const;
    /// Setter of the `mipLevel` attribute.
    void mipLevel(const jsbind::Any& value);
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::Any origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::Any& value);
    /// Getter of the `aspect` attribute.
    [[nodiscard]] GPUTextureAspect aspect() const;
    /// Setter of the `aspect` attribute.
    void aspect(const GPUTextureAspect& value);
};

} // namespace webbind