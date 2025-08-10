#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUTextureViewDescriptor
/// [`GPUTextureViewDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureViewDescriptor)
class GPUTextureViewDescriptor : public GPUObjectDescriptorBase {
  explicit GPUTextureViewDescriptor(Handle h) noexcept;
public:
    static GPUTextureViewDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureViewDescriptor(const emlite::Val &val) noexcept;
    GPUTextureViewDescriptor() noexcept;
    [[nodiscard]] GPUTextureViewDescriptor clone() const noexcept;
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] GPUTextureViewDimension dimension() const;
    void dimension(const GPUTextureViewDimension& value);
    [[nodiscard]] jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    [[nodiscard]] GPUTextureAspect aspect() const;
    void aspect(const GPUTextureAspect& value);
    [[nodiscard]] jsbind::Any baseMipLevel() const;
    void baseMipLevel(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    void mipLevelCount(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any baseArrayLayer() const;
    void baseArrayLayer(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any arrayLayerCount() const;
    void arrayLayerCount(const jsbind::Any& value);
};

} // namespace webbind