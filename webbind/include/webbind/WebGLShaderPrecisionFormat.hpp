#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WebGLShaderPrecisionFormat
/// [`WebGLShaderPrecisionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat)
class WebGLShaderPrecisionFormat : public emlite::Val {
    explicit WebGLShaderPrecisionFormat(Handle h) noexcept;
public:
    explicit WebGLShaderPrecisionFormat(const emlite::Val &val) noexcept;
    static WebGLShaderPrecisionFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLShaderPrecisionFormat clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`WebGLShaderPrecisionFormat.rangeMin`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/rangeMin)
    /// [`WebGLShaderPrecisionFormat.rangeMin`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/rangeMin)
    [[nodiscard]] int rangeMin() const;
    /// [`WebGLShaderPrecisionFormat.rangeMax`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/rangeMax)
    /// [`WebGLShaderPrecisionFormat.rangeMax`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/rangeMax)
    [[nodiscard]] int rangeMax() const;
    /// [`WebGLShaderPrecisionFormat.precision`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/precision)
    /// [`WebGLShaderPrecisionFormat.precision`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/precision)
    [[nodiscard]] int precision() const;
};

} // namespace webbind