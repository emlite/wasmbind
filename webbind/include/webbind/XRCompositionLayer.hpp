#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayer.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface XRCompositionLayer
/// [`XRCompositionLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer)
class XRCompositionLayer : public XRLayer {
    explicit XRCompositionLayer(Handle h) noexcept;
public:
    explicit XRCompositionLayer(const emlite::Val &val) noexcept;
    static XRCompositionLayer take_ownership(Handle h) noexcept;
    [[nodiscard]] XRCompositionLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRCompositionLayer.layout`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/layout)
    /// [`XRCompositionLayer.layout`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/layout)
    [[nodiscard]] XRLayerLayout layout() const;
    /// [`XRCompositionLayer.blendTextureSourceAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/blendTextureSourceAlpha)
    /// [`XRCompositionLayer.blendTextureSourceAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/blendTextureSourceAlpha)
    [[nodiscard]] bool blendTextureSourceAlpha() const;
    /// Setter of the `blendTextureSourceAlpha` attribute.
    /// [`XRCompositionLayer.blendTextureSourceAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/blendTextureSourceAlpha)
    void blendTextureSourceAlpha(bool value);
    /// [`XRCompositionLayer.forceMonoPresentation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/forceMonoPresentation)
    /// [`XRCompositionLayer.forceMonoPresentation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/forceMonoPresentation)
    [[nodiscard]] bool forceMonoPresentation() const;
    /// Setter of the `forceMonoPresentation` attribute.
    /// [`XRCompositionLayer.forceMonoPresentation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/forceMonoPresentation)
    void forceMonoPresentation(bool value);
    /// [`XRCompositionLayer.opacity`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/opacity)
    /// [`XRCompositionLayer.opacity`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/opacity)
    [[nodiscard]] float opacity() const;
    /// Setter of the `opacity` attribute.
    /// [`XRCompositionLayer.opacity`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/opacity)
    void opacity(float value);
    /// [`XRCompositionLayer.mipLevels`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/mipLevels)
    /// [`XRCompositionLayer.mipLevels`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/mipLevels)
    [[nodiscard]] unsigned long mipLevels() const;
    /// [`XRCompositionLayer.quality`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/quality)
    /// [`XRCompositionLayer.quality`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/quality)
    [[nodiscard]] XRLayerQuality quality() const;
    /// Setter of the `quality` attribute.
    /// [`XRCompositionLayer.quality`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/quality)
    void quality(const XRLayerQuality& value);
    /// [`XRCompositionLayer.needsRedraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/needsRedraw)
    /// [`XRCompositionLayer.needsRedraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/needsRedraw)
    [[nodiscard]] bool needsRedraw() const;
    /// The destroy method.
    /// [`XRCompositionLayer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind