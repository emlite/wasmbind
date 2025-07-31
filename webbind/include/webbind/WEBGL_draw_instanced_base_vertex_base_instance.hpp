#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_draw_instanced_base_vertex_base_instance class.
/// [`WEBGL_draw_instanced_base_vertex_base_instance`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_instanced_base_vertex_base_instance)
class WEBGL_draw_instanced_base_vertex_base_instance : public emlite::Val {
    explicit WEBGL_draw_instanced_base_vertex_base_instance(Handle h) noexcept;

public:
    explicit WEBGL_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept;
    static WEBGL_draw_instanced_base_vertex_base_instance take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_draw_instanced_base_vertex_base_instance clone() const noexcept;
    /// The drawArraysInstancedBaseInstanceWEBGL method.
    /// [`WEBGL_draw_instanced_base_vertex_base_instance.drawArraysInstancedBaseInstanceWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_instanced_base_vertex_base_instance/drawArraysInstancedBaseInstanceWEBGL)
    jsbind::Undefined drawArraysInstancedBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& first, const jsbind::Any& count, const jsbind::Any& instanceCount, const jsbind::Any& baseInstance);
    /// The drawElementsInstancedBaseVertexBaseInstanceWEBGL method.
    /// [`WEBGL_draw_instanced_base_vertex_base_instance.drawElementsInstancedBaseVertexBaseInstanceWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_instanced_base_vertex_base_instance/drawElementsInstancedBaseVertexBaseInstanceWEBGL)
    jsbind::Undefined drawElementsInstancedBaseVertexBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset, const jsbind::Any& instanceCount, const jsbind::Any& baseVertex, const jsbind::Any& baseInstance);
};

