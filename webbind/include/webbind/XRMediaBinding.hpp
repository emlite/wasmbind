#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRQuadLayer;
class HTMLVideoElement;
class XRMediaQuadLayerInit;
class XRCylinderLayer;
class XRMediaCylinderLayerInit;
class XREquirectLayer;
class XRMediaEquirectLayerInit;
class XRRigidTransform;
class XRSession;


class XRMediaQuadLayerInit : public emlite::Val {
  explicit XRMediaQuadLayerInit(Handle h) noexcept;
public:
    static XRMediaQuadLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaQuadLayerInit(const emlite::Val &val) noexcept;
    XRMediaQuadLayerInit() noexcept;
    XRMediaQuadLayerInit clone() const noexcept;
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float width() const;
    void width(float value);
    float height() const;
    void height(float value);
};

class XRMediaCylinderLayerInit : public emlite::Val {
  explicit XRMediaCylinderLayerInit(Handle h) noexcept;
public:
    static XRMediaCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaCylinderLayerInit(const emlite::Val &val) noexcept;
    XRMediaCylinderLayerInit() noexcept;
    XRMediaCylinderLayerInit clone() const noexcept;
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float radius() const;
    void radius(float value);
    float centralAngle() const;
    void centralAngle(float value);
    float aspectRatio() const;
    void aspectRatio(float value);
};

class XRMediaEquirectLayerInit : public emlite::Val {
  explicit XRMediaEquirectLayerInit(Handle h) noexcept;
public:
    static XRMediaEquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaEquirectLayerInit(const emlite::Val &val) noexcept;
    XRMediaEquirectLayerInit() noexcept;
    XRMediaEquirectLayerInit clone() const noexcept;
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

class XRMediaBinding : public emlite::Val {
    explicit XRMediaBinding(Handle h) noexcept;

public:
    explicit XRMediaBinding(const emlite::Val &val) noexcept;
    static XRMediaBinding take_ownership(Handle h) noexcept;

    XRMediaBinding clone() const noexcept;
    XRMediaBinding(const XRSession& session);
    XRQuadLayer createQuadLayer(const HTMLVideoElement& video);
    XRQuadLayer createQuadLayer(const HTMLVideoElement& video, const XRMediaQuadLayerInit& init);
    XRCylinderLayer createCylinderLayer(const HTMLVideoElement& video);
    XRCylinderLayer createCylinderLayer(const HTMLVideoElement& video, const XRMediaCylinderLayerInit& init);
    XREquirectLayer createEquirectLayer(const HTMLVideoElement& video);
    XREquirectLayer createEquirectLayer(const HTMLVideoElement& video, const XRMediaEquirectLayerInit& init);
};

