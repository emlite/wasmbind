#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_provoking_vertex : public emlite::Val {
    explicit WEBGL_provoking_vertex(Handle h) noexcept;

public:
    explicit WEBGL_provoking_vertex(const emlite::Val &val) noexcept;
    static WEBGL_provoking_vertex take_ownership(Handle h) noexcept;

    WEBGL_provoking_vertex clone() const noexcept;
    jsbind::Undefined provokingVertexWEBGL(const jsbind::Any& provokeMode);
};

