#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class XRCamera;
class XRRigidTransform;

/// Interface XRView
/// [`XRView`](https://developer.mozilla.org/en-US/docs/Web/API/XRView)
class XRView : public emlite::Val {
    explicit XRView(Handle h) noexcept;
public:
    explicit XRView(const emlite::Val &val) noexcept;
    static XRView take_ownership(Handle h) noexcept;
    [[nodiscard]] XRView clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRView.eye`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/eye)
    /// [`XRView.eye`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/eye)
    [[nodiscard]] XREye eye() const;
    /// [`XRView.recommendedViewportScale`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/recommendedViewportScale)
    /// [`XRView.recommendedViewportScale`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/recommendedViewportScale)
    [[nodiscard]] double recommendedViewportScale() const;
    /// The requestViewportScale method.
    /// [`XRView.requestViewportScale`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/requestViewportScale)
    jsbind::Undefined requestViewportScale(double scale);
    /// [`XRView.camera`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/camera)
    /// [`XRView.camera`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/camera)
    [[nodiscard]] XRCamera camera() const;
    /// [`XRView.isFirstPersonObserver`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/isFirstPersonObserver)
    /// [`XRView.isFirstPersonObserver`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/isFirstPersonObserver)
    [[nodiscard]] bool isFirstPersonObserver() const;
    /// [`XRView.projectionMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/projectionMatrix)
    /// [`XRView.projectionMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/projectionMatrix)
    [[nodiscard]] jsbind::Float32Array projectionMatrix() const;
    /// [`XRView.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/transform)
    /// [`XRView.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRView/transform)
    [[nodiscard]] XRRigidTransform transform() const;
};

} // namespace webbind