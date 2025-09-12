#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WEBGL_draw_instanced_base_vertex_base_instance
/// [`WEBGL_draw_instanced_base_vertex_base_instance`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_instanced_base_vertex_base_instance)
class WEBGL_draw_instanced_base_vertex_base_instance : public emlite::Val {
    explicit WEBGL_draw_instanced_base_vertex_base_instance(Handle h) noexcept;
public:
    explicit WEBGL_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept;
    static WEBGL_draw_instanced_base_vertex_base_instance take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_draw_instanced_base_vertex_base_instance clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The drawArraysInstancedBaseInstanceWEBGL method.
    /// [`WEBGL_draw_instanced_base_vertex_base_instance.drawArraysInstancedBaseInstanceWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_instanced_base_vertex_base_instance/drawArraysInstancedBaseInstanceWEBGL)
    jsbind::Undefined drawArraysInstancedBaseInstanceWEBGL(const uint32_t& mode, int first, int count, int instanceCount, const jsbind::Any& baseInstance);
    /// The drawElementsInstancedBaseVertexBaseInstanceWEBGL method.
    /// [`WEBGL_draw_instanced_base_vertex_base_instance.drawElementsInstancedBaseVertexBaseInstanceWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_instanced_base_vertex_base_instance/drawElementsInstancedBaseVertexBaseInstanceWEBGL)
    jsbind::Undefined drawElementsInstancedBaseVertexBaseInstanceWEBGL(const uint32_t& mode, int count, const uint32_t& type, const intptr_t& offset, int instanceCount, int baseVertex, const jsbind::Any& baseInstance);
};

} // namespace webbind