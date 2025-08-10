#include "webbind/WEBGL_multi_draw_instanced_base_vertex_base_instance.hpp"

namespace webbind {

WEBGL_multi_draw_instanced_base_vertex_base_instance WEBGL_multi_draw_instanced_base_vertex_base_instance::take_ownership(Handle h) noexcept {
        return WEBGL_multi_draw_instanced_base_vertex_base_instance(h);
    }
WEBGL_multi_draw_instanced_base_vertex_base_instance WEBGL_multi_draw_instanced_base_vertex_base_instance::clone() const noexcept { return *this; }
emlite::Val WEBGL_multi_draw_instanced_base_vertex_base_instance::instance() noexcept { return emlite::Val::global("WEBGL_multi_draw_instanced_base_vertex_base_instance"); }
WEBGL_multi_draw_instanced_base_vertex_base_instance::WEBGL_multi_draw_instanced_base_vertex_base_instance(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_multi_draw_instanced_base_vertex_base_instance::WEBGL_multi_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance::multiDrawArraysInstancedBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& baseInstancesList, long long baseInstancesOffset, const jsbind::Any& drawcount) {
    return emlite::Val::call("multiDrawArraysInstancedBaseInstanceWEBGL", mode, firstsList, firstsOffset, countsList, countsOffset, instanceCountsList, instanceCountsOffset, baseInstancesList, baseInstancesOffset, drawcount).as<jsbind::Undefined>();
}

jsbind::Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance::multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& baseVerticesList, long long baseVerticesOffset, const jsbind::Any& baseInstancesList, long long baseInstancesOffset, const jsbind::Any& drawcount) {
    return emlite::Val::call("multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL", mode, countsList, countsOffset, type, offsetsList, offsetsOffset, instanceCountsList, instanceCountsOffset, baseVerticesList, baseVerticesOffset, baseInstancesList, baseInstancesOffset, drawcount).as<jsbind::Undefined>();
}


} // namespace webbind