#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class GPUTextureView;
class GPUTextureViewDescriptor;

/// Interface GPUTexture
/// [`GPUTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture)
class GPUTexture : public emlite::Val {
    explicit GPUTexture(Handle h) noexcept;
public:
    explicit GPUTexture(const emlite::Val &val) noexcept;
    static GPUTexture take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTexture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createView method.
    /// [`GPUTexture.createView`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/createView)
    GPUTextureView createView();
    /// The createView method.
    /// [`GPUTexture.createView`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/createView)
    GPUTextureView createView(const GPUTextureViewDescriptor& descriptor);
    /// The destroy method.
    /// [`GPUTexture.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/destroy)
    jsbind::Undefined destroy();
    /// [`GPUTexture.width`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/width)
    /// [`GPUTexture.width`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/width)
    [[nodiscard]] jsbind::Any width() const;
    /// [`GPUTexture.height`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/height)
    /// [`GPUTexture.height`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/height)
    [[nodiscard]] jsbind::Any height() const;
    /// [`GPUTexture.depthOrArrayLayers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/depthOrArrayLayers)
    /// [`GPUTexture.depthOrArrayLayers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/depthOrArrayLayers)
    [[nodiscard]] jsbind::Any depthOrArrayLayers() const;
    /// [`GPUTexture.mipLevelCount`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/mipLevelCount)
    /// [`GPUTexture.mipLevelCount`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/mipLevelCount)
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    /// [`GPUTexture.sampleCount`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/sampleCount)
    /// [`GPUTexture.sampleCount`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/sampleCount)
    [[nodiscard]] jsbind::Any sampleCount() const;
    /// [`GPUTexture.dimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/dimension)
    /// [`GPUTexture.dimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/dimension)
    [[nodiscard]] GPUTextureDimension dimension() const;
    /// [`GPUTexture.format`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/format)
    /// [`GPUTexture.format`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/format)
    [[nodiscard]] GPUTextureFormat format() const;
    /// [`GPUTexture.usage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/usage)
    /// [`GPUTexture.usage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/usage)
    [[nodiscard]] jsbind::Any usage() const;
    /// [`GPUTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/label)
    /// [`GPUTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/label)
    void label(const jsbind::String& value);
};

} // namespace webbind