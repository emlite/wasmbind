#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLSync class.
/// [`WebGLSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLSync)
class WebGLSync : public WebGLObject {
    explicit WebGLSync(Handle h) noexcept;

public:
    explicit WebGLSync(const emlite::Val &val) noexcept;
    static WebGLSync take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLSync clone() const noexcept;
};

