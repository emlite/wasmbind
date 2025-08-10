#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRCompositionLayer.hpp"

namespace webbind {

class XRRigidTransform;

/// Interface XRProjectionLayer
/// [`XRProjectionLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer)
class XRProjectionLayer : public XRCompositionLayer {
    explicit XRProjectionLayer(Handle h) noexcept;
public:
    explicit XRProjectionLayer(const emlite::Val &val) noexcept;
    static XRProjectionLayer take_ownership(Handle h) noexcept;
    [[nodiscard]] XRProjectionLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRProjectionLayer.textureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureWidth)
    /// [`XRProjectionLayer.textureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureWidth)
    [[nodiscard]] unsigned long textureWidth() const;
    /// [`XRProjectionLayer.textureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureHeight)
    /// [`XRProjectionLayer.textureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureHeight)
    [[nodiscard]] unsigned long textureHeight() const;
    /// [`XRProjectionLayer.textureArrayLength`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureArrayLength)
    /// [`XRProjectionLayer.textureArrayLength`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureArrayLength)
    [[nodiscard]] unsigned long textureArrayLength() const;
    /// [`XRProjectionLayer.ignoreDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/ignoreDepthValues)
    /// [`XRProjectionLayer.ignoreDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/ignoreDepthValues)
    [[nodiscard]] bool ignoreDepthValues() const;
    /// [`XRProjectionLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/fixedFoveation)
    /// [`XRProjectionLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/fixedFoveation)
    [[nodiscard]] float fixedFoveation() const;
    /// Setter of the `fixedFoveation` attribute.
    /// [`XRProjectionLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/fixedFoveation)
    void fixedFoveation(float value);
    /// [`XRProjectionLayer.deltaPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/deltaPose)
    /// [`XRProjectionLayer.deltaPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/deltaPose)
    [[nodiscard]] XRRigidTransform deltaPose() const;
    /// Setter of the `deltaPose` attribute.
    /// [`XRProjectionLayer.deltaPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/deltaPose)
    void deltaPose(const XRRigidTransform& value);
};

} // namespace webbind