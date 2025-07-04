#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLQuery : public WebGLObject {
    explicit WebGLQuery(Handle h) noexcept;

public:
    explicit WebGLQuery(const emlite::Val &val) noexcept;
    static WebGLQuery take_ownership(Handle h) noexcept;

    WebGLQuery clone() const noexcept;
};

