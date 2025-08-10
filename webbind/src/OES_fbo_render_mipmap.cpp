#include "webbind/OES_fbo_render_mipmap.hpp"

namespace webbind {

OES_fbo_render_mipmap OES_fbo_render_mipmap::take_ownership(Handle h) noexcept {
        return OES_fbo_render_mipmap(h);
    }
OES_fbo_render_mipmap OES_fbo_render_mipmap::clone() const noexcept { return *this; }
emlite::Val OES_fbo_render_mipmap::instance() noexcept { return emlite::Val::global("OES_fbo_render_mipmap"); }
OES_fbo_render_mipmap::OES_fbo_render_mipmap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_fbo_render_mipmap::OES_fbo_render_mipmap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind