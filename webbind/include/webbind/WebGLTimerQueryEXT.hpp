#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLTimerQueryEXT class.
/// [`WebGLTimerQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLTimerQueryEXT)
class WebGLTimerQueryEXT : public WebGLObject {
    explicit WebGLTimerQueryEXT(Handle h) noexcept;

public:
    explicit WebGLTimerQueryEXT(const emlite::Val &val) noexcept;
    static WebGLTimerQueryEXT take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLTimerQueryEXT clone() const noexcept;
};

