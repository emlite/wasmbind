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
    /// Getter of the `textureWidth` attribute.
    /// [`XRProjectionLayer.textureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureWidth)
    [[nodiscard]] unsigned long textureWidth() const;
    /// Getter of the `textureHeight` attribute.
    /// [`XRProjectionLayer.textureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureHeight)
    [[nodiscard]] unsigned long textureHeight() const;
    /// Getter of the `textureArrayLength` attribute.
    /// [`XRProjectionLayer.textureArrayLength`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/textureArrayLength)
    [[nodiscard]] unsigned long textureArrayLength() const;
    /// Getter of the `ignoreDepthValues` attribute.
    /// [`XRProjectionLayer.ignoreDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/ignoreDepthValues)
    [[nodiscard]] bool ignoreDepthValues() const;
    /// Getter of the `fixedFoveation` attribute.
    /// [`XRProjectionLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/fixedFoveation)
    [[nodiscard]] float fixedFoveation() const;
    /// Setter of the `fixedFoveation` attribute.
    /// [`XRProjectionLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/fixedFoveation)
    void fixedFoveation(float value);
    /// Getter of the `deltaPose` attribute.
    /// [`XRProjectionLayer.deltaPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/deltaPose)
    [[nodiscard]] XRRigidTransform deltaPose() const;
    /// Setter of the `deltaPose` attribute.
    /// [`XRProjectionLayer.deltaPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer/deltaPose)
    void deltaPose(const XRRigidTransform& value);
};

} // namespace webbind