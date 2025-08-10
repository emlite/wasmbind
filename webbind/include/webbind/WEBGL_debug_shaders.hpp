#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebGLShader;

/// Interface WEBGL_debug_shaders
/// [`WEBGL_debug_shaders`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_debug_shaders)
class WEBGL_debug_shaders : public emlite::Val {
    explicit WEBGL_debug_shaders(Handle h) noexcept;
public:
    explicit WEBGL_debug_shaders(const emlite::Val &val) noexcept;
    static WEBGL_debug_shaders take_ownership(Handle h) noexcept;
    [[nodiscard]] WEBGL_debug_shaders clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getTranslatedShaderSource method.
    /// [`WEBGL_debug_shaders.getTranslatedShaderSource`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_debug_shaders/getTranslatedShaderSource)
    jsbind::String getTranslatedShaderSource(const WebGLShader& shader);
};

} // namespace webbind