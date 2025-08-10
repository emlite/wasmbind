#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUTextureViewDescriptor.hpp"
#include "enums.hpp"

namespace webbind {

class GPUTextureView;

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
    /// Getter of the `width` attribute.
    /// [`GPUTexture.width`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/width)
    [[nodiscard]] jsbind::Any width() const;
    /// Getter of the `height` attribute.
    /// [`GPUTexture.height`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/height)
    [[nodiscard]] jsbind::Any height() const;
    /// Getter of the `depthOrArrayLayers` attribute.
    /// [`GPUTexture.depthOrArrayLayers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/depthOrArrayLayers)
    [[nodiscard]] jsbind::Any depthOrArrayLayers() const;
    /// Getter of the `mipLevelCount` attribute.
    /// [`GPUTexture.mipLevelCount`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/mipLevelCount)
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    /// Getter of the `sampleCount` attribute.
    /// [`GPUTexture.sampleCount`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/sampleCount)
    [[nodiscard]] jsbind::Any sampleCount() const;
    /// Getter of the `dimension` attribute.
    /// [`GPUTexture.dimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/dimension)
    [[nodiscard]] GPUTextureDimension dimension() const;
    /// Getter of the `format` attribute.
    /// [`GPUTexture.format`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/format)
    [[nodiscard]] GPUTextureFormat format() const;
    /// Getter of the `usage` attribute.
    /// [`GPUTexture.usage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/usage)
    [[nodiscard]] jsbind::Any usage() const;
    /// Getter of the `label` attribute.
    /// [`GPUTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTexture/label)
    void label(const jsbind::String& value);
};

} // namespace webbind