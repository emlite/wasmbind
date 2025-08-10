#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebGLObject.hpp"

namespace webbind {

/// Interface WebGLTimerQueryEXT
/// [`WebGLTimerQueryEXT`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLTimerQueryEXT)
class WebGLTimerQueryEXT : public WebGLObject {
    explicit WebGLTimerQueryEXT(Handle h) noexcept;
public:
    explicit WebGLTimerQueryEXT(const emlite::Val &val) noexcept;
    static WebGLTimerQueryEXT take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLTimerQueryEXT clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind