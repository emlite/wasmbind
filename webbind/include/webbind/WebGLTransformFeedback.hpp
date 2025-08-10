#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebGLObject.hpp"

namespace webbind {

/// Interface WebGLTransformFeedback
/// [`WebGLTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLTransformFeedback)
class WebGLTransformFeedback : public WebGLObject {
    explicit WebGLTransformFeedback(Handle h) noexcept;
public:
    explicit WebGLTransformFeedback(const emlite::Val &val) noexcept;
    static WebGLTransformFeedback take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLTransformFeedback clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind