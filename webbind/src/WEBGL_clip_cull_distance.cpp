#include <webbind/WEBGL_clip_cull_distance.hpp>


WEBGL_clip_cull_distance WEBGL_clip_cull_distance::take_ownership(Handle h) noexcept {
        return WEBGL_clip_cull_distance(h);
    }
WEBGL_clip_cull_distance WEBGL_clip_cull_distance::clone() const noexcept { return *this; }
emlite::Val WEBGL_clip_cull_distance::instance() noexcept { return emlite::Val::global("WEBGL_clip_cull_distance"); }
WEBGL_clip_cull_distance::WEBGL_clip_cull_distance(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_clip_cull_distance::WEBGL_clip_cull_distance(const emlite::Val &val) noexcept: emlite::Val(val) {}


