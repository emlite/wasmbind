#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WebGLUniformLocation class.
/// [`WebGLUniformLocation`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLUniformLocation)
class WebGLUniformLocation : public emlite::Val {
    explicit WebGLUniformLocation(Handle h) noexcept;

public:
    explicit WebGLUniformLocation(const emlite::Val &val) noexcept;
    static WebGLUniformLocation take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLUniformLocation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

