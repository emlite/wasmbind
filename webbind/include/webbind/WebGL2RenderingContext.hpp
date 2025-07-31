#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

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


/// The WebGL2RenderingContext class.
/// [`WebGL2RenderingContext`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext)
class WebGL2RenderingContext : public emlite::Val {
    explicit WebGL2RenderingContext(Handle h) noexcept;

public:
    explicit WebGL2RenderingContext(const emlite::Val &val) noexcept;
    static WebGL2RenderingContext take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGL2RenderingContext clone() const noexcept;
    /// The makeXRCompatible method.
    /// [`WebGL2RenderingContext.makeXRCompatible`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/makeXRCompatible)
    jsbind::Promise<jsbind::Undefined> makeXRCompatible();
    /// The copyBufferSubData method.
    /// [`WebGL2RenderingContext.copyBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/copyBufferSubData)
    jsbind::Undefined copyBufferSubData(const jsbind::Any& readTarget, const jsbind::Any& writeTarget, const jsbind::Any& readOffset, const jsbind::Any& writeOffset, const jsbind::Any& size);
    /// The getBufferSubData method.
    /// [`WebGL2RenderingContext.getBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getBufferSubData)
    jsbind::Undefined getBufferSubData(const jsbind::Any& target, const jsbind::Any& srcByteOffset, const jsbind::Any& dstBuffer);
    /// The getBufferSubData method.
    /// [`WebGL2RenderingContext.getBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getBufferSubData)
    jsbind::Undefined getBufferSubData(const jsbind::Any& target, const jsbind::Any& srcByteOffset, const jsbind::Any& dstBuffer, long long dstOffset);
    /// The getBufferSubData method.
    /// [`WebGL2RenderingContext.getBufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getBufferSubData)
    jsbind::Undefined getBufferSubData(const jsbind::Any& target, const jsbind::Any& srcByteOffset, const jsbind::Any& dstBuffer, long long dstOffset, const jsbind::Any& length);
    /// The blitFramebuffer method.
    /// [`WebGL2RenderingContext.blitFramebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/blitFramebuffer)
    jsbind::Undefined blitFramebuffer(const jsbind::Any& srcX0, const jsbind::Any& srcY0, const jsbind::Any& srcX1, const jsbind::Any& srcY1, const jsbind::Any& dstX0, const jsbind::Any& dstY0, const jsbind::Any& dstX1, const jsbind::Any& dstY1, const jsbind::Any& mask, const jsbind::Any& filter);
    /// The framebufferTextureLayer method.
    /// [`WebGL2RenderingContext.framebufferTextureLayer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/framebufferTextureLayer)
    jsbind::Undefined framebufferTextureLayer(const jsbind::Any& target, const jsbind::Any& attachment, const WebGLTexture& texture, const jsbind::Any& level, const jsbind::Any& layer);
    /// The invalidateFramebuffer method.
    /// [`WebGL2RenderingContext.invalidateFramebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/invalidateFramebuffer)
    jsbind::Undefined invalidateFramebuffer(const jsbind::Any& target, const jsbind::TypedArray<jsbind::Any>& attachments);
    /// The invalidateSubFramebuffer method.
    /// [`WebGL2RenderingContext.invalidateSubFramebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/invalidateSubFramebuffer)
    jsbind::Undefined invalidateSubFramebuffer(const jsbind::Any& target, const jsbind::TypedArray<jsbind::Any>& attachments, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height);
    /// The readBuffer method.
    /// [`WebGL2RenderingContext.readBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/readBuffer)
    jsbind::Undefined readBuffer(const jsbind::Any& src);
    /// The getInternalformatParameter method.
    /// [`WebGL2RenderingContext.getInternalformatParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getInternalformatParameter)
    jsbind::Any getInternalformatParameter(const jsbind::Any& target, const jsbind::Any& internalformat, const jsbind::Any& pname);
    /// The renderbufferStorageMultisample method.
    /// [`WebGL2RenderingContext.renderbufferStorageMultisample`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/renderbufferStorageMultisample)
    jsbind::Undefined renderbufferStorageMultisample(const jsbind::Any& target, const jsbind::Any& samples, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height);
    /// The texStorage2D method.
    /// [`WebGL2RenderingContext.texStorage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texStorage2D)
    jsbind::Undefined texStorage2D(const jsbind::Any& target, const jsbind::Any& levels, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height);
    /// The texStorage3D method.
    /// [`WebGL2RenderingContext.texStorage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texStorage3D)
    jsbind::Undefined texStorage3D(const jsbind::Any& target, const jsbind::Any& levels, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth);
    /// The texImage3D method.
    /// [`WebGL2RenderingContext.texImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage3D)
    jsbind::Undefined texImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& border, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    /// The texSubImage3D method.
    /// [`WebGL2RenderingContext.texSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage3D)
    jsbind::Undefined texSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData);
    /// The texSubImage3D method.
    /// [`WebGL2RenderingContext.texSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage3D)
    jsbind::Undefined texSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    /// The copyTexSubImage3D method.
    /// [`WebGL2RenderingContext.copyTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/copyTexSubImage3D)
    jsbind::Undefined copyTexSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& border, const jsbind::Any& srcData);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& border, const jsbind::Any& srcData, long long srcOffset);
    /// The compressedTexImage3D method.
    /// [`WebGL2RenderingContext.compressedTexImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage3D)
    jsbind::Undefined compressedTexImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& border, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& srcData);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& srcData, long long srcOffset);
    /// The compressedTexSubImage3D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage3D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage3D)
    jsbind::Undefined compressedTexSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The getFragDataLocation method.
    /// [`WebGL2RenderingContext.getFragDataLocation`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getFragDataLocation)
    jsbind::Any getFragDataLocation(const WebGLProgram& program, const jsbind::String& name);
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
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix3x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x2fv)
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix3x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x2fv)
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix4x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x2fv)
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix4x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x2fv)
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix4x2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x2fv)
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix2x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x3fv)
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix2x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x3fv)
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix2x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x3fv)
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix4x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x3fv)
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix4x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x3fv)
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix4x3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4x3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4x3fv)
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix2x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x4fv)
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix2x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x4fv)
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix2x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2x4fv)
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix3x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x4fv)
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix3x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x4fv)
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix3x4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3x4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3x4fv)
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The vertexAttribI4i method.
    /// [`WebGL2RenderingContext.vertexAttribI4i`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribI4i)
    jsbind::Undefined vertexAttribI4i(const jsbind::Any& index, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const jsbind::Any& w);
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
    jsbind::Undefined vertexAttribIPointer(const jsbind::Any& index, const jsbind::Any& size, const jsbind::Any& type, const jsbind::Any& stride, const jsbind::Any& offset);
    /// The vertexAttribDivisor method.
    /// [`WebGL2RenderingContext.vertexAttribDivisor`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/vertexAttribDivisor)
    jsbind::Undefined vertexAttribDivisor(const jsbind::Any& index, const jsbind::Any& divisor);
    /// The drawArraysInstanced method.
    /// [`WebGL2RenderingContext.drawArraysInstanced`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawArraysInstanced)
    jsbind::Undefined drawArraysInstanced(const jsbind::Any& mode, const jsbind::Any& first, const jsbind::Any& count, const jsbind::Any& instanceCount);
    /// The drawElementsInstanced method.
    /// [`WebGL2RenderingContext.drawElementsInstanced`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawElementsInstanced)
    jsbind::Undefined drawElementsInstanced(const jsbind::Any& mode, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset, const jsbind::Any& instanceCount);
    /// The drawRangeElements method.
    /// [`WebGL2RenderingContext.drawRangeElements`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawRangeElements)
    jsbind::Undefined drawRangeElements(const jsbind::Any& mode, const jsbind::Any& start, const jsbind::Any& end, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset);
    /// The drawBuffers method.
    /// [`WebGL2RenderingContext.drawBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/drawBuffers)
    jsbind::Undefined drawBuffers(const jsbind::TypedArray<jsbind::Any>& buffers);
    /// The clearBufferfv method.
    /// [`WebGL2RenderingContext.clearBufferfv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferfv)
    jsbind::Undefined clearBufferfv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values);
    /// The clearBufferfv method.
    /// [`WebGL2RenderingContext.clearBufferfv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferfv)
    jsbind::Undefined clearBufferfv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values, long long srcOffset);
    /// The clearBufferiv method.
    /// [`WebGL2RenderingContext.clearBufferiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferiv)
    jsbind::Undefined clearBufferiv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values);
    /// The clearBufferiv method.
    /// [`WebGL2RenderingContext.clearBufferiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferiv)
    jsbind::Undefined clearBufferiv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values, long long srcOffset);
    /// The clearBufferuiv method.
    /// [`WebGL2RenderingContext.clearBufferuiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferuiv)
    jsbind::Undefined clearBufferuiv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values);
    /// The clearBufferuiv method.
    /// [`WebGL2RenderingContext.clearBufferuiv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferuiv)
    jsbind::Undefined clearBufferuiv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values, long long srcOffset);
    /// The clearBufferfi method.
    /// [`WebGL2RenderingContext.clearBufferfi`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clearBufferfi)
    jsbind::Undefined clearBufferfi(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& depth, const jsbind::Any& stencil);
    /// The createQuery method.
    /// [`WebGL2RenderingContext.createQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createQuery)
    WebGLQuery createQuery();
    /// The deleteQuery method.
    /// [`WebGL2RenderingContext.deleteQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteQuery)
    jsbind::Undefined deleteQuery(const WebGLQuery& query);
    /// The isQuery method.
    /// [`WebGL2RenderingContext.isQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isQuery)
    jsbind::Any isQuery(const WebGLQuery& query);
    /// The beginQuery method.
    /// [`WebGL2RenderingContext.beginQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/beginQuery)
    jsbind::Undefined beginQuery(const jsbind::Any& target, const WebGLQuery& query);
    /// The endQuery method.
    /// [`WebGL2RenderingContext.endQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/endQuery)
    jsbind::Undefined endQuery(const jsbind::Any& target);
    /// The getQuery method.
    /// [`WebGL2RenderingContext.getQuery`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getQuery)
    WebGLQuery getQuery(const jsbind::Any& target, const jsbind::Any& pname);
    /// The getQueryParameter method.
    /// [`WebGL2RenderingContext.getQueryParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getQueryParameter)
    jsbind::Any getQueryParameter(const WebGLQuery& query, const jsbind::Any& pname);
    /// The createSampler method.
    /// [`WebGL2RenderingContext.createSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createSampler)
    WebGLSampler createSampler();
    /// The deleteSampler method.
    /// [`WebGL2RenderingContext.deleteSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteSampler)
    jsbind::Undefined deleteSampler(const WebGLSampler& sampler);
    /// The isSampler method.
    /// [`WebGL2RenderingContext.isSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isSampler)
    jsbind::Any isSampler(const WebGLSampler& sampler);
    /// The bindSampler method.
    /// [`WebGL2RenderingContext.bindSampler`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindSampler)
    jsbind::Undefined bindSampler(const jsbind::Any& unit, const WebGLSampler& sampler);
    /// The samplerParameteri method.
    /// [`WebGL2RenderingContext.samplerParameteri`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/samplerParameteri)
    jsbind::Undefined samplerParameteri(const WebGLSampler& sampler, const jsbind::Any& pname, const jsbind::Any& param);
    /// The samplerParameterf method.
    /// [`WebGL2RenderingContext.samplerParameterf`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/samplerParameterf)
    jsbind::Undefined samplerParameterf(const WebGLSampler& sampler, const jsbind::Any& pname, const jsbind::Any& param);
    /// The getSamplerParameter method.
    /// [`WebGL2RenderingContext.getSamplerParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getSamplerParameter)
    jsbind::Any getSamplerParameter(const WebGLSampler& sampler, const jsbind::Any& pname);
    /// The fenceSync method.
    /// [`WebGL2RenderingContext.fenceSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/fenceSync)
    WebGLSync fenceSync(const jsbind::Any& condition, const jsbind::Any& flags);
    /// The isSync method.
    /// [`WebGL2RenderingContext.isSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isSync)
    jsbind::Any isSync(const WebGLSync& sync);
    /// The deleteSync method.
    /// [`WebGL2RenderingContext.deleteSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteSync)
    jsbind::Undefined deleteSync(const WebGLSync& sync);
    /// The clientWaitSync method.
    /// [`WebGL2RenderingContext.clientWaitSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/clientWaitSync)
    jsbind::Any clientWaitSync(const WebGLSync& sync, const jsbind::Any& flags, const jsbind::Any& timeout);
    /// The waitSync method.
    /// [`WebGL2RenderingContext.waitSync`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/waitSync)
    jsbind::Undefined waitSync(const WebGLSync& sync, const jsbind::Any& flags, const jsbind::Any& timeout);
    /// The getSyncParameter method.
    /// [`WebGL2RenderingContext.getSyncParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getSyncParameter)
    jsbind::Any getSyncParameter(const WebGLSync& sync, const jsbind::Any& pname);
    /// The createTransformFeedback method.
    /// [`WebGL2RenderingContext.createTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/createTransformFeedback)
    WebGLTransformFeedback createTransformFeedback();
    /// The deleteTransformFeedback method.
    /// [`WebGL2RenderingContext.deleteTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/deleteTransformFeedback)
    jsbind::Undefined deleteTransformFeedback(const WebGLTransformFeedback& tf);
    /// The isTransformFeedback method.
    /// [`WebGL2RenderingContext.isTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/isTransformFeedback)
    jsbind::Any isTransformFeedback(const WebGLTransformFeedback& tf);
    /// The bindTransformFeedback method.
    /// [`WebGL2RenderingContext.bindTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindTransformFeedback)
    jsbind::Undefined bindTransformFeedback(const jsbind::Any& target, const WebGLTransformFeedback& tf);
    /// The beginTransformFeedback method.
    /// [`WebGL2RenderingContext.beginTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/beginTransformFeedback)
    jsbind::Undefined beginTransformFeedback(const jsbind::Any& primitiveMode);
    /// The endTransformFeedback method.
    /// [`WebGL2RenderingContext.endTransformFeedback`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/endTransformFeedback)
    jsbind::Undefined endTransformFeedback();
    /// The transformFeedbackVaryings method.
    /// [`WebGL2RenderingContext.transformFeedbackVaryings`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/transformFeedbackVaryings)
    jsbind::Undefined transformFeedbackVaryings(const WebGLProgram& program, const jsbind::TypedArray<jsbind::String>& varyings, const jsbind::Any& bufferMode);
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
    jsbind::Undefined bindBufferBase(const jsbind::Any& target, const jsbind::Any& index, const WebGLBuffer& buffer);
    /// The bindBufferRange method.
    /// [`WebGL2RenderingContext.bindBufferRange`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindBufferRange)
    jsbind::Undefined bindBufferRange(const jsbind::Any& target, const jsbind::Any& index, const WebGLBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    /// The getIndexedParameter method.
    /// [`WebGL2RenderingContext.getIndexedParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getIndexedParameter)
    jsbind::Any getIndexedParameter(const jsbind::Any& target, const jsbind::Any& index);
    /// The getUniformIndices method.
    /// [`WebGL2RenderingContext.getUniformIndices`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getUniformIndices)
    jsbind::TypedArray<jsbind::Any> getUniformIndices(const WebGLProgram& program, const jsbind::TypedArray<jsbind::String>& uniformNames);
    /// The getActiveUniforms method.
    /// [`WebGL2RenderingContext.getActiveUniforms`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getActiveUniforms)
    jsbind::Any getActiveUniforms(const WebGLProgram& program, const jsbind::TypedArray<jsbind::Any>& uniformIndices, const jsbind::Any& pname);
    /// The getUniformBlockIndex method.
    /// [`WebGL2RenderingContext.getUniformBlockIndex`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getUniformBlockIndex)
    jsbind::Any getUniformBlockIndex(const WebGLProgram& program, const jsbind::String& uniformBlockName);
    /// The getActiveUniformBlockParameter method.
    /// [`WebGL2RenderingContext.getActiveUniformBlockParameter`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/getActiveUniformBlockParameter)
    jsbind::Any getActiveUniformBlockParameter(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const jsbind::Any& pname);
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
    jsbind::Any isVertexArray(const WebGLVertexArrayObject& vertexArray);
    /// The bindVertexArray method.
    /// [`WebGL2RenderingContext.bindVertexArray`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bindVertexArray)
    jsbind::Undefined bindVertexArray(const WebGLVertexArrayObject& array);
    /// The bufferData method.
    /// [`WebGL2RenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferData)
    jsbind::Undefined bufferData(const jsbind::Any& target, const jsbind::Any& srcData, const jsbind::Any& usage, long long srcOffset);
    /// The bufferData method.
    /// [`WebGL2RenderingContext.bufferData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferData)
    jsbind::Undefined bufferData(const jsbind::Any& target, const jsbind::Any& srcData, const jsbind::Any& usage, long long srcOffset, const jsbind::Any& length);
    /// The bufferSubData method.
    /// [`WebGL2RenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const jsbind::Any& target, const jsbind::Any& dstByteOffset, const jsbind::Any& srcData, long long srcOffset);
    /// The bufferSubData method.
    /// [`WebGL2RenderingContext.bufferSubData`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/bufferSubData)
    jsbind::Undefined bufferSubData(const jsbind::Any& target, const jsbind::Any& dstByteOffset, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& length);
    /// The texImage2D method.
    /// [`WebGL2RenderingContext.texImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texImage2D)
    jsbind::Undefined texImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    /// The texSubImage2D method.
    /// [`WebGL2RenderingContext.texSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/texSubImage2D)
    jsbind::Undefined texSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& srcData);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& srcData, long long srcOffset);
    /// The compressedTexImage2D method.
    /// [`WebGL2RenderingContext.compressedTexImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexImage2D)
    jsbind::Undefined compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& srcData);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& srcData, long long srcOffset);
    /// The compressedTexSubImage2D method.
    /// [`WebGL2RenderingContext.compressedTexSubImage2D`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/compressedTexSubImage2D)
    jsbind::Undefined compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
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
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2fv)
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix2fv method.
    /// [`WebGL2RenderingContext.uniformMatrix2fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix2fv)
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix3fv method.
    /// [`WebGL2RenderingContext.uniformMatrix3fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix3fv)
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The uniformMatrix4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data);
    /// The uniformMatrix4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset);
    /// The uniformMatrix4fv method.
    /// [`WebGL2RenderingContext.uniformMatrix4fv`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/uniformMatrix4fv)
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    /// The readPixels method.
    /// [`WebGL2RenderingContext.readPixels`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL2RenderingContext/readPixels)
    jsbind::Undefined readPixels(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& dstData, long long dstOffset);
};

