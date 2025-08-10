#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUTextureViewDescriptor
class GPUTextureViewDescriptor : public GPUObjectDescriptorBase {
  explicit GPUTextureViewDescriptor(Handle h) noexcept;
public:
    static GPUTextureViewDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureViewDescriptor(const emlite::Val &val) noexcept;
    GPUTextureViewDescriptor() noexcept;
    [[nodiscard]] GPUTextureViewDescriptor clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] GPUTextureFormat format() const;
    /// Setter of the `format` attribute.
    void format(const GPUTextureFormat& value);
    /// Getter of the `dimension` attribute.
    [[nodiscard]] GPUTextureViewDimension dimension() const;
    /// Setter of the `dimension` attribute.
    void dimension(const GPUTextureViewDimension& value);
    /// Getter of the `usage` attribute.
    [[nodiscard]] jsbind::Any usage() const;
    /// Setter of the `usage` attribute.
    void usage(const jsbind::Any& value);
    /// Getter of the `aspect` attribute.
    [[nodiscard]] GPUTextureAspect aspect() const;
    /// Setter of the `aspect` attribute.
    void aspect(const GPUTextureAspect& value);
    /// Getter of the `baseMipLevel` attribute.
    [[nodiscard]] jsbind::Any baseMipLevel() const;
    /// Setter of the `baseMipLevel` attribute.
    void baseMipLevel(const jsbind::Any& value);
    /// Getter of the `mipLevelCount` attribute.
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    /// Setter of the `mipLevelCount` attribute.
    void mipLevelCount(const jsbind::Any& value);
    /// Getter of the `baseArrayLayer` attribute.
    [[nodiscard]] jsbind::Any baseArrayLayer() const;
    /// Setter of the `baseArrayLayer` attribute.
    void baseArrayLayer(const jsbind::Any& value);
    /// Getter of the `arrayLayerCount` attribute.
    [[nodiscard]] jsbind::Any arrayLayerCount() const;
    /// Setter of the `arrayLayerCount` attribute.
    void arrayLayerCount(const jsbind::Any& value);
};

} // namespace webbind