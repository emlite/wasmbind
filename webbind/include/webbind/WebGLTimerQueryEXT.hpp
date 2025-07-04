#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLTimerQueryEXT : public WebGLObject {
    explicit WebGLTimerQueryEXT(Handle h) noexcept;

public:
    explicit WebGLTimerQueryEXT(const emlite::Val &val) noexcept;
    static WebGLTimerQueryEXT take_ownership(Handle h) noexcept;

    WebGLTimerQueryEXT clone() const noexcept;
};

