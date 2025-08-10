#include <webbind/WebGLTimerQueryEXT.hpp>

namespace webbind {

WebGLTimerQueryEXT WebGLTimerQueryEXT::take_ownership(Handle h) noexcept {
    return WebGLTimerQueryEXT(h);
}

WebGLTimerQueryEXT WebGLTimerQueryEXT::clone() const noexcept { return *this; }

emlite::Val WebGLTimerQueryEXT::instance() noexcept { return emlite::Val::global("WebGLTimerQueryEXT"); }

WebGLTimerQueryEXT::WebGLTimerQueryEXT(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLTimerQueryEXT::WebGLTimerQueryEXT(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind