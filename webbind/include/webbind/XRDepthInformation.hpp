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
    /// Getter of the `width` attribute.
    /// [`XRDepthInformation.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/width)
    [[nodiscard]] unsigned long width() const;
    /// Getter of the `height` attribute.
    /// [`XRDepthInformation.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/height)
    [[nodiscard]] unsigned long height() const;
    /// Getter of the `normDepthBufferFromNormView` attribute.
    /// [`XRDepthInformation.normDepthBufferFromNormView`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/normDepthBufferFromNormView)
    [[nodiscard]] XRRigidTransform normDepthBufferFromNormView() const;
    /// Getter of the `rawValueToMeters` attribute.
    /// [`XRDepthInformation.rawValueToMeters`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/rawValueToMeters)
    [[nodiscard]] float rawValueToMeters() const;
    /// Getter of the `projectionMatrix` attribute.
    /// [`XRDepthInformation.projectionMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/projectionMatrix)
    [[nodiscard]] jsbind::Float32Array projectionMatrix() const;
    /// Getter of the `transform` attribute.
    /// [`XRDepthInformation.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation/transform)
    [[nodiscard]] XRRigidTransform transform() const;
};

} // namespace webbind