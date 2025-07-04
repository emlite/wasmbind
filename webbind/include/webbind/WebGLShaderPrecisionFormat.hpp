#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WebGLShaderPrecisionFormat : public emlite::Val {
    explicit WebGLShaderPrecisionFormat(Handle h) noexcept;

public:
    explicit WebGLShaderPrecisionFormat(const emlite::Val &val) noexcept;
    static WebGLShaderPrecisionFormat take_ownership(Handle h) noexcept;

    WebGLShaderPrecisionFormat clone() const noexcept;
    jsbind::Any rangeMin() const;
    jsbind::Any rangeMax() const;
    jsbind::Any precision() const;
};

