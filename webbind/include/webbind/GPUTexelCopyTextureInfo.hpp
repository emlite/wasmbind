#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUTexture;

/// Dictionary type GPUTexelCopyTextureInfo
/// [`GPUTexelCopyTextureInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexelCopyTextureInfo)
class GPUTexelCopyTextureInfo : public emlite::Val {
  explicit GPUTexelCopyTextureInfo(Handle h) noexcept;
public:
    static GPUTexelCopyTextureInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyTextureInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyTextureInfo() noexcept;
    [[nodiscard]] GPUTexelCopyTextureInfo clone() const noexcept;
    [[nodiscard]] GPUTexture texture() const;
    void texture(const GPUTexture& value);
    [[nodiscard]] jsbind::Any mipLevel() const;
    void mipLevel(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any origin() const;
    void origin(const jsbind::Any& value);
    [[nodiscard]] GPUTextureAspect aspect() const;
    void aspect(const GPUTextureAspect& value);
};

} // namespace webbind