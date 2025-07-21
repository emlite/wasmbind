#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLUniformLocation;


class WebGLRenderingContext : public emlite::Val {
    explicit WebGLRenderingContext(Handle h) noexcept;

public:
    explicit WebGLRenderingContext(const emlite::Val &val) noexcept;
    static WebGLRenderingContext take_ownership(Handle h) noexcept;

    WebGLRenderingContext clone() const noexcept;
    jsbind::Promise<jsbind::Undefined> makeXRCompatible();
    jsbind::Undefined bufferData(const jsbind::Any& target, const jsbind::Any& data, const jsbind::Any& usage);
    jsbind::Undefined bufferSubData(const jsbind::Any& target, const jsbind::Any& offset, const jsbind::Any& data);
    jsbind::Undefined compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& data);
    jsbind::Undefined compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& data);
    jsbind::Undefined readPixels(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& pixels);
    jsbind::Undefined texImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& source);
    jsbind::Undefined texSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& source);
    jsbind::Undefined uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value);
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value);
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value);
};

