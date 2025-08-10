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
    /// Getter of the `handedness` attribute.
    /// [`XRInputSource.handedness`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/handedness)
    [[nodiscard]] XRHandedness handedness() const;
    /// Getter of the `targetRayMode` attribute.
    /// [`XRInputSource.targetRayMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/targetRayMode)
    [[nodiscard]] XRTargetRayMode targetRayMode() const;
    /// Getter of the `targetRaySpace` attribute.
    /// [`XRInputSource.targetRaySpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/targetRaySpace)
    [[nodiscard]] XRSpace targetRaySpace() const;
    /// Getter of the `gripSpace` attribute.
    /// [`XRInputSource.gripSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/gripSpace)
    [[nodiscard]] XRSpace gripSpace() const;
    /// Getter of the `profiles` attribute.
    /// [`XRInputSource.profiles`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/profiles)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> profiles() const;
    /// Getter of the `skipRendering` attribute.
    /// [`XRInputSource.skipRendering`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/skipRendering)
    [[nodiscard]] bool skipRendering() const;
    /// Getter of the `gamepad` attribute.
    /// [`XRInputSource.gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/gamepad)
    [[nodiscard]] Gamepad gamepad() const;
    /// Getter of the `hand` attribute.
    /// [`XRInputSource.hand`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource/hand)
    [[nodiscard]] XRHand hand() const;
};

} // namespace webbind