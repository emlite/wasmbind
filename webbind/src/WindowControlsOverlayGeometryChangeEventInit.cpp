#include <webbind/WindowControlsOverlayGeometryChangeEventInit.hpp>
#include <webbind/DOMRect.hpp>

using emlite::Val;
namespace webbind {

WindowControlsOverlayGeometryChangeEventInit::WindowControlsOverlayGeometryChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
WindowControlsOverlayGeometryChangeEventInit WindowControlsOverlayGeometryChangeEventInit::take_ownership(Handle h) noexcept {
        return WindowControlsOverlayGeometryChangeEventInit(h);
    }
WindowControlsOverlayGeometryChangeEventInit::WindowControlsOverlayGeometryChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
WindowControlsOverlayGeometryChangeEventInit::WindowControlsOverlayGeometryChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
WindowControlsOverlayGeometryChangeEventInit WindowControlsOverlayGeometryChangeEventInit::clone() const noexcept { return *this; }

DOMRect WindowControlsOverlayGeometryChangeEventInit::titlebarAreaRect() const {
    return emlite::Val::get("titlebarAreaRect").as<DOMRect>();
}

void WindowControlsOverlayGeometryChangeEventInit::titlebarAreaRect(const DOMRect& value) {
    emlite::Val::set("titlebarAreaRect", value);
}

bool WindowControlsOverlayGeometryChangeEventInit::visible() const {
    return emlite::Val::get("visible").as<bool>();
}

void WindowControlsOverlayGeometryChangeEventInit::visible(bool value) {
    emlite::Val::set("visible", value);
}


} // namespace webbind