#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

class EventTarget;
class Window;

/// Interface MouseEvent
/// [`MouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent)
class MouseEvent : public UIEvent {
    explicit MouseEvent(Handle h) noexcept;
public:
    explicit MouseEvent(const emlite::Val &val) noexcept;
    static MouseEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] MouseEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MouseEvent(..)` constructor, creating a new MouseEvent instance
    MouseEvent(const jsbind::String& type);
    /// The `new MouseEvent(..)` constructor, creating a new MouseEvent instance
    MouseEvent(const jsbind::String& type, const MouseEventInit& eventInitDict);
    /// [`MouseEvent.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/screenX)
    /// [`MouseEvent.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/screenX)
    [[nodiscard]] long screenX() const;
    /// [`MouseEvent.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/screenY)
    /// [`MouseEvent.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/screenY)
    [[nodiscard]] long screenY() const;
    /// [`MouseEvent.clientX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/clientX)
    /// [`MouseEvent.clientX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/clientX)
    [[nodiscard]] long clientX() const;
    /// [`MouseEvent.clientY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/clientY)
    /// [`MouseEvent.clientY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/clientY)
    [[nodiscard]] long clientY() const;
    /// [`MouseEvent.layerX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/layerX)
    /// [`MouseEvent.layerX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/layerX)
    [[nodiscard]] long layerX() const;
    /// [`MouseEvent.layerY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/layerY)
    /// [`MouseEvent.layerY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/layerY)
    [[nodiscard]] long layerY() const;
    /// [`MouseEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/ctrlKey)
    /// [`MouseEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/ctrlKey)
    [[nodiscard]] bool ctrlKey() const;
    /// [`MouseEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/shiftKey)
    /// [`MouseEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/shiftKey)
    [[nodiscard]] bool shiftKey() const;
    /// [`MouseEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/altKey)
    /// [`MouseEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/altKey)
    [[nodiscard]] bool altKey() const;
    /// [`MouseEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/metaKey)
    /// [`MouseEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/metaKey)
    [[nodiscard]] bool metaKey() const;
    /// [`MouseEvent.button`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/button)
    /// [`MouseEvent.button`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/button)
    [[nodiscard]] short button() const;
    /// [`MouseEvent.buttons`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/buttons)
    /// [`MouseEvent.buttons`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/buttons)
    [[nodiscard]] unsigned short buttons() const;
    /// [`MouseEvent.relatedTarget`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/relatedTarget)
    /// [`MouseEvent.relatedTarget`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/relatedTarget)
    [[nodiscard]] EventTarget relatedTarget() const;
    /// The getModifierState method.
    /// [`MouseEvent.getModifierState`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/getModifierState)
    bool getModifierState(const jsbind::String& keyArg);
    /// [`MouseEvent.pageX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/pageX)
    /// [`MouseEvent.pageX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/pageX)
    [[nodiscard]] double pageX() const;
    /// [`MouseEvent.pageY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/pageY)
    /// [`MouseEvent.pageY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/pageY)
    [[nodiscard]] double pageY() const;
    /// [`MouseEvent.x`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/x)
    /// [`MouseEvent.x`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/x)
    [[nodiscard]] double x() const;
    /// [`MouseEvent.y`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/y)
    /// [`MouseEvent.y`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/y)
    [[nodiscard]] double y() const;
    /// [`MouseEvent.offsetX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/offsetX)
    /// [`MouseEvent.offsetX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/offsetX)
    [[nodiscard]] double offsetX() const;
    /// [`MouseEvent.offsetY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/offsetY)
    /// [`MouseEvent.offsetY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/offsetY)
    [[nodiscard]] double offsetY() const;
    /// [`MouseEvent.movementX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/movementX)
    /// [`MouseEvent.movementX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/movementX)
    [[nodiscard]] double movementX() const;
    /// [`MouseEvent.movementY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/movementY)
    /// [`MouseEvent.movementY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/movementY)
    [[nodiscard]] double movementY() const;
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg);
    /// The initMouseEvent method.
    /// [`MouseEvent.initMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/initMouseEvent)
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg, const EventTarget& relatedTargetArg);
};

} // namespace webbind