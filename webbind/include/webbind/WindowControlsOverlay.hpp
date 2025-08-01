#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMRect;


/// The WindowControlsOverlay class.
/// [`WindowControlsOverlay`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlay)
class WindowControlsOverlay : public EventTarget {
    explicit WindowControlsOverlay(Handle h) noexcept;

public:
    explicit WindowControlsOverlay(const emlite::Val &val) noexcept;
    static WindowControlsOverlay take_ownership(Handle h) noexcept;

    [[nodiscard]] WindowControlsOverlay clone() const noexcept;
    /// Getter of the `visible` attribute.
    /// [`WindowControlsOverlay.visible`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlay/visible)
    [[nodiscard]] bool visible() const;
    /// The getTitlebarAreaRect method.
    /// [`WindowControlsOverlay.getTitlebarAreaRect`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlay/getTitlebarAreaRect)
    DOMRect getTitlebarAreaRect();
    /// Getter of the `ongeometrychange` attribute.
    /// [`WindowControlsOverlay.ongeometrychange`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlay/ongeometrychange)
    [[nodiscard]] jsbind::Any ongeometrychange() const;
    /// Setter of the `ongeometrychange` attribute.
    /// [`WindowControlsOverlay.ongeometrychange`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlay/ongeometrychange)
    void ongeometrychange(const jsbind::Any& value);
};

