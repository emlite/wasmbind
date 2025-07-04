#include <webbind/WebGLSync.hpp>


WebGLSync WebGLSync::take_ownership(Handle h) noexcept {
        return WebGLSync(h);
    }
WebGLSync WebGLSync::clone() const noexcept { return *this; }
WebGLSync::WebGLSync(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLSync::WebGLSync(const emlite::Val &val) noexcept: WebGLObject(val) {}


