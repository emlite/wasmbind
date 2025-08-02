#include <webbind/WebGLContextEvent.hpp>


WebGLContextEvent WebGLContextEvent::take_ownership(Handle h) noexcept {
        return WebGLContextEvent(h);
    }
WebGLContextEvent WebGLContextEvent::clone() const noexcept { return *this; }
emlite::Val WebGLContextEvent::instance() noexcept { return emlite::Val::global("WebGLContextEvent"); }
WebGLContextEvent::WebGLContextEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
WebGLContextEvent::WebGLContextEvent(const emlite::Val &val) noexcept: Event(val) {}


WebGLContextEvent::WebGLContextEvent(const jsbind::String& type) : Event(emlite::Val::global("WebGLContextEvent").new_(type)) {}

WebGLContextEvent::WebGLContextEvent(const jsbind::String& type, const jsbind::Any& eventInit) : Event(emlite::Val::global("WebGLContextEvent").new_(type, eventInit)) {}

jsbind::String WebGLContextEvent::statusMessage() const {
    return Event::get("statusMessage").as<jsbind::String>();
}

