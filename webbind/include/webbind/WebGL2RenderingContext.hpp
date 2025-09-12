#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebGLTexture;
class WebGLProgram;
class WebGLUniformLocation;
class WebGLQuery;
class WebGLSampler;
class WebGLSync;
class WebGLTransformFeedback;
class WebGLActiveInfo;
class WebGLBuffer;
class WebGLVertexArrayObject;

/// Interface WebGL2RenderingContext
/// [`WebGL2RenderingContext`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext)
class WebGL2RenderingContext : public emlite::Val {
    explicit WebGL2RenderingContext(Handle h) noexcept;
public:
    explicit WebGL2RenderingContext(const emlite::Val &val) noexcept;
    static WebGL2RenderingContext take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGL2RenderingContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The makeXRCompatible method.
    /// [`WebGL2RenderingContext.makeXRCompatible`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/makeXRCompatible)
    jsbind::Promise<jsbind::Undefined> makeXRCompatible();
    /// The copyBufferSubData method.
    /// [`WebGL2RenderingContext.copyBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/copyBufferSubData)
    jsbind::Undefined copyBufferSubData(const uint32_t& readTarget, const uint32_t& writeTarget, const intptr_t& readOffset, const intptr_t& writeOffset, const intptr_t& size);
    /// The getBufferSubData method.
    /// [`WebGL2RenderingContext.getBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getBufferSubData)
    jsbind::Undefined getBufferSubData(const uint32_t& target, const intptr_t& srcByteOffset, const jsbind::ArrayBufferView& dstBuffer);
    /// The getBufferSubData method.
    /// [`WebGL2RenderingContext.getBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getBufferSubData)
    jsbind::Undefined getBufferSubData(const uint32_t& target, const intptr_t& srcByteOffset, const jsbind::ArrayBufferView& dstBuffer, long long dstOffset);
    /// The getBufferSubData method.
    /// [`WebGL2RenderingContext.getBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getBufferSubData)
    jsbind::Undefined getBufferSubData(const uint32_t& target, const intptr_t& srcByteOffset, const jsbind::ArrayBufferView& dstBuffer, long long dstOffset, const jsbind::Any& length);
    /// The blitFramebuffer method.
    /// [`WebGL2RenderingContext.blitFramebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/blitFramebuffer)
    jsbind::Undefined blitFramebuffer(int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, const uint32_t& mask, const uint32_t& filter);
    /// The framebufferTextureLayer method.
    /// [`WebGL2RenderingContext.framebufferTextureLayer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/framebufferTextureLayer)
    jsbind::Undefined framebufferTextureLayer(const uint32_t& target, const uint32_t& attachment, const WebGLTexture& texture, int level, int layer);
    /// The invalidateFramebuffer method.
    /// [`WebGL2RenderingContext.invalidateFramebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/invalidateFramebuffer)
    jsbind::Undefined invalidateFramebuffer(const uint32_t& target, const jsbind::TypedArray<uint32_t>& attachments);
    /// The invalidateSubFramebuffer method.
    /// [`WebGL2RenderingContext.invalidateSubFramebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/invalidateSubFramebuffer)
    jsbind::Undefined invalidateSubFramebuffer(const uint32_t& target, const jsbind::TypedArray<uint32_t>& attachments, int x, int y, int width, int height);
    /// The readBuffer method.
    /// [`WebGL2RenderingContext.readBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/readBuffer)
    jsbind::Undefined readBuffer(const uint32_t& src);
    /// The getInternalformatParameter method.
    /// [`WebGL2RenderingContext.getInternalformatParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getInternalformatParameter)
    jsbind::Any getInternalformatParameter(const uint32_t& target, const uint32_t& internalformat, const uint32_t& pname);
    /// The renderbufferStorageMultisample method.
    /// [`WebGL2RenderingContext.renderbufferStorageMultisample`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/renderbufferStorageMultisample)
    jsbind::Undefined renderbufferStorageMultisample(const uint32_t& target, int samples, const uint32_t& internalformat, int width, int height);
    /// The texStorage2D method.
    /// [`WebGL2RenderingContext.texStorage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texStorage2D)
    jsbind::Undefined texStorage2D(const uint32_t& target, int levels, const uint32_t& internalformat, int width, int height);
    /// The texStorage3D method.
    /// [`WebGL2RenderingContext.texStorage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texStorage3D)
    jsbind::Undefined texStorage3D(const uint32_t& target, int levels, const uint32_t& internalformat, int width, int height, int depth);
    /// The texImage3D method.
    /// [`WebGL2RenderingContext.texImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage3D)
    jsbind::Undefined texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset);
    /// The texImage3D method.
    /// [`WebGL2RenderingContext.texImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage3D)
    jsbind::Undefined texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texImage3D method.
    /// [`WebGL2RenderingContext.texImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage3D)
    jsbind::Undefined texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData);
    /// The texImage3D method.
    /// [`WebGL2RenderingContext.texImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage3D)
    jsbind::Undefined texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The texSubImage3D method.
    /// [`WebGL2RenderingContext.texSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage3D)
    jsbind::Undefined texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset);
    /// The texSubImage3D method.
    /// [`WebGL2RenderingContext.texSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage3D)
    jsbind::Undefined texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texSubImage3D method.
    /// [`WebGL2RenderingContext.texSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage3D)
    jsbind::Undefined texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData);
    /// The texSubImage3D method.
    /// [`WebGL2RenderingContext.texSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage3D)
    jsbind::Undefined texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The copyTexSubImage3D method.
    /// [`WebGL2RenderingContext.copyTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/copyTexSubImage3D)
    jsbind::Undefined copyTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, int imageSize, const intptr_t& offset);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, const jsbind::ArrayBufferView& srcData);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, int imageSize, const intptr_t& offset);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const jsbind::ArrayBufferView& srcData);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The getFragDataLocation method.
    /// [`WebGL2RenderingContext.getFragDataLocation`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getFragDataLocation)
    int getFragDataLocation(const WebGLProgram& program, const jsbind::String& name);
    /// The uniform1ui method.
    /// [`WebGL2RenderingContext.uniform1ui`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1ui)
    jsbind::Undefined uniform1ui(const WebGLUniformLocation& location, const jsbind::Any& v0);
    /// The uniform2ui method.
    /// [`WebGL2RenderingContext.uniform2ui`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2ui)
    jsbind::Undefined uniform2ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1);
    /// The uniform3ui method.
    /// [`WebGL2RenderingContext.uniform3ui`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3ui)
    jsbind::Undefined uniform3ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1, const jsbind::Any& v2);
    /// The uniform4ui method.
    /// [`WebGL2RenderingContext.uniform4ui`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4ui)
    jsbind::Undefined uniform4ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1, const jsbind::Any& v2, const jsbind::Any& v3);
    /// The uniform1uiv method.
    /// [`WebGL2RenderingContext.uniform1uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1uiv)
    jsbind::Undefined uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform1uiv method.
    /// [`WebGL2RenderingContext.uniform1uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1uiv)
    jsbind::Undefined uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform1uiv method.
    /// [`WebGL2RenderingContext.uniform1uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1uiv)
    jsbind::Undefined uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform2uiv method.
    /// [`WebGL2RenderingContext.uniform2uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2uiv)
    jsbind::Undefined uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform2uiv method.
    /// [`WebGL2RenderingContext.uniform2uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2uiv)
    jsbind::Undefined uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform2uiv method.
    /// [`WebGL2RenderingContext.uniform2uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2uiv)
    jsbind::Undefined uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform3uiv method.
    /// [`WebGL2RenderingContext.uniform3uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3uiv)
    jsbind::Undefined uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform3uiv method.
    /// [`WebGL2RenderingContext.uniform3uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3uiv)
    jsbind::Undefined uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform3uiv method.
    /// [`WebGL2RenderingContext.uniform3uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3uiv)
    jsbind::Undefined uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform4uiv method.
    /// [`WebGL2RenderingContext.uniform4uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4uiv)
    jsbind::Undefined uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform4uiv method.
    /// [`WebGL2RenderingContext.uniform4uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4uiv)
    jsbind::Undefined uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform4uiv method.
    /// [`WebGL2RenderingContext.uniform4uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4uiv)
    jsbind::Undefined uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix3x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x2fv)
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix3x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x2fv)
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix3x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x2fv)
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix4x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x2fv)
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix4x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x2fv)
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix4x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x2fv)
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix2x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x3fv)
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix2x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x3fv)
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix2x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x3fv)
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix4x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x3fv)
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix4x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x3fv)
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix4x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x3fv)
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix2x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x4fv)
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix2x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x4fv)
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix2x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x4fv)
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix3x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x4fv)
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix3x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x4fv)
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix3x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x4fv)
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The vertexAttribI4i method.
    /// [`WebGL2RenderingContext.vertexAttribI4i`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribI4i)
    jsbind::Undefined vertexAttribI4i(const jsbind::Any& index, int x, int y, int z, int w);
    /// The vertexAttribI4iv method.
    /// [`WebGL2RenderingContext.vertexAttribI4iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribI4iv)
    jsbind::Undefined vertexAttribI4iv(const jsbind::Any& index, const jsbind::Any& values);
    /// The vertexAttribI4ui method.
    /// [`WebGL2RenderingContext.vertexAttribI4ui`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribI4ui)
    jsbind::Undefined vertexAttribI4ui(const jsbind::Any& index, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const jsbind::Any& w);
    /// The vertexAttribI4uiv method.
    /// [`WebGL2RenderingContext.vertexAttribI4uiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribI4uiv)
    jsbind::Undefined vertexAttribI4uiv(const jsbind::Any& index, const jsbind::Any& values);
    /// The vertexAttribIPointer method.
    /// [`WebGL2RenderingContext.vertexAttribIPointer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribIPointer)
    jsbind::Undefined vertexAttribIPointer(const jsbind::Any& index, int size, const uint32_t& type, int stride, const intptr_t& offset);
    /// The vertexAttribDivisor method.
    /// [`WebGL2RenderingContext.vertexAttribDivisor`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribDivisor)
    jsbind::Undefined vertexAttribDivisor(const jsbind::Any& index, const jsbind::Any& divisor);
    /// The drawArraysInstanced method.
    /// [`WebGL2RenderingContext.drawArraysInstanced`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawArraysInstanced)
    jsbind::Undefined drawArraysInstanced(const uint32_t& mode, int first, int count, int instanceCount);
    /// The drawElementsInstanced method.
    /// [`WebGL2RenderingContext.drawElementsInstanced`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawElementsInstanced)
    jsbind::Undefined drawElementsInstanced(const uint32_t& mode, int count, const uint32_t& type, const intptr_t& offset, int instanceCount);
    /// The drawRangeElements method.
    /// [`WebGL2RenderingContext.drawRangeElements`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawRangeElements)
    jsbind::Undefined drawRangeElements(const uint32_t& mode, const jsbind::Any& start, const jsbind::Any& end, int count, const uint32_t& type, const intptr_t& offset);
    /// The drawBuffers method.
    /// [`WebGL2RenderingContext.drawBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawBuffers)
    jsbind::Undefined drawBuffers(const jsbind::TypedArray<uint32_t>& buffers);
    /// The clearBufferfv method.
    /// [`WebGL2RenderingContext.clearBufferfv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferfv)
    jsbind::Undefined clearBufferfv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values);
    /// The clearBufferfv method.
    /// [`WebGL2RenderingContext.clearBufferfv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferfv)
    jsbind::Undefined clearBufferfv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values, long long srcOffset);
    /// The clearBufferiv method.
    /// [`WebGL2RenderingContext.clearBufferiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferiv)
    jsbind::Undefined clearBufferiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values);
    /// The clearBufferiv method.
    /// [`WebGL2RenderingContext.clearBufferiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferiv)
    jsbind::Undefined clearBufferiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values, long long srcOffset);
    /// The clearBufferuiv method.
    /// [`WebGL2RenderingContext.clearBufferuiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferuiv)
    jsbind::Undefined clearBufferuiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values);
    /// The clearBufferuiv method.
    /// [`WebGL2RenderingContext.clearBufferuiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferuiv)
    jsbind::Undefined clearBufferuiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values, long long srcOffset);
    /// The clearBufferfi method.
    /// [`WebGL2RenderingContext.clearBufferfi`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferfi)
    jsbind::Undefined clearBufferfi(const uint32_t& buffer, int drawbuffer, float depth, int stencil);
    /// The createQuery method.
    /// [`WebGL2RenderingContext.createQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createQuery)
    WebGLQuery createQuery();
    /// The deleteQuery method.
    /// [`WebGL2RenderingContext.deleteQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteQuery)
    jsbind::Undefined deleteQuery(const WebGLQuery& query);
    /// The isQuery method.
    /// [`WebGL2RenderingContext.isQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isQuery)
    bool isQuery(const WebGLQuery& query);
    /// The beginQuery method.
    /// [`WebGL2RenderingContext.beginQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/beginQuery)
    jsbind::Undefined beginQuery(const uint32_t& target, const WebGLQuery& query);
    /// The endQuery method.
    /// [`WebGL2RenderingContext.endQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/endQuery)
    jsbind::Undefined endQuery(const uint32_t& target);
    /// The getQuery method.
    /// [`WebGL2RenderingContext.getQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getQuery)
    WebGLQuery getQuery(const uint32_t& target, const uint32_t& pname);
    /// The getQueryParameter method.
    /// [`WebGL2RenderingContext.getQueryParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getQueryParameter)
    jsbind::Any getQueryParameter(const WebGLQuery& query, const uint32_t& pname);
    /// The createSampler method.
    /// [`WebGL2RenderingContext.createSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createSampler)
    WebGLSampler createSampler();
    /// The deleteSampler method.
    /// [`WebGL2RenderingContext.deleteSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteSampler)
    jsbind::Undefined deleteSampler(const WebGLSampler& sampler);
    /// The isSampler method.
    /// [`WebGL2RenderingContext.isSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isSampler)
    bool isSampler(const WebGLSampler& sampler);
    /// The bindSampler method.
    /// [`WebGL2RenderingContext.bindSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindSampler)
    jsbind::Undefined bindSampler(const jsbind::Any& unit, const WebGLSampler& sampler);
    /// The samplerParameteri method.
    /// [`WebGL2RenderingContext.samplerParameteri`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/samplerParameteri)
    jsbind::Undefined samplerParameteri(const WebGLSampler& sampler, const uint32_t& pname, int param);
    /// The samplerParameterf method.
    /// [`WebGL2RenderingContext.samplerParameterf`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/samplerParameterf)
    jsbind::Undefined samplerParameterf(const WebGLSampler& sampler, const uint32_t& pname, float param);
    /// The getSamplerParameter method.
    /// [`WebGL2RenderingContext.getSamplerParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getSamplerParameter)
    jsbind::Any getSamplerParameter(const WebGLSampler& sampler, const uint32_t& pname);
    /// The fenceSync method.
    /// [`WebGL2RenderingContext.fenceSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/fenceSync)
    WebGLSync fenceSync(const uint32_t& condition, const uint32_t& flags);
    /// The isSync method.
    /// [`WebGL2RenderingContext.isSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isSync)
    bool isSync(const WebGLSync& sync);
    /// The deleteSync method.
    /// [`WebGL2RenderingContext.deleteSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteSync)
    jsbind::Undefined deleteSync(const WebGLSync& sync);
    /// The clientWaitSync method.
    /// [`WebGL2RenderingContext.clientWaitSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clientWaitSync)
    uint32_t clientWaitSync(const WebGLSync& sync, const uint32_t& flags, const jsbind::Any& timeout);
    /// The waitSync method.
    /// [`WebGL2RenderingContext.waitSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/waitSync)
    jsbind::Undefined waitSync(const WebGLSync& sync, const uint32_t& flags, const jsbind::Any& timeout);
    /// The getSyncParameter method.
    /// [`WebGL2RenderingContext.getSyncParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getSyncParameter)
    jsbind::Any getSyncParameter(const WebGLSync& sync, const uint32_t& pname);
    /// The createTransformFeedback method.
    /// [`WebGL2RenderingContext.createTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createTransformFeedback)
    WebGLTransformFeedback createTransformFeedback();
    /// The deleteTransformFeedback method.
    /// [`WebGL2RenderingContext.deleteTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteTransformFeedback)
    jsbind::Undefined deleteTransformFeedback(const WebGLTransformFeedback& tf);
    /// The isTransformFeedback method.
    /// [`WebGL2RenderingContext.isTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isTransformFeedback)
    bool isTransformFeedback(const WebGLTransformFeedback& tf);
    /// The bindTransformFeedback method.
    /// [`WebGL2RenderingContext.bindTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindTransformFeedback)
    jsbind::Undefined bindTransformFeedback(const uint32_t& target, const WebGLTransformFeedback& tf);
    /// The beginTransformFeedback method.
    /// [`WebGL2RenderingContext.beginTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/beginTransformFeedback)
    jsbind::Undefined beginTransformFeedback(const uint32_t& primitiveMode);
    /// The endTransformFeedback method.
    /// [`WebGL2RenderingContext.endTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/endTransformFeedback)
    jsbind::Undefined endTransformFeedback();
    /// The transformFeedbackVaryings method.
    /// [`WebGL2RenderingContext.transformFeedbackVaryings`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/transformFeedbackVaryings)
    jsbind::Undefined transformFeedbackVaryings(const WebGLProgram& program, const jsbind::TypedArray<jsbind::String>& varyings, const uint32_t& bufferMode);
    /// The getTransformFeedbackVarying method.
    /// [`WebGL2RenderingContext.getTransformFeedbackVarying`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getTransformFeedbackVarying)
    WebGLActiveInfo getTransformFeedbackVarying(const WebGLProgram& program, const jsbind::Any& index);
    /// The pauseTransformFeedback method.
    /// [`WebGL2RenderingContext.pauseTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/pauseTransformFeedback)
    jsbind::Undefined pauseTransformFeedback();
    /// The resumeTransformFeedback method.
    /// [`WebGL2RenderingContext.resumeTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/resumeTransformFeedback)
    jsbind::Undefined resumeTransformFeedback();
    /// The bindBufferBase method.
    /// [`WebGL2RenderingContext.bindBufferBase`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindBufferBase)
    jsbind::Undefined bindBufferBase(const uint32_t& target, const jsbind::Any& index, const WebGLBuffer& buffer);
    /// The bindBufferRange method.
    /// [`WebGL2RenderingContext.bindBufferRange`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindBufferRange)
    jsbind::Undefined bindBufferRange(const uint32_t& target, const jsbind::Any& index, const WebGLBuffer& buffer, const intptr_t& offset, const intptr_t& size);
    /// The getIndexedParameter method.
    /// [`WebGL2RenderingContext.getIndexedParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getIndexedParameter)
    jsbind::Any getIndexedParameter(const uint32_t& target, const jsbind::Any& index);
    /// The getUniformIndices method.
    /// [`WebGL2RenderingContext.getUniformIndices`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getUniformIndices)
    jsbind::TypedArray<jsbind::Any> getUniformIndices(const WebGLProgram& program, const jsbind::TypedArray<jsbind::String>& uniformNames);
    /// The getActiveUniforms method.
    /// [`WebGL2RenderingContext.getActiveUniforms`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getActiveUniforms)
    jsbind::Any getActiveUniforms(const WebGLProgram& program, const jsbind::TypedArray<jsbind::Any>& uniformIndices, const uint32_t& pname);
    /// The getUniformBlockIndex method.
    /// [`WebGL2RenderingContext.getUniformBlockIndex`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getUniformBlockIndex)
    jsbind::Any getUniformBlockIndex(const WebGLProgram& program, const jsbind::String& uniformBlockName);
    /// The getActiveUniformBlockParameter method.
    /// [`WebGL2RenderingContext.getActiveUniformBlockParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getActiveUniformBlockParameter)
    jsbind::Any getActiveUniformBlockParameter(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const uint32_t& pname);
    /// The getActiveUniformBlockName method.
    /// [`WebGL2RenderingContext.getActiveUniformBlockName`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getActiveUniformBlockName)
    jsbind::String getActiveUniformBlockName(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex);
    /// The uniformBlockBinding method.
    /// [`WebGL2RenderingContext.uniformBlockBinding`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformBlockBinding)
    jsbind::Undefined uniformBlockBinding(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const jsbind::Any& uniformBlockBinding);
    /// The createVertexArray method.
    /// [`WebGL2RenderingContext.createVertexArray`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createVertexArray)
    WebGLVertexArrayObject createVertexArray();
    /// The deleteVertexArray method.
    /// [`WebGL2RenderingContext.deleteVertexArray`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteVertexArray)
    jsbind::Undefined deleteVertexArray(const WebGLVertexArrayObject& vertexArray);
    /// The isVertexArray method.
    /// [`WebGL2RenderingContext.isVertexArray`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isVertexArray)
    bool isVertexArray(const WebGLVertexArrayObject& vertexArray);
    /// The bindVertexArray method.
    /// [`WebGL2RenderingContext.bindVertexArray`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindVertexArray)
    jsbind::Undefined bindVertexArray(const WebGLVertexArrayObject& array);
    /// The bufferData method.
    /// [`WebGL2RenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferData)
    jsbind::Undefined bufferData(const uint32_t& target, const intptr_t& size, const uint32_t& usage);
    /// The bufferData method.
    /// [`WebGL2RenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferData)
    jsbind::Undefined bufferData(const uint32_t& target, const jsbind::Any& srcData, const uint32_t& usage);
    /// The bufferSubData method.
    /// [`WebGL2RenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const uint32_t& target, const intptr_t& dstByteOffset, const jsbind::Any& srcData);
    /// The bufferData method.
    /// [`WebGL2RenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferData)
    jsbind::Undefined bufferData(const uint32_t& target, const jsbind::ArrayBufferView& srcData, const uint32_t& usage, long long srcOffset);
    /// The bufferData method.
    /// [`WebGL2RenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferData)
    jsbind::Undefined bufferData(const uint32_t& target, const jsbind::ArrayBufferView& srcData, const uint32_t& usage, long long srcOffset, const jsbind::Any& length);
    /// The bufferSubData method.
    /// [`WebGL2RenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const uint32_t& target, const intptr_t& dstByteOffset, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The bufferSubData method.
    /// [`WebGL2RenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const uint32_t& target, const intptr_t& dstByteOffset, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& length);
    /// The texImage2D method.
    /// [`WebGL2RenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels);
    /// The texImage2D method.
    /// [`WebGL2RenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texSubImage2D method.
    /// [`WebGL2RenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels);
    /// The texSubImage2D method.
    /// [`WebGL2RenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texImage2D method.
    /// [`WebGL2RenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset);
    /// The texImage2D method.
    /// [`WebGL2RenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texImage2D method.
    /// [`WebGL2RenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The texSubImage2D method.
    /// [`WebGL2RenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset);
    /// The texSubImage2D method.
    /// [`WebGL2RenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::Any& source);
    /// The texSubImage2D method.
    /// [`WebGL2RenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, int imageSize, const intptr_t& offset);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& srcData);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, int imageSize, const intptr_t& offset);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& srcData);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The uniform1fv method.
    /// [`WebGL2RenderingContext.uniform1fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1fv)
    jsbind::Undefined uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform1fv method.
    /// [`WebGL2RenderingContext.uniform1fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1fv)
    jsbind::Undefined uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform1fv method.
    /// [`WebGL2RenderingContext.uniform1fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1fv)
    jsbind::Undefined uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform2fv method.
    /// [`WebGL2RenderingContext.uniform2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2fv)
    jsbind::Undefined uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform2fv method.
    /// [`WebGL2RenderingContext.uniform2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2fv)
    jsbind::Undefined uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform2fv method.
    /// [`WebGL2RenderingContext.uniform2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2fv)
    jsbind::Undefined uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform3fv method.
    /// [`WebGL2RenderingContext.uniform3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3fv)
    jsbind::Undefined uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform3fv method.
    /// [`WebGL2RenderingContext.uniform3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3fv)
    jsbind::Undefined uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform3fv method.
    /// [`WebGL2RenderingContext.uniform3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3fv)
    jsbind::Undefined uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform4fv method.
    /// [`WebGL2RenderingContext.uniform4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4fv)
    jsbind::Undefined uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform4fv method.
    /// [`WebGL2RenderingContext.uniform4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4fv)
    jsbind::Undefined uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform4fv method.
    /// [`WebGL2RenderingContext.uniform4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4fv)
    jsbind::Undefined uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform1iv method.
    /// [`WebGL2RenderingContext.uniform1iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1iv)
    jsbind::Undefined uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform1iv method.
    /// [`WebGL2RenderingContext.uniform1iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1iv)
    jsbind::Undefined uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform1iv method.
    /// [`WebGL2RenderingContext.uniform1iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform1iv)
    jsbind::Undefined uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform2iv method.
    /// [`WebGL2RenderingContext.uniform2iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2iv)
    jsbind::Undefined uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform2iv method.
    /// [`WebGL2RenderingContext.uniform2iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2iv)
    jsbind::Undefined uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform2iv method.
    /// [`WebGL2RenderingContext.uniform2iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform2iv)
    jsbind::Undefined uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform3iv method.
    /// [`WebGL2RenderingContext.uniform3iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3iv)
    jsbind::Undefined uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform3iv method.
    /// [`WebGL2RenderingContext.uniform3iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3iv)
    jsbind::Undefined uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform3iv method.
    /// [`WebGL2RenderingContext.uniform3iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform3iv)
    jsbind::Undefined uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniform4iv method.
    /// [`WebGL2RenderingContext.uniform4iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4iv)
    jsbind::Undefined uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data);
    /// The uniform4iv method.
    /// [`WebGL2RenderingContext.uniform4iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4iv)
    jsbind::Undefined uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset);
    /// The uniform4iv method.
    /// [`WebGL2RenderingContext.uniform4iv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniform4iv)
    jsbind::Undefined uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2fv)
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2fv)
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2fv)
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data);
    /// The uniformMatrix4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The readPixels method.
    /// [`WebGL2RenderingContext.readPixels`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/readPixels)
    jsbind::Undefined readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& dstData);
    /// The readPixels method.
    /// [`WebGL2RenderingContext.readPixels`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/readPixels)
    jsbind::Undefined readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const intptr_t& offset);
    /// The readPixels method.
    /// [`WebGL2RenderingContext.readPixels`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/readPixels)
    jsbind::Undefined readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& dstData, long long dstOffset);
};

} // namespace webbind