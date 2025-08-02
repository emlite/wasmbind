#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLTexture class.
/// [`WebGLTexture`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLTexture)
class WebGLTexture : public WebGLObject {
    explicit WebGLTexture(Handle h) noexcept;

public:
    explicit WebGLTexture(const emlite::Val &val) noexcept;
    static WebGLTexture take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLTexture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

