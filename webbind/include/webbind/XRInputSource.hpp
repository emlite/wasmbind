#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class XRSpace;
class Gamepad;
class XRHand;

/// Interface XRInputSource
/// [`XRInputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource)
class XRInputSource : public emlite::Val {
    explicit XRInputSource(Handle h) noexcept;
public:
    explicit XRInputSource(const emlite::Val &val) noexcept;
    static XRInputSource take_ownership(Handle h) noexcept;
    [[nodiscard]] XRInputSource clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRInputSource.handedness`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/handedness)
    /// [`XRInputSource.handedness`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/handedness)
    [[nodiscard]] XRHandedness handedness() const;
    /// [`XRInputSource.targetRayMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/targetRayMode)
    /// [`XRInputSource.targetRayMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/targetRayMode)
    [[nodiscard]] XRTargetRayMode targetRayMode() const;
    /// [`XRInputSource.targetRaySpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/targetRaySpace)
    /// [`XRInputSource.targetRaySpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/targetRaySpace)
    [[nodiscard]] XRSpace targetRaySpace() const;
    /// [`XRInputSource.gripSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/gripSpace)
    /// [`XRInputSource.gripSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/gripSpace)
    [[nodiscard]] XRSpace gripSpace() const;
    /// [`XRInputSource.profiles`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/profiles)
    /// [`XRInputSource.profiles`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/profiles)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> profiles() const;
    /// [`XRInputSource.skipRendering`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/skipRendering)
    /// [`XRInputSource.skipRendering`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/skipRendering)
    [[nodiscard]] bool skipRendering() const;
    /// [`XRInputSource.gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/gamepad)
    /// [`XRInputSource.gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/gamepad)
    [[nodiscard]] Gamepad gamepad() const;
    /// [`XRInputSource.hand`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/hand)
    /// [`XRInputSource.hand`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/hand)
    [[nodiscard]] XRHand hand() const;
};

} // namespace webbind