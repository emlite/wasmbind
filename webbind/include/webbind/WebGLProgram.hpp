#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebGLObject.hpp"

namespace webbind {

/// Interface WebGLProgram
/// [`WebGLProgram`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLProgram)
class WebGLProgram : public WebGLObject {
    explicit WebGLProgram(Handle h) noexcept;
public:
    explicit WebGLProgram(const emlite::Val &val) noexcept;
    static WebGLProgram take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLProgram clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind