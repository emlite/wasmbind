#include <webbind/WEBGL_provoking_vertex.hpp>


WEBGL_provoking_vertex WEBGL_provoking_vertex::take_ownership(Handle h) noexcept {
        return WEBGL_provoking_vertex(h);
    }
WEBGL_provoking_vertex WEBGL_provoking_vertex::clone() const noexcept { return *this; }
emlite::Val WEBGL_provoking_vertex::instance() noexcept { return emlite::Val::global("WEBGL_provoking_vertex"); }
WEBGL_provoking_vertex::WEBGL_provoking_vertex(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_provoking_vertex::WEBGL_provoking_vertex(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined WEBGL_provoking_vertex::provokingVertexWEBGL(const jsbind::Any& provokeMode) {
    return emlite::Val::call("provokingVertexWEBGL", provokeMode).as<jsbind::Undefined>();
}

