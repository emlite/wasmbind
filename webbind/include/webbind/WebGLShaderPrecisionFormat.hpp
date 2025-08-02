#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WebGLShaderPrecisionFormat class.
/// [`WebGLShaderPrecisionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat)
class WebGLShaderPrecisionFormat : public emlite::Val {
    explicit WebGLShaderPrecisionFormat(Handle h) noexcept;

public:
    explicit WebGLShaderPrecisionFormat(const emlite::Val &val) noexcept;
    static WebGLShaderPrecisionFormat take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLShaderPrecisionFormat clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `rangeMin` attribute.
    /// [`WebGLShaderPrecisionFormat.rangeMin`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/rangeMin)
    [[nodiscard]] jsbind::Any rangeMin() const;
    /// Getter of the `rangeMax` attribute.
    /// [`WebGLShaderPrecisionFormat.rangeMax`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/rangeMax)
    [[nodiscard]] jsbind::Any rangeMax() const;
    /// Getter of the `precision` attribute.
    /// [`WebGLShaderPrecisionFormat.precision`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShaderPrecisionFormat/precision)
    [[nodiscard]] jsbind::Any precision() const;
};

