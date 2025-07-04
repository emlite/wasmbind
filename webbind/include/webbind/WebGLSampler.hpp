#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLSampler : public WebGLObject {
    explicit WebGLSampler(Handle h) noexcept;

public:
    explicit WebGLSampler(const emlite::Val &val) noexcept;
    static WebGLSampler take_ownership(Handle h) noexcept;

    WebGLSampler clone() const noexcept;
};

