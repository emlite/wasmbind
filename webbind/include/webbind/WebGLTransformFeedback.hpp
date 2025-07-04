#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLTransformFeedback : public WebGLObject {
    explicit WebGLTransformFeedback(Handle h) noexcept;

public:
    explicit WebGLTransformFeedback(const emlite::Val &val) noexcept;
    static WebGLTransformFeedback take_ownership(Handle h) noexcept;

    WebGLTransformFeedback clone() const noexcept;
};

