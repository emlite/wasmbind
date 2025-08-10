#include <webbind/WindowControlsOverlay.hpp>
#include <webbind/DOMRect.hpp>

namespace webbind {

WindowControlsOverlay WindowControlsOverlay::take_ownership(Handle h) noexcept {
    return WindowControlsOverlay(h);
}

WindowControlsOverlay WindowControlsOverlay::clone() const noexcept { return *this; }

emlite::Val WindowControlsOverlay::instance() noexcept { return emlite::Val::global("WindowControlsOverlay"); }

WindowControlsOverlay::WindowControlsOverlay(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

WindowControlsOverlay::WindowControlsOverlay(const emlite::Val &val) noexcept: EventTarget(val) {}

bool WindowControlsOverlay::visible() const {
    return EventTarget::get("visible").as<bool>();
}

DOMRect WindowControlsOverlay::getTitlebarAreaRect() {
    return EventTarget::call("getTitlebarAreaRect").as<DOMRect>();
}

jsbind::Any WindowControlsOverlay::ongeometrychange() const {
    return EventTarget::get("ongeometrychange").as<jsbind::Any>();
}

void WindowControlsOverlay::ongeometrychange(const jsbind::Any& value) {
    EventTarget::set("ongeometrychange", value);
}


} // namespace webbind