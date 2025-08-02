#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRProjectionLayer;
class XRProjectionLayerInit;
class XRQuadLayer;
class XRQuadLayerInit;
class XRCylinderLayer;
class XRCylinderLayerInit;
class XREquirectLayer;
class XREquirectLayerInit;
class XRCubeLayer;
class XRCubeLayerInit;
class XRWebGLSubImage;
class XRCompositionLayer;
class XRFrame;
class XRView;
class WebGLTexture;
class XRCamera;
class XRWebGLDepthInformation;
class XRLightProbe;
class XRRigidTransform;
class DOMPointReadOnly;
class XRSession;


class XRProjectionLayerInit : public emlite::Val {
  explicit XRProjectionLayerInit(Handle h) noexcept;
public:
    static XRProjectionLayerInit take_ownership(Handle h) noexcept;
    explicit XRProjectionLayerInit(const emlite::Val &val) noexcept;
    XRProjectionLayerInit() noexcept;
    [[nodiscard]] XRProjectionLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] jsbind::Any colorFormat() const;
    void colorFormat(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any depthFormat() const;
    void depthFormat(const jsbind::Any& value);
    [[nodiscard]] double scaleFactor() const;
    void scaleFactor(double value);
    [[nodiscard]] bool clearOnAccess() const;
    void clearOnAccess(bool value);
};

class XRQuadLayerInit : public emlite::Val {
  explicit XRQuadLayerInit(Handle h) noexcept;
public:
    static XRQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRQuadLayerInit(const emlite::Val &val) noexcept;
    XRQuadLayerInit() noexcept;
    [[nodiscard]] XRQuadLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float width() const;
    void width(float value);
    [[nodiscard]] float height() const;
    void height(float value);
};

class XRCylinderLayerInit : public emlite::Val {
  explicit XRCylinderLayerInit(Handle h) noexcept;
public:
    static XRCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRCylinderLayerInit(const emlite::Val &val) noexcept;
    XRCylinderLayerInit() noexcept;
    [[nodiscard]] XRCylinderLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float radius() const;
    void radius(float value);
    [[nodiscard]] float centralAngle() const;
    void centralAngle(float value);
    [[nodiscard]] float aspectRatio() const;
    void aspectRatio(float value);
};

class XREquirectLayerInit : public emlite::Val {
  explicit XREquirectLayerInit(Handle h) noexcept;
public:
    static XREquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XREquirectLayerInit(const emlite::Val &val) noexcept;
    XREquirectLayerInit() noexcept;
    [[nodiscard]] XREquirectLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float radius() const;
    void radius(float value);
    [[nodiscard]] float centralHorizontalAngle() const;
    void centralHorizontalAngle(float value);
    [[nodiscard]] float upperVerticalAngle() const;
    void upperVerticalAngle(float value);
    [[nodiscard]] float lowerVerticalAngle() const;
    void lowerVerticalAngle(float value);
};

class XRCubeLayerInit : public emlite::Val {
  explicit XRCubeLayerInit(Handle h) noexcept;
public:
    static XRCubeLayerInit take_ownership(Handle h) noexcept;
    explicit XRCubeLayerInit(const emlite::Val &val) noexcept;
    XRCubeLayerInit() noexcept;
    [[nodiscard]] XRCubeLayerInit clone() const noexcept;
    [[nodiscard]] DOMPointReadOnly orientation() const;
    void orientation(const DOMPointReadOnly& value);
};

/// The XRWebGLBinding class.
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
    /// Getter of the `nativeProjectionScaleFactor` attribute.
    /// [`XRWebGLBinding.nativeProjectionScaleFactor`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding/nativeProjectionScaleFactor)
    [[nodiscard]] double nativeProjectionScaleFactor() const;
    /// Getter of the `usesDepthValues` attribute.
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

