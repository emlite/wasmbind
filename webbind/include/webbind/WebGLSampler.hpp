#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLSampler class.
/// [`WebGLSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLSampler)
class WebGLSampler : public WebGLObject {
    explicit WebGLSampler(Handle h) noexcept;

public:
    explicit WebGLSampler(const emlite::Val &val) noexcept;
    static WebGLSampler take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLSampler clone() const noexcept;
};

