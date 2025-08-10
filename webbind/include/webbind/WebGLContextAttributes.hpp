#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebGLContextAttributes
/// [`WebGLContextAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLContextAttributes)
class WebGLContextAttributes : public emlite::Val {
  explicit WebGLContextAttributes(Handle h) noexcept;
public:
    static WebGLContextAttributes take_ownership(Handle h) noexcept;
    explicit WebGLContextAttributes(const emlite::Val &val) noexcept;
    WebGLContextAttributes() noexcept;
    [[nodiscard]] WebGLContextAttributes clone() const noexcept;
    [[nodiscard]] bool xrCompatible() const;
    void xrCompatible(bool value);
};

} // namespace webbind