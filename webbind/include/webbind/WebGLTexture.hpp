#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLTexture : public WebGLObject {
    explicit WebGLTexture(Handle h) noexcept;

public:
    explicit WebGLTexture(const emlite::Val &val) noexcept;
    static WebGLTexture take_ownership(Handle h) noexcept;

    WebGLTexture clone() const noexcept;
};

