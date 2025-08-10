#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebGLObject.hpp"

namespace webbind {

/// Interface WebGLSync
/// [`WebGLSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLSync)
class WebGLSync : public WebGLObject {
    explicit WebGLSync(Handle h) noexcept;
public:
    explicit WebGLSync(const emlite::Val &val) noexcept;
    static WebGLSync take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLSync clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind