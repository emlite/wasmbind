#include <webbind/WEBGL_draw_buffers.hpp>

namespace webbind {

WEBGL_draw_buffers WEBGL_draw_buffers::take_ownership(Handle h) noexcept {
        return WEBGL_draw_buffers(h);
    }
WEBGL_draw_buffers WEBGL_draw_buffers::clone() const noexcept { return *this; }
emlite::Val WEBGL_draw_buffers::instance() noexcept { return emlite::Val::global("WEBGL_draw_buffers"); }
WEBGL_draw_buffers::WEBGL_draw_buffers(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_draw_buffers::WEBGL_draw_buffers(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined WEBGL_draw_buffers::drawBuffersWEBGL(const jsbind::TypedArray<jsbind::Any>& buffers) {
    return emlite::Val::call("drawBuffersWEBGL", buffers).as<jsbind::Undefined>();
}


} // namespace webbind