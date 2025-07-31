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
    [[nodiscard]] XRMediaQuadLayerInit clone() const noexcept;
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float width() const;
    void width(float value);
    [[nodiscard]] float height() const;
    void height(float value);
};

class XRMediaCylinderLayerInit : public emlite::Val {
  explicit XRMediaCylinderLayerInit(Handle h) noexcept;
public:
    static XRMediaCylinderLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaCylinderLayerInit(const emlite::Val &val) noexcept;
    XRMediaCylinderLayerInit() noexcept;
    [[nodiscard]] XRMediaCylinderLayerInit clone() const noexcept;
    [[nodiscard]] XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    [[nodiscard]] float radius() const;
    void radius(float value);
    [[nodiscard]] float centralAngle() const;
    void centralAngle(float value);
    [[nodiscard]] float aspectRatio() const;
    void aspectRatio(float value);
};

class XRMediaEquirectLayerInit : public emlite::Val {
  explicit XRMediaEquirectLayerInit(Handle h) noexcept;
public:
    static XRMediaEquirectLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaEquirectLayerInit(const emlite::Val &val) noexcept;
    XRMediaEquirectLayerInit() noexcept;
    [[nodiscard]] XRMediaEquirectLayerInit clone() const noexcept;
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

/// The XRMediaBinding class.
/// [`XRMediaBinding`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding)
class XRMediaBinding : public emlite::Val {
    explicit XRMediaBinding(Handle h) noexcept;

public:
    explicit XRMediaBinding(const emlite::Val &val) noexcept;
    static XRMediaBinding take_ownership(Handle h) noexcept;

    [[nodiscard]] XRMediaBinding clone() const noexcept;
    /// The `new XRMediaBinding(..)` constructor, creating a new XRMediaBinding instance
    XRMediaBinding(const XRSession& session);
    /// The createQuadLayer method.
    /// [`XRMediaBinding.createQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createQuadLayer)
    XRQuadLayer createQuadLayer(const HTMLVideoElement& video);
    /// The createQuadLayer method.
    /// [`XRMediaBinding.createQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createQuadLayer)
    XRQuadLayer createQuadLayer(const HTMLVideoElement& video, const XRMediaQuadLayerInit& init);
    /// The createCylinderLayer method.
    /// [`XRMediaBinding.createCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createCylinderLayer)
    XRCylinderLayer createCylinderLayer(const HTMLVideoElement& video);
    /// The createCylinderLayer method.
    /// [`XRMediaBinding.createCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createCylinderLayer)
    XRCylinderLayer createCylinderLayer(const HTMLVideoElement& video, const XRMediaCylinderLayerInit& init);
    /// The createEquirectLayer method.
    /// [`XRMediaBinding.createEquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createEquirectLayer)
    XREquirectLayer createEquirectLayer(const HTMLVideoElement& video);
    /// The createEquirectLayer method.
    /// [`XRMediaBinding.createEquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createEquirectLayer)
    XREquirectLayer createEquirectLayer(const HTMLVideoElement& video, const XRMediaEquirectLayerInit& init);
};

