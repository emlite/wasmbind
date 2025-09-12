#include <webbind/WEBGL_draw_instanced_base_vertex_base_instance.hpp>

namespace webbind {

WEBGL_draw_instanced_base_vertex_base_instance WEBGL_draw_instanced_base_vertex_base_instance::take_ownership(Handle h) noexcept {
    return WEBGL_draw_instanced_base_vertex_base_instance(h);
}

WEBGL_draw_instanced_base_vertex_base_instance WEBGL_draw_instanced_base_vertex_base_instance::clone() const noexcept { return *this; }

emlite::Val WEBGL_draw_instanced_base_vertex_base_instance::instance() noexcept { return emlite::Val::global("WEBGL_draw_instanced_base_vertex_base_instance"); }

WEBGL_draw_instanced_base_vertex_base_instance::WEBGL_draw_instanced_base_vertex_base_instance(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WEBGL_draw_instanced_base_vertex_base_instance::WEBGL_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined WEBGL_draw_instanced_base_vertex_base_instance::drawArraysInstancedBaseInstanceWEBGL(const uint32_t& mode, int first, int count, int instanceCount, const jsbind::Any& baseInstance) {
    return emlite::Val::call("drawArraysInstancedBaseInstanceWEBGL", mode, first, count, instanceCount, baseInstance).as<jsbind::Undefined>();
}

jsbind::Undefined WEBGL_draw_instanced_base_vertex_base_instance::drawElementsInstancedBaseVertexBaseInstanceWEBGL(const uint32_t& mode, int count, const uint32_t& type, const intptr_t& offset, int instanceCount, int baseVertex, const jsbind::Any& baseInstance) {
    return emlite::Val::call("drawElementsInstancedBaseVertexBaseInstanceWEBGL", mode, count, type, offset, instanceCount, baseVertex, baseInstance).as<jsbind::Undefined>();
}


} // namespace webbind