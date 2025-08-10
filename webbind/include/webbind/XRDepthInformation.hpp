#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRRigidTransform;

/// Interface XRDepthInformation
/// [`XRDepthInformation`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation)
class XRDepthInformation : public emlite::Val {
    explicit XRDepthInformation(Handle h) noexcept;
public:
    explicit XRDepthInformation(const emlite::Val &val) noexcept;
    static XRDepthInformation take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthInformation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRDepthInformation.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/width)
    /// [`XRDepthInformation.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/width)
    [[nodiscard]] unsigned long width() const;
    /// [`XRDepthInformation.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/height)
    /// [`XRDepthInformation.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/height)
    [[nodiscard]] unsigned long height() const;
    /// [`XRDepthInformation.normDepthBufferFromNormView`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/normDepthBufferFromNormView)
    /// [`XRDepthInformation.normDepthBufferFromNormView`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/normDepthBufferFromNormView)
    [[nodiscard]] XRRigidTransform normDepthBufferFromNormView() const;
    /// [`XRDepthInformation.rawValueToMeters`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/rawValueToMeters)
    /// [`XRDepthInformation.rawValueToMeters`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/rawValueToMeters)
    [[nodiscard]] float rawValueToMeters() const;
    /// [`XRDepthInformation.projectionMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/projectionMatrix)
    /// [`XRDepthInformation.projectionMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/projectionMatrix)
    [[nodiscard]] jsbind::Float32Array projectionMatrix() const;
    /// [`XRDepthInformation.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/transform)
    /// [`XRDepthInformation.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/transform)
    [[nodiscard]] XRRigidTransform transform() const;
};

} // namespace webbind