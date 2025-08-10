#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebGLContextAttributes
class WebGLContextAttributes : public emlite::Val {
  explicit WebGLContextAttributes(Handle h) noexcept;
public:
    static WebGLContextAttributes take_ownership(Handle h) noexcept;
    explicit WebGLContextAttributes(const emlite::Val &val) noexcept;
    WebGLContextAttributes() noexcept;
    [[nodiscard]] WebGLContextAttributes clone() const noexcept;
    /// Getter of the `xrCompatible` attribute.
    [[nodiscard]] bool xrCompatible() const;
    /// Setter of the `xrCompatible` attribute.
    void xrCompatible(bool value);
};

} // namespace webbind