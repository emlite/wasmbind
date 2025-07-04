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


class WebGL2RenderingContext : public emlite::Val {
    explicit WebGL2RenderingContext(Handle h) noexcept;

public:
    explicit WebGL2RenderingContext(const emlite::Val &val) noexcept;
    static WebGL2RenderingContext take_ownership(Handle h) noexcept;

    WebGL2RenderingContext clone() const noexcept;
    jsbind::Promise makeXRCompatible();
    jsbind::Undefined copyBufferSubData(const jsbind::Any& readTarget, const jsbind::Any& writeTarget, const jsbind::Any& readOffset, const jsbind::Any& writeOffset, const jsbind::Any& size);
    jsbind::Undefined getBufferSubData(const jsbind::Any& target, const jsbind::Any& srcByteOffset, const jsbind::Any& dstBuffer, long long dstOffset, const jsbind::Any& length);
    jsbind::Undefined blitFramebuffer(const jsbind::Any& srcX0, const jsbind::Any& srcY0, const jsbind::Any& srcX1, const jsbind::Any& srcY1, const jsbind::Any& dstX0, const jsbind::Any& dstY0, const jsbind::Any& dstX1, const jsbind::Any& dstY1, const jsbind::Any& mask, const jsbind::Any& filter);
    jsbind::Undefined framebufferTextureLayer(const jsbind::Any& target, const jsbind::Any& attachment, const WebGLTexture& texture, const jsbind::Any& level, const jsbind::Any& layer);
    jsbind::Undefined invalidateFramebuffer(const jsbind::Any& target, const jsbind::Sequence<jsbind::Any>& attachments);
    jsbind::Undefined invalidateSubFramebuffer(const jsbind::Any& target, const jsbind::Sequence<jsbind::Any>& attachments, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height);
    jsbind::Undefined readBuffer(const jsbind::Any& src);
    jsbind::Any getInternalformatParameter(const jsbind::Any& target, const jsbind::Any& internalformat, const jsbind::Any& pname);
    jsbind::Undefined renderbufferStorageMultisample(const jsbind::Any& target, const jsbind::Any& samples, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height);
    jsbind::Undefined texStorage2D(const jsbind::Any& target, const jsbind::Any& levels, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height);
    jsbind::Undefined texStorage3D(const jsbind::Any& target, const jsbind::Any& levels, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth);
    jsbind::Undefined texImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& border, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    jsbind::Undefined texSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    jsbind::Undefined copyTexSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height);
    jsbind::Undefined compressedTexImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& border, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    jsbind::Undefined compressedTexSubImage3D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& zoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& depth, const jsbind::Any& format, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    jsbind::Any getFragDataLocation(const WebGLProgram& program, const jsbind::DOMString& name);
    jsbind::Undefined uniform1ui(const WebGLUniformLocation& location, const jsbind::Any& v0);
    jsbind::Undefined uniform2ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1);
    jsbind::Undefined uniform3ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1, const jsbind::Any& v2);
    jsbind::Undefined uniform4ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1, const jsbind::Any& v2, const jsbind::Any& v3);
    jsbind::Undefined uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix3x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix4x2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix2x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix4x3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix2x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix3x4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined vertexAttribI4i(const jsbind::Any& index, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const jsbind::Any& w);
    jsbind::Undefined vertexAttribI4iv(const jsbind::Any& index, const jsbind::Any& values);
    jsbind::Undefined vertexAttribI4ui(const jsbind::Any& index, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const jsbind::Any& w);
    jsbind::Undefined vertexAttribI4uiv(const jsbind::Any& index, const jsbind::Any& values);
    jsbind::Undefined vertexAttribIPointer(const jsbind::Any& index, const jsbind::Any& size, const jsbind::Any& type, const jsbind::Any& stride, const jsbind::Any& offset);
    jsbind::Undefined vertexAttribDivisor(const jsbind::Any& index, const jsbind::Any& divisor);
    jsbind::Undefined drawArraysInstanced(const jsbind::Any& mode, const jsbind::Any& first, const jsbind::Any& count, const jsbind::Any& instanceCount);
    jsbind::Undefined drawElementsInstanced(const jsbind::Any& mode, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset, const jsbind::Any& instanceCount);
    jsbind::Undefined drawRangeElements(const jsbind::Any& mode, const jsbind::Any& start, const jsbind::Any& end, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset);
    jsbind::Undefined drawBuffers(const jsbind::Sequence<jsbind::Any>& buffers);
    jsbind::Undefined clearBufferfv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values, long long srcOffset);
    jsbind::Undefined clearBufferiv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values, long long srcOffset);
    jsbind::Undefined clearBufferuiv(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& values, long long srcOffset);
    jsbind::Undefined clearBufferfi(const jsbind::Any& buffer, const jsbind::Any& drawbuffer, const jsbind::Any& depth, const jsbind::Any& stencil);
    WebGLQuery createQuery();
    jsbind::Undefined deleteQuery(const WebGLQuery& query);
    jsbind::Any isQuery(const WebGLQuery& query);
    jsbind::Undefined beginQuery(const jsbind::Any& target, const WebGLQuery& query);
    jsbind::Undefined endQuery(const jsbind::Any& target);
    WebGLQuery getQuery(const jsbind::Any& target, const jsbind::Any& pname);
    jsbind::Any getQueryParameter(const WebGLQuery& query, const jsbind::Any& pname);
    WebGLSampler createSampler();
    jsbind::Undefined deleteSampler(const WebGLSampler& sampler);
    jsbind::Any isSampler(const WebGLSampler& sampler);
    jsbind::Undefined bindSampler(const jsbind::Any& unit, const WebGLSampler& sampler);
    jsbind::Undefined samplerParameteri(const WebGLSampler& sampler, const jsbind::Any& pname, const jsbind::Any& param);
    jsbind::Undefined samplerParameterf(const WebGLSampler& sampler, const jsbind::Any& pname, const jsbind::Any& param);
    jsbind::Any getSamplerParameter(const WebGLSampler& sampler, const jsbind::Any& pname);
    WebGLSync fenceSync(const jsbind::Any& condition, const jsbind::Any& flags);
    jsbind::Any isSync(const WebGLSync& sync);
    jsbind::Undefined deleteSync(const WebGLSync& sync);
    jsbind::Any clientWaitSync(const WebGLSync& sync, const jsbind::Any& flags, const jsbind::Any& timeout);
    jsbind::Undefined waitSync(const WebGLSync& sync, const jsbind::Any& flags, const jsbind::Any& timeout);
    jsbind::Any getSyncParameter(const WebGLSync& sync, const jsbind::Any& pname);
    WebGLTransformFeedback createTransformFeedback();
    jsbind::Undefined deleteTransformFeedback(const WebGLTransformFeedback& tf);
    jsbind::Any isTransformFeedback(const WebGLTransformFeedback& tf);
    jsbind::Undefined bindTransformFeedback(const jsbind::Any& target, const WebGLTransformFeedback& tf);
    jsbind::Undefined beginTransformFeedback(const jsbind::Any& primitiveMode);
    jsbind::Undefined endTransformFeedback();
    jsbind::Undefined transformFeedbackVaryings(const WebGLProgram& program, const jsbind::Sequence<jsbind::DOMString>& varyings, const jsbind::Any& bufferMode);
    WebGLActiveInfo getTransformFeedbackVarying(const WebGLProgram& program, const jsbind::Any& index);
    jsbind::Undefined pauseTransformFeedback();
    jsbind::Undefined resumeTransformFeedback();
    jsbind::Undefined bindBufferBase(const jsbind::Any& target, const jsbind::Any& index, const WebGLBuffer& buffer);
    jsbind::Undefined bindBufferRange(const jsbind::Any& target, const jsbind::Any& index, const WebGLBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    jsbind::Any getIndexedParameter(const jsbind::Any& target, const jsbind::Any& index);
    jsbind::Sequence<jsbind::Any> getUniformIndices(const WebGLProgram& program, const jsbind::Sequence<jsbind::DOMString>& uniformNames);
    jsbind::Any getActiveUniforms(const WebGLProgram& program, const jsbind::Sequence<jsbind::Any>& uniformIndices, const jsbind::Any& pname);
    jsbind::Any getUniformBlockIndex(const WebGLProgram& program, const jsbind::DOMString& uniformBlockName);
    jsbind::Any getActiveUniformBlockParameter(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const jsbind::Any& pname);
    jsbind::DOMString getActiveUniformBlockName(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex);
    jsbind::Undefined uniformBlockBinding(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const jsbind::Any& uniformBlockBinding);
    WebGLVertexArrayObject createVertexArray();
    jsbind::Undefined deleteVertexArray(const WebGLVertexArrayObject& vertexArray);
    jsbind::Any isVertexArray(const WebGLVertexArrayObject& vertexArray);
    jsbind::Undefined bindVertexArray(const WebGLVertexArrayObject& array);
    jsbind::Undefined bufferData(const jsbind::Any& target, const jsbind::Any& srcData, const jsbind::Any& usage, long long srcOffset, const jsbind::Any& length);
    jsbind::Undefined bufferSubData(const jsbind::Any& target, const jsbind::Any& dstByteOffset, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& length);
    jsbind::Undefined texImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    jsbind::Undefined texSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& srcData, long long srcOffset);
    jsbind::Undefined compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    jsbind::Undefined compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride);
    jsbind::Undefined uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength);
    jsbind::Undefined readPixels(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& dstData, long long dstOffset);
};

