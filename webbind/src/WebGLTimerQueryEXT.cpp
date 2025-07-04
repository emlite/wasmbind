#include <webbind/WebGLTimerQueryEXT.hpp>


WebGLTimerQueryEXT WebGLTimerQueryEXT::take_ownership(Handle h) noexcept {
        return WebGLTimerQueryEXT(h);
    }
WebGLTimerQueryEXT WebGLTimerQueryEXT::clone() const noexcept { return *this; }
WebGLTimerQueryEXT::WebGLTimerQueryEXT(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLTimerQueryEXT::WebGLTimerQueryEXT(const emlite::Val &val) noexcept: WebGLObject(val) {}


