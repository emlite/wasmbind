#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class EventTarget;
class Window;


class MouseEvent : public UIEvent {
    explicit MouseEvent(Handle h) noexcept;

public:
    explicit MouseEvent(const emlite::Val &val) noexcept;
    static MouseEvent take_ownership(Handle h) noexcept;

    MouseEvent clone() const noexcept;
    MouseEvent(const jsbind::String& type);
    MouseEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    long screenX() const;
    long screenY() const;
    long clientX() const;
    long clientY() const;
    long layerX() const;
    long layerY() const;
    bool ctrlKey() const;
    bool shiftKey() const;
    bool altKey() const;
    bool metaKey() const;
    short button() const;
    unsigned short buttons() const;
    EventTarget relatedTarget() const;
    bool getModifierState(const jsbind::String& keyArg);
    double pageX() const;
    double pageY() const;
    double x() const;
    double y() const;
    double offsetX() const;
    double offsetY() const;
    double movementX() const;
    double movementY() const;
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg);
    jsbind::Undefined initMouseEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg, const EventTarget& relatedTargetArg);
};

