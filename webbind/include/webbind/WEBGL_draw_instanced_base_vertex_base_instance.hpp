#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_draw_instanced_base_vertex_base_instance : public emlite::Val {
    explicit WEBGL_draw_instanced_base_vertex_base_instance(Handle h) noexcept;

public:
    explicit WEBGL_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept;
    static WEBGL_draw_instanced_base_vertex_base_instance take_ownership(Handle h) noexcept;

    WEBGL_draw_instanced_base_vertex_base_instance clone() const noexcept;
    jsbind::Undefined drawArraysInstancedBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& first, const jsbind::Any& count, const jsbind::Any& instanceCount, const jsbind::Any& baseInstance);
    jsbind::Undefined drawElementsInstancedBaseVertexBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset, const jsbind::Any& instanceCount, const jsbind::Any& baseVertex, const jsbind::Any& baseInstance);
};

