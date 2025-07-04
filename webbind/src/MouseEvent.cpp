#include <webbind/MouseEvent.hpp>
#include <webbind/EventTarget.hpp>
#include <webbind/Window.hpp>


MouseEvent MouseEvent::take_ownership(Handle h) noexcept {
        return MouseEvent(h);
    }
MouseEvent MouseEvent::clone() const noexcept { return *this; }
MouseEvent::MouseEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
MouseEvent::MouseEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


MouseEvent::MouseEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): UIEvent(emlite::Val::global("MouseEvent").new_(type, eventInitDict)) {}

long MouseEvent::screenX() const {
    return UIEvent::get("screenX").as<long>();
}

long MouseEvent::screenY() const {
    return UIEvent::get("screenY").as<long>();
}

long MouseEvent::clientX() const {
    return UIEvent::get("clientX").as<long>();
}

long MouseEvent::clientY() const {
    return UIEvent::get("clientY").as<long>();
}

long MouseEvent::layerX() const {
    return UIEvent::get("layerX").as<long>();
}

long MouseEvent::layerY() const {
    return UIEvent::get("layerY").as<long>();
}

bool MouseEvent::ctrlKey() const {
    return UIEvent::get("ctrlKey").as<bool>();
}

bool MouseEvent::shiftKey() const {
    return UIEvent::get("shiftKey").as<bool>();
}

bool MouseEvent::altKey() const {
    return UIEvent::get("altKey").as<bool>();
}

bool MouseEvent::metaKey() const {
    return UIEvent::get("metaKey").as<bool>();
}

short MouseEvent::button() const {
    return UIEvent::get("button").as<short>();
}

unsigned short MouseEvent::buttons() const {
    return UIEvent::get("buttons").as<unsigned short>();
}

EventTarget MouseEvent::relatedTarget() const {
    return UIEvent::get("relatedTarget").as<EventTarget>();
}

bool MouseEvent::getModifierState(const jsbind::DOMString& keyArg) {
    return UIEvent::call("getModifierState", keyArg).as<bool>();
}

double MouseEvent::pageX() const {
    return UIEvent::get("pageX").as<double>();
}

double MouseEvent::pageY() const {
    return UIEvent::get("pageY").as<double>();
}

double MouseEvent::x() const {
    return UIEvent::get("x").as<double>();
}

double MouseEvent::y() const {
    return UIEvent::get("y").as<double>();
}

double MouseEvent::offsetX() const {
    return UIEvent::get("offsetX").as<double>();
}

double MouseEvent::offsetY() const {
    return UIEvent::get("offsetY").as<double>();
}

double MouseEvent::movementX() const {
    return UIEvent::get("movementX").as<double>();
}

double MouseEvent::movementY() const {
    return UIEvent::get("movementY").as<double>();
}

jsbind::Undefined MouseEvent::initMouseEvent(const jsbind::DOMString& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg, const EventTarget& relatedTargetArg) {
    return UIEvent::call("initMouseEvent", typeArg, bubblesArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg).as<jsbind::Undefined>();
}

