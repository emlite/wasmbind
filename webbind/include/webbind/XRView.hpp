#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRCamera;
class XRRigidTransform;


/// The XRView class.
/// [`XRView`](https://developer.mozilla.org/en-US/docs/Web/API/XRView)
class XRView : public emlite::Val {
    explicit XRView(Handle h) noexcept;

public:
    explicit XRView(const emlite::Val &val) noexcept;
    static XRView take_ownership(Handle h) noexcept;

    [[nodiscard]] XRView clone() const noexcept;
    /// Getter of the `eye` attribute.
    /// [`XRView.eye`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/eye)
    [[nodiscard]] XREye eye() const;
    /// Getter of the `recommendedViewportScale` attribute.
    /// [`XRView.recommendedViewportScale`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/recommendedViewportScale)
    [[nodiscard]] double recommendedViewportScale() const;
    /// The requestViewportScale method.
    /// [`XRView.requestViewportScale`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/requestViewportScale)
    jsbind::Undefined requestViewportScale(double scale);
    /// Getter of the `camera` attribute.
    /// [`XRView.camera`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/camera)
    [[nodiscard]] XRCamera camera() const;
    /// Getter of the `isFirstPersonObserver` attribute.
    /// [`XRView.isFirstPersonObserver`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/isFirstPersonObserver)
    [[nodiscard]] bool isFirstPersonObserver() const;
    /// Getter of the `projectionMatrix` attribute.
    /// [`XRView.projectionMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/projectionMatrix)
    [[nodiscard]] jsbind::Float32Array projectionMatrix() const;
    /// Getter of the `transform` attribute.
    /// [`XRView.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/transform)
    [[nodiscard]] XRRigidTransform transform() const;
};

