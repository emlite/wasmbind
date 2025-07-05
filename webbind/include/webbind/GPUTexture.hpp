#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUTextureView;
class GPUTextureViewDescriptor;


class GPUTextureViewDescriptor : public emlite::Val {
  explicit GPUTextureViewDescriptor(Handle h) noexcept;
public:
    static GPUTextureViewDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureViewDescriptor(const emlite::Val &val) noexcept;
    GPUTextureViewDescriptor() noexcept;
    GPUTextureViewDescriptor clone() const noexcept;
    GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    GPUTextureViewDimension dimension() const;
    void dimension(const GPUTextureViewDimension& value);
    jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    GPUTextureAspect aspect() const;
    void aspect(const GPUTextureAspect& value);
    jsbind::Any baseMipLevel() const;
    void baseMipLevel(const jsbind::Any& value);
    jsbind::Any mipLevelCount() const;
    void mipLevelCount(const jsbind::Any& value);
    jsbind::Any baseArrayLayer() const;
    void baseArrayLayer(const jsbind::Any& value);
    jsbind::Any arrayLayerCount() const;
    void arrayLayerCount(const jsbind::Any& value);
};

class GPUTexture : public emlite::Val {
    explicit GPUTexture(Handle h) noexcept;

public:
    explicit GPUTexture(const emlite::Val &val) noexcept;
    static GPUTexture take_ownership(Handle h) noexcept;

    GPUTexture clone() const noexcept;
    GPUTextureView createView();
    GPUTextureView createView(const GPUTextureViewDescriptor& descriptor);
    jsbind::Undefined destroy();
    jsbind::Any width() const;
    jsbind::Any height() const;
    jsbind::Any depthOrArrayLayers() const;
    jsbind::Any mipLevelCount() const;
    jsbind::Any sampleCount() const;
    GPUTextureDimension dimension() const;
    GPUTextureFormat format() const;
    jsbind::Any usage() const;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

