#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRProjectionLayerInit.hpp"
#include "XRQuadLayerInit.hpp"
#include "XRCylinderLayerInit.hpp"
#include "XREquirectLayerInit.hpp"
#include "XRCubeLayerInit.hpp"
#include "enums.hpp"

namespace webbind {

class XRSession;
class XRProjectionLayer;
class XRQuadLayer;
class XRCylinderLayer;
class XREquirectLayer;
class XRCubeLayer;
class XRWebGLSubImage;
class XRCompositionLayer;
class XRFrame;
class XRView;
class WebGLTexture;
class XRCamera;
class XRWebGLDepthInformation;
class XRLightProbe;

/// Interface XRWebGLBinding
/// [`XRWebGLBinding`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding)
class XRWebGLBinding : public emlite::Val {
    explicit XRWebGLBinding(Handle h) noexcept;
public:
    explicit XRWebGLBinding(const emlite::Val &val) noexcept;
    static XRWebGLBinding take_ownership(Handle h) noexcept;
    [[nodiscard]] XRWebGLBinding clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRWebGLBinding(..)` constructor, creating a new XRWebGLBinding instance
    XRWebGLBinding(const XRSession& session, const jsbind::Any& context);
    /// [`XRWebGLBinding.nativeProjectionScaleFactor`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/nativeProjectionScaleFactor)
    /// [`XRWebGLBinding.nativeProjectionScaleFactor`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/nativeProjectionScaleFactor)
    [[nodiscard]] double nativeProjectionScaleFactor() const;
    /// [`XRWebGLBinding.usesDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/usesDepthValues)
    /// [`XRWebGLBinding.usesDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/usesDepthValues)
    [[nodiscard]] bool usesDepthValues() const;
    /// The createProjectionLayer method.
    /// [`XRWebGLBinding.createProjectionLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createProjectionLayer)
    XRProjectionLayer createProjectionLayer();
    /// The createProjectionLayer method.
    /// [`XRWebGLBinding.createProjectionLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createProjectionLayer)
    XRProjectionLayer createProjectionLayer(const XRProjectionLayerInit& init);
    /// The createQuadLayer method.
    /// [`XRWebGLBinding.createQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createQuadLayer)
    XRQuadLayer createQuadLayer();
    /// The createQuadLayer method.
    /// [`XRWebGLBinding.createQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createQuadLayer)
    XRQuadLayer createQuadLayer(const XRQuadLayerInit& init);
    /// The createCylinderLayer method.
    /// [`XRWebGLBinding.createCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createCylinderLayer)
    XRCylinderLayer createCylinderLayer();
    /// The createCylinderLayer method.
    /// [`XRWebGLBinding.createCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createCylinderLayer)
    XRCylinderLayer createCylinderLayer(const XRCylinderLayerInit& init);
    /// The createEquirectLayer method.
    /// [`XRWebGLBinding.createEquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createEquirectLayer)
    XREquirectLayer createEquirectLayer();
    /// The createEquirectLayer method.
    /// [`XRWebGLBinding.createEquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createEquirectLayer)
    XREquirectLayer createEquirectLayer(const XREquirectLayerInit& init);
    /// The createCubeLayer method.
    /// [`XRWebGLBinding.createCubeLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createCubeLayer)
    XRCubeLayer createCubeLayer();
    /// The createCubeLayer method.
    /// [`XRWebGLBinding.createCubeLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/createCubeLayer)
    XRCubeLayer createCubeLayer(const XRCubeLayerInit& init);
    /// The getSubImage method.
    /// [`XRWebGLBinding.getSubImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/getSubImage)
    XRWebGLSubImage getSubImage(const XRCompositionLayer& layer, const XRFrame& frame);
    /// The getSubImage method.
    /// [`XRWebGLBinding.getSubImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/getSubImage)
    XRWebGLSubImage getSubImage(const XRCompositionLayer& layer, const XRFrame& frame, const XREye& eye);
    /// The getViewSubImage method.
    /// [`XRWebGLBinding.getViewSubImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/getViewSubImage)
    XRWebGLSubImage getViewSubImage(const XRProjectionLayer& layer, const XRView& view);
    /// The foveateBoundTexture method.
    /// [`XRWebGLBinding.foveateBoundTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/foveateBoundTexture)
    jsbind::Undefined foveateBoundTexture(const jsbind::Any& target, float fixed_foveation);
    /// The getCameraImage method.
    /// [`XRWebGLBinding.getCameraImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/getCameraImage)
    WebGLTexture getCameraImage(const XRCamera& camera);
    /// The getDepthInformation method.
    /// [`XRWebGLBinding.getDepthInformation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/getDepthInformation)
    XRWebGLDepthInformation getDepthInformation(const XRView& view);
    /// The getReflectionCubeMap method.
    /// [`XRWebGLBinding.getReflectionCubeMap`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/getReflectionCubeMap)
    WebGLTexture getReflectionCubeMap(const XRLightProbe& lightProbe);
};

} // namespace webbind