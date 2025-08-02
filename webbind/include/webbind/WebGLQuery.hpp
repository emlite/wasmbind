#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLQuery class.
/// [`WebGLQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLQuery)
class WebGLQuery : public WebGLObject {
    explicit WebGLQuery(Handle h) noexcept;

public:
    explicit WebGLQuery(const emlite::Val &val) noexcept;
    static WebGLQuery take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLQuery clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

