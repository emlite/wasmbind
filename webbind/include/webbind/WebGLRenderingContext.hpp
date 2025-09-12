#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebGLUniformLocation;

/// Interface WebGLRenderingContext
/// [`WebGLRenderingContext`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext)
class WebGLRenderingContext : public emlite::Val {
    explicit WebGLRenderingContext(Handle h) noexcept;
public:
    explicit WebGLRenderingContext(const emlite::Val &val) noexcept;
    static WebGLRenderingContext take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLRenderingContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The makeXRCompatible method.
    /// [`WebGLRenderingContext.makeXRCompatible`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/makeXRCompatible)
    jsbind::Promise<jsbind::Undefined> makeXRCompatible();
    /// The bufferData method.
    /// [`WebGLRenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/bufferData)
    jsbind::Undefined bufferData(const uint32_t& target, const intptr_t& size, const uint32_t& usage);
    /// The bufferData method.
    /// [`WebGLRenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/bufferData)
    jsbind::Undefined bufferData(const uint32_t& target, const jsbind::Any& data, const uint32_t& usage);
    /// The bufferSubData method.
    /// [`WebGLRenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const uint32_t& target, const intptr_t& offset, const jsbind::Any& data);
    /// The compressedTexImage2D method.
    /// [`WebGLRenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& data);
    /// The compressedTexSubImage2D method.
    /// [`WebGLRenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& data);
    /// The readPixels method.
    /// [`WebGLRenderingContext.readPixels`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/readPixels)
    jsbind::Undefined readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels);
    /// The texImage2D method.
    /// [`WebGLRenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels);
    /// The texImage2D method.
    /// [`WebGLRenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texSubImage2D method.
    /// [`WebGLRenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels);
    /// The texSubImage2D method.
    /// [`WebGLRenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
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
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& value);
    /// The uniformMatrix3fv method.
    /// [`WebGLRenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& value);
    /// The uniformMatrix4fv method.
    /// [`WebGLRenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& value);
};

} // namespace webbind