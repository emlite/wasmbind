#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLUniformLocation;


/// The WebGLRenderingContext class.
/// [`WebGLRenderingContext`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext)
class WebGLRenderingContext : public emlite::Val {
    explicit WebGLRenderingContext(Handle h) noexcept;

public:
    explicit WebGLRenderingContext(const emlite::Val &val) noexcept;
    static WebGLRenderingContext take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLRenderingContext clone() const noexcept;
    /// The makeXRCompatible method.
    /// [`WebGLRenderingContext.makeXRCompatible`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/makeXRCompatible)
    jsbind::Promise<jsbind::Undefined> makeXRCompatible();
    /// The bufferData method.
    /// [`WebGLRenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/bufferData)
    jsbind::Undefined bufferData(const jsbind::Any& target, const jsbind::Any& data, const jsbind::Any& usage);
    /// The bufferSubData method.
    /// [`WebGLRenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const jsbind::Any& target, const jsbind::Any& offset, const jsbind::Any& data);
    /// The compressedTexImage2D method.
    /// [`WebGLRenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& data);
    /// The compressedTexSubImage2D method.
    /// [`WebGLRenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& data);
    /// The readPixels method.
    /// [`WebGLRenderingContext.readPixels`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/readPixels)
    jsbind::Undefined readPixels(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& pixels);
    /// The texImage2D method.
    /// [`WebGLRenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& source);
    /// The texSubImage2D method.
    /// [`WebGLRenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& source);
    /// The uniform1fv method.
    /// [`WebGLRenderingContext.uniform1fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform1fv)
    jsbind::Undefined uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform2fv method.
    /// [`WebGLRenderingContext.uniform2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform2fv)
    jsbind::Undefined uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform3fv method.
    /// [`WebGLRenderingContext.uniform3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform3fv)
    jsbind::Undefined uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform4fv method.
    /// [`WebGLRenderingContext.uniform4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform4fv)
    jsbind::Undefined uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform1iv method.
    /// [`WebGLRenderingContext.uniform1iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform1iv)
    jsbind::Undefined uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform2iv method.
    /// [`WebGLRenderingContext.uniform2iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform2iv)
    jsbind::Undefined uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform3iv method.
    /// [`WebGLRenderingContext.uniform3iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform3iv)
    jsbind::Undefined uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniform4iv method.
    /// [`WebGLRenderingContext.uniform4iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniform4iv)
    jsbind::Undefined uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& v);
    /// The uniformMatrix2fv method.
    /// [`WebGLRenderingContext.uniformMatrix2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniformMatrix2fv)
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value);
    /// The uniformMatrix3fv method.
    /// [`WebGLRenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value);
    /// The uniformMatrix4fv method.
    /// [`WebGLRenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value);
};

