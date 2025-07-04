#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLSync : public WebGLObject {
    explicit WebGLSync(Handle h) noexcept;

public:
    explicit WebGLSync(const emlite::Val &val) noexcept;
    static WebGLSync take_ownership(Handle h) noexcept;

    WebGLSync clone() const noexcept;
};

