#include <webbind/WEBGL_debug_renderer_info.hpp>


WEBGL_debug_renderer_info WEBGL_debug_renderer_info::take_ownership(Handle h) noexcept {
        return WEBGL_debug_renderer_info(h);
    }
WEBGL_debug_renderer_info WEBGL_debug_renderer_info::clone() const noexcept { return *this; }
WEBGL_debug_renderer_info::WEBGL_debug_renderer_info(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_debug_renderer_info::WEBGL_debug_renderer_info(const emlite::Val &val) noexcept: emlite::Val(val) {}


