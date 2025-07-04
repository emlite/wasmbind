#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRSpace;
class Gamepad;
class XRHand;


class XRInputSource : public emlite::Val {
    explicit XRInputSource(Handle h) noexcept;

public:
    explicit XRInputSource(const emlite::Val &val) noexcept;
    static XRInputSource take_ownership(Handle h) noexcept;

    XRInputSource clone() const noexcept;
    XRHandedness handedness() const;
    XRTargetRayMode targetRayMode() const;
    XRSpace targetRaySpace() const;
    XRSpace gripSpace() const;
    jsbind::FrozenArray<jsbind::DOMString> profiles() const;
    bool skipRendering() const;
    Gamepad gamepad() const;
    XRHand hand() const;
};

