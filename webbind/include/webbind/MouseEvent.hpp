#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class EventTarget;
class Window;


/// The MouseEvent class.
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
    MouseEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `screenX` attribute.
    /// [`MouseEvent.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/screenX)
    [[nodiscard]] long screenX() const;
    /// Getter of the `screenY` attribute.
    /// [`MouseEvent.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/screenY)
    [[nodiscard]] long screenY() const;
    /// Getter of the `clientX` attribute.
    /// [`MouseEvent.clientX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/clientX)
    [[nodiscard]] long clientX() const;
    /// Getter of the `clientY` attribute.
    /// [`MouseEvent.clientY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/clientY)
    [[nodiscard]] long clientY() const;
    /// Getter of the `layerX` attribute.
    /// [`MouseEvent.layerX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/layerX)
    [[nodiscard]] long layerX() const;
    /// Getter of the `layerY` attribute.
    /// [`MouseEvent.layerY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/layerY)
    [[nodiscard]] long layerY() const;
    /// Getter of the `ctrlKey` attribute.
    /// [`MouseEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/ctrlKey)
    [[nodiscard]] bool ctrlKey() const;
    /// Getter of the `shiftKey` attribute.
    /// [`MouseEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/shiftKey)
    [[nodiscard]] bool shiftKey() const;
    /// Getter of the `altKey` attribute.
    /// [`MouseEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/altKey)
    [[nodiscard]] bool altKey() const;
    /// Getter of the `metaKey` attribute.
    /// [`MouseEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/metaKey)
    [[nodiscard]] bool metaKey() const;
    /// Getter of the `button` attribute.
    /// [`MouseEvent.button`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/button)
    [[nodiscard]] short button() const;
    /// Getter of the `buttons` attribute.
    /// [`MouseEvent.buttons`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/buttons)
    [[nodiscard]] unsigned short buttons() const;
    /// Getter of the `relatedTarget` attribute.
    /// [`MouseEvent.relatedTarget`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/relatedTarget)
    [[nodiscard]] EventTarget relatedTarget() const;
    /// The getModifierState method.
    /// [`MouseEvent.getModifierState`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/getModifierState)
    bool getModifierState(const jsbind::String& keyArg);
    /// Getter of the `pageX` attribute.
    /// [`MouseEvent.pageX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/pageX)
    [[nodiscard]] double pageX() const;
    /// Getter of the `pageY` attribute.
    /// [`MouseEvent.pageY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/pageY)
    [[nodiscard]] double pageY() const;
    /// Getter of the `x` attribute.
    /// [`MouseEvent.x`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`MouseEvent.y`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/y)
    [[nodiscard]] double y() const;
    /// Getter of the `offsetX` attribute.
    /// [`MouseEvent.offsetX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/offsetX)
    [[nodiscard]] double offsetX() const;
    /// Getter of the `offsetY` attribute.
    /// [`MouseEvent.offsetY`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/offsetY)
    [[nodiscard]] double offsetY() const;
    /// Getter of the `movementX` attribute.
    /// [`MouseEvent.movementX`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent/movementX)
    [[nodiscard]] double movementX() const;
    /// Getter of the `movementY` attribute.
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

