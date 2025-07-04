#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_multi_draw_instanced_base_vertex_base_instance : public emlite::Val {
    explicit WEBGL_multi_draw_instanced_base_vertex_base_instance(Handle h) noexcept;

public:
    explicit WEBGL_multi_draw_instanced_base_vertex_base_instance(const emlite::Val &val) noexcept;
    static WEBGL_multi_draw_instanced_base_vertex_base_instance take_ownership(Handle h) noexcept;

    WEBGL_multi_draw_instanced_base_vertex_base_instance clone() const noexcept;
    jsbind::Undefined multiDrawArraysInstancedBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& baseInstancesList, long long baseInstancesOffset, const jsbind::Any& drawcount);
    jsbind::Undefined multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& baseVerticesList, long long baseVerticesOffset, const jsbind::Any& baseInstancesList, long long baseInstancesOffset, const jsbind::Any& drawcount);
};

