#include <webbind/WebGLContextEvent.hpp>


WebGLContextEvent WebGLContextEvent::take_ownership(Handle h) noexcept {
        return WebGLContextEvent(h);
    }
WebGLContextEvent WebGLContextEvent::clone() const noexcept { return *this; }
WebGLContextEvent::WebGLContextEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
WebGLContextEvent::WebGLContextEvent(const emlite::Val &val) noexcept: Event(val) {}


WebGLContextEvent::WebGLContextEvent(const jsbind::DOMString& type, const jsbind::Any& eventInit): Event(emlite::Val::global("WebGLContextEvent").new_(type, eventInit)) {}

jsbind::DOMString WebGLContextEvent::statusMessage() const {
    return Event::get("statusMessage").as<jsbind::DOMString>();
}

