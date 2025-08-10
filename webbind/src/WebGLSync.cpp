#include <webbind/WebGLSync.hpp>

namespace webbind {

WebGLSync WebGLSync::take_ownership(Handle h) noexcept {
    return WebGLSync(h);
}

WebGLSync WebGLSync::clone() const noexcept { return *this; }

emlite::Val WebGLSync::instance() noexcept { return emlite::Val::global("WebGLSync"); }

WebGLSync::WebGLSync(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLSync::WebGLSync(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind