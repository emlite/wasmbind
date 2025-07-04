#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLProgram : public WebGLObject {
    explicit WebGLProgram(Handle h) noexcept;

public:
    explicit WebGLProgram(const emlite::Val &val) noexcept;
    static WebGLProgram take_ownership(Handle h) noexcept;

    WebGLProgram clone() const noexcept;
};

