#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_multi_draw_instanced_base_vertex_base_instance
/// [`WEBGL_multi_draw_instanced_base_vertex_base_instance`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw_instanced_base_vertex_base_instance)
class WEBGL_multi_draw_instanced_base_vertex_base_instance : public emlite::Val {
    explicit WEBGL_multi_draw_instanced_base_vertex_base_instance(Handle h) noexcept;
public:
    explicit WEBGL_multi_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept;
    static WEBGL_multi_draw_instanced_base_vertex_base_instance take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_multi_draw_instanced_base_vertex_base_instance clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The multiDrawArraysInstancedBaseInstanceWEBGL method.
    /// [`WEBGL_multi_draw_instanced_base_vertex_base_instance.multiDrawArraysInstancedBaseInstanceWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw_instanced_base_vertex_base_instance/multiDrawArraysInstancedBaseInstanceWEBGL)
    jsbind::Undefined multiDrawArraysInstancedBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& baseInstancesList, long long baseInstancesOffset, const jsbind::Any& drawcount);
    /// The multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL method.
    /// [`WEBGL_multi_draw_instanced_base_vertex_base_instance.multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw_instanced_base_vertex_base_instance/multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL)
    jsbind::Undefined multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& baseVerticesList, long long baseVerticesOffset, const jsbind::Any& baseInstancesList, long long baseInstancesOffset, const jsbind::Any& drawcount);
};

} // namespace webbind