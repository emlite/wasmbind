#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLShader : public WebGLObject {
    explicit WebGLShader(Handle h) noexcept;

public:
    explicit WebGLShader(const emlite::Val &val) noexcept;
    static WebGLShader take_ownership(Handle h) noexcept;

    WebGLShader clone() const noexcept;
};

