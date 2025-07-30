#include <webbind/WindowControlsOverlayGeometryChangeEvent.hpp>
#include <webbind/DOMRect.hpp>


WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent::take_ownership(Handle h) noexcept {
        return WindowControlsOverlayGeometryChangeEvent(h);
    }
WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent::clone() const noexcept { return *this; }
WindowControlsOverlayGeometryChangeEvent::WindowControlsOverlayGeometryChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
WindowControlsOverlayGeometryChangeEvent::WindowControlsOverlayGeometryChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


WindowControlsOverlayGeometryChangeEvent::WindowControlsOverlayGeometryChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("WindowControlsOverlayGeometryChangeEvent").new_(type, eventInitDict)) {}

DOMRect WindowControlsOverlayGeometryChangeEvent::titlebarAreaRect() const {
    return Event::get("titlebarAreaRect").as<DOMRect>();
}

bool WindowControlsOverlayGeometryChangeEvent::visible() const {
    return Event::get("visible").as<bool>();
}

