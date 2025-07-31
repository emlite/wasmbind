#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The ScreenOrientation class.
/// [`ScreenOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation)
class ScreenOrientation : public EventTarget {
    explicit ScreenOrientation(Handle h) noexcept;

public:
    explicit ScreenOrientation(const emlite::Val &val) noexcept;
    static ScreenOrientation take_ownership(Handle h) noexcept;

    [[nodiscard]] ScreenOrientation clone() const noexcept;
    /// The lock method.
    /// [`ScreenOrientation.lock`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation/lock)
    jsbind::Promise<jsbind::Undefined> lock(const OrientationLockType& orientation);
    /// The unlock method.
    /// [`ScreenOrientation.unlock`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation/unlock)
    jsbind::Undefined unlock();
    /// Getter of the `type` attribute.
    /// [`ScreenOrientation.type`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation/type)
    [[nodiscard]] OrientationType type() const;
    /// Getter of the `angle` attribute.
    /// [`ScreenOrientation.angle`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation/angle)
    [[nodiscard]] unsigned short angle() const;
    /// Getter of the `onchange` attribute.
    /// [`ScreenOrientation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`ScreenOrientation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenOrientation/onchange)
    void onchange(const jsbind::Any& value);
};

