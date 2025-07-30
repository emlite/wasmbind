#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLShader;


class WEBGL_debug_shaders : public emlite::Val {
    explicit WEBGL_debug_shaders(Handle h) noexcept;

public:
    explicit WEBGL_debug_shaders(const emlite::Val &val) noexcept;
    static WEBGL_debug_shaders take_ownership(Handle h) noexcept;

    WEBGL_debug_shaders clone() const noexcept;
    jsbind::String getTranslatedShaderSource(const WebGLShader& shader);
};

