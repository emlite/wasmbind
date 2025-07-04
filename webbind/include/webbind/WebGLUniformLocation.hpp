#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WebGLUniformLocation : public emlite::Val {
    explicit WebGLUniformLocation(Handle h) noexcept;

public:
    explicit WebGLUniformLocation(const emlite::Val &val) noexcept;
    static WebGLUniformLocation take_ownership(Handle h) noexcept;

    WebGLUniformLocation clone() const noexcept;
};

