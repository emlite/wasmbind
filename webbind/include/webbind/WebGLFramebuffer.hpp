#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLFramebuffer : public WebGLObject {
    explicit WebGLFramebuffer(Handle h) noexcept;

public:
    explicit WebGLFramebuffer(const emlite::Val &val) noexcept;
    static WebGLFramebuffer take_ownership(Handle h) noexcept;

    WebGLFramebuffer clone() const noexcept;
};

