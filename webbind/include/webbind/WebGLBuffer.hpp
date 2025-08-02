#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLBuffer class.
/// [`WebGLBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLBuffer)
class WebGLBuffer : public WebGLObject {
    explicit WebGLBuffer(Handle h) noexcept;

public:
    explicit WebGLBuffer(const emlite::Val &val) noexcept;
    static WebGLBuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLBuffer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

