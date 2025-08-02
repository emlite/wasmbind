#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLRenderbuffer class.
/// [`WebGLRenderbuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderbuffer)
class WebGLRenderbuffer : public WebGLObject {
    explicit WebGLRenderbuffer(Handle h) noexcept;

public:
    explicit WebGLRenderbuffer(const emlite::Val &val) noexcept;
    static WebGLRenderbuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLRenderbuffer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

