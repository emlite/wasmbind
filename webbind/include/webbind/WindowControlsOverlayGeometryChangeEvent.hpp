#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class WindowControlsOverlayGeometryChangeEventInit;
class DOMRect;

/// Interface WindowControlsOverlayGeometryChangeEvent
/// [`WindowControlsOverlayGeometryChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEvent)
class WindowControlsOverlayGeometryChangeEvent : public Event {
    explicit WindowControlsOverlayGeometryChangeEvent(Handle h) noexcept;
public:
    explicit WindowControlsOverlayGeometryChangeEvent(const emlite::Val &val) noexcept;
    static WindowControlsOverlayGeometryChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] WindowControlsOverlayGeometryChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WindowControlsOverlayGeometryChangeEvent(..)` constructor, creating a new WindowControlsOverlayGeometryChangeEvent instance
    WindowControlsOverlayGeometryChangeEvent(const jsbind::String& type, const WindowControlsOverlayGeometryChangeEventInit& eventInitDict);
    /// [`WindowControlsOverlayGeometryChangeEvent.titlebarAreaRect`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEvent/titlebarAreaRect)
    /// [`WindowControlsOverlayGeometryChangeEvent.titlebarAreaRect`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEvent/titlebarAreaRect)
    [[nodiscard]] DOMRect titlebarAreaRect() const;
    /// [`WindowControlsOverlayGeometryChangeEvent.visible`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEvent/visible)
    /// [`WindowControlsOverlayGeometryChangeEvent.visible`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEvent/visible)
    [[nodiscard]] bool visible() const;
};

} // namespace webbind