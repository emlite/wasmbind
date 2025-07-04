#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLBuffer : public WebGLObject {
    explicit WebGLBuffer(Handle h) noexcept;

public:
    explicit WebGLBuffer(const emlite::Val &val) noexcept;
    static WebGLBuffer take_ownership(Handle h) noexcept;

    WebGLBuffer clone() const noexcept;
};

