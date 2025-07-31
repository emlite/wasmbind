#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class KeyboardLayoutMap;


/// The Keyboard class.
/// [`Keyboard`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard)
class Keyboard : public EventTarget {
    explicit Keyboard(Handle h) noexcept;

public:
    explicit Keyboard(const emlite::Val &val) noexcept;
    static Keyboard take_ownership(Handle h) noexcept;

    [[nodiscard]] Keyboard clone() const noexcept;
    /// The lock method.
    /// [`Keyboard.lock`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard/lock)
    jsbind::Promise<jsbind::Undefined> lock();
    /// The lock method.
    /// [`Keyboard.lock`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard/lock)
    jsbind::Promise<jsbind::Undefined> lock(const jsbind::TypedArray<jsbind::String>& keyCodes);
    /// The unlock method.
    /// [`Keyboard.unlock`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard/unlock)
    jsbind::Undefined unlock();
    /// The getLayoutMap method.
    /// [`Keyboard.getLayoutMap`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard/getLayoutMap)
    jsbind::Promise<KeyboardLayoutMap> getLayoutMap();
    /// Getter of the `onlayoutchange` attribute.
    /// [`Keyboard.onlayoutchange`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard/onlayoutchange)
    [[nodiscard]] jsbind::Any onlayoutchange() const;
    /// Setter of the `onlayoutchange` attribute.
    /// [`Keyboard.onlayoutchange`](https://developer.mozilla.org/en-US/docs/Web/API/Keyboard/onlayoutchange)
    void onlayoutchange(const jsbind::Any& value);
};

