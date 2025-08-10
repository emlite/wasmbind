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
    /// Getter of the `layout` attribute.
    /// [`XRCompositionLayer.layout`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/layout)
    [[nodiscard]] XRLayerLayout layout() const;
    /// Getter of the `blendTextureSourceAlpha` attribute.
    /// [`XRCompositionLayer.blendTextureSourceAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/blendTextureSourceAlpha)
    [[nodiscard]] bool blendTextureSourceAlpha() const;
    /// Setter of the `blendTextureSourceAlpha` attribute.
    /// [`XRCompositionLayer.blendTextureSourceAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/blendTextureSourceAlpha)
    void blendTextureSourceAlpha(bool value);
    /// Getter of the `forceMonoPresentation` attribute.
    /// [`XRCompositionLayer.forceMonoPresentation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/forceMonoPresentation)
    [[nodiscard]] bool forceMonoPresentation() const;
    /// Setter of the `forceMonoPresentation` attribute.
    /// [`XRCompositionLayer.forceMonoPresentation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/forceMonoPresentation)
    void forceMonoPresentation(bool value);
    /// Getter of the `opacity` attribute.
    /// [`XRCompositionLayer.opacity`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/opacity)
    [[nodiscard]] float opacity() const;
    /// Setter of the `opacity` attribute.
    /// [`XRCompositionLayer.opacity`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/opacity)
    void opacity(float value);
    /// Getter of the `mipLevels` attribute.
    /// [`XRCompositionLayer.mipLevels`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/mipLevels)
    [[nodiscard]] unsigned long mipLevels() const;
    /// Getter of the `quality` attribute.
    /// [`XRCompositionLayer.quality`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/quality)
    [[nodiscard]] XRLayerQuality quality() const;
    /// Setter of the `quality` attribute.
    /// [`XRCompositionLayer.quality`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/quality)
    void quality(const XRLayerQuality& value);
    /// Getter of the `needsRedraw` attribute.
    /// [`XRCompositionLayer.needsRedraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/needsRedraw)
    [[nodiscard]] bool needsRedraw() const;
    /// The destroy method.
    /// [`XRCompositionLayer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind