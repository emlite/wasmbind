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
    XRProjectionLayerInit clone() const noexcept;
    XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    jsbind::Any colorFormat() const;
    void colorFormat(const jsbind::Any& value);
    jsbind::Any depthFormat() const;
    void depthFormat(const jsbind::Any& value);
    double scaleFactor() const;
    void scaleFactor(double value);
    bool clearOnAccess() const;
    void clearOnAccess(bool value);
};

class XRQuadLayerInit : public emlite::Val {
  explicit XRQuadLayerInit(Handle h) noexcept;
public:
    static XRQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRQuadLayerInit(const emlite::Val &val) noexcept;
    XRQuadLayerInit() noexcept;
    XRQuadLayerInit clone() const noexcept;
    XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float width() const;
    void width(float value);
    float height() const;
    void height(float value);
};

class XRCylinderLayerInit : public emlite::Val {
  explicit XRCylinderLayerInit(Handle h) noexcept;
public:
    static XRCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRCylinderLayerInit(const emlite::Val &val) noexcept;
    XRCylinderLayerInit() noexcept;
    XRCylinderLayerInit clone() const noexcept;
    XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float radius() const;
    void radius(float value);
    float centralAngle() const;
    void centralAngle(float value);
    float aspectRatio() const;
    void aspectRatio(float value);
};

class XREquirectLayerInit : public emlite::Val {
  explicit XREquirectLayerInit(Handle h) noexcept;
public:
    static XREquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XREquirectLayerInit(const emlite::Val &val) noexcept;
    XREquirectLayerInit() noexcept;
    XREquirectLayerInit clone() const noexcept;
    XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float radius() const;
    void radius(float value);
    float centralHorizontalAngle() const;
    void centralHorizontalAngle(float value);
    float upperVerticalAngle() const;
    void upperVerticalAngle(float value);
    float lowerVerticalAngle() const;
    void lowerVerticalAngle(float value);
};

class XRCubeLayerInit : public emlite::Val {
  explicit XRCubeLayerInit(Handle h) noexcept;
public:
    static XRCubeLayerInit take_ownership(Handle h) noexcept;
    explicit XRCubeLayerInit(const emlite::Val &val) noexcept;
    XRCubeLayerInit() noexcept;
    XRCubeLayerInit clone() const noexcept;
    DOMPointReadOnly orientation() const;
    void orientation(const DOMPointReadOnly& value);
};

class XRWebGLBinding : public emlite::Val {
    explicit XRWebGLBinding(Handle h) noexcept;

public:
    explicit XRWebGLBinding(const emlite::Val &val) noexcept;
    static XRWebGLBinding take_ownership(Handle h) noexcept;

    XRWebGLBinding clone() const noexcept;
    XRWebGLBinding(const XRSession& session, const jsbind::Any& context);
    double nativeProjectionScaleFactor() const;
    bool usesDepthValues() const;
    XRProjectionLayer createProjectionLayer();
    XRProjectionLayer createProjectionLayer(const XRProjectionLayerInit& init);
    XRQuadLayer createQuadLayer();
    XRQuadLayer createQuadLayer(const XRQuadLayerInit& init);
    XRCylinderLayer createCylinderLayer();
    XRCylinderLayer createCylinderLayer(const XRCylinderLayerInit& init);
    XREquirectLayer createEquirectLayer();
    XREquirectLayer createEquirectLayer(const XREquirectLayerInit& init);
    XRCubeLayer createCubeLayer();
    XRCubeLayer createCubeLayer(const XRCubeLayerInit& init);
    XRWebGLSubImage getSubImage(const XRCompositionLayer& layer, const XRFrame& frame);
    XRWebGLSubImage getSubImage(const XRCompositionLayer& layer, const XRFrame& frame, const XREye& eye);
    XRWebGLSubImage getViewSubImage(const XRProjectionLayer& layer, const XRView& view);
    jsbind::Undefined foveateBoundTexture(const jsbind::Any& target, float fixed_foveation);
    WebGLTexture getCameraImage(const XRCamera& camera);
    XRWebGLDepthInformation getDepthInformation(const XRView& view);
    WebGLTexture getReflectionCubeMap(const XRLightProbe& lightProbe);
};

