#include <webbind/WebGL2RenderingContext.hpp>
#include <webbind/WebGLTexture.hpp>
#include <webbind/WebGLProgram.hpp>
#include <webbind/WebGLUniformLocation.hpp>
#include <webbind/WebGLQuery.hpp>
#include <webbind/WebGLSampler.hpp>
#include <webbind/WebGLSync.hpp>
#include <webbind/WebGLTransformFeedback.hpp>
#include <webbind/WebGLActiveInfo.hpp>
#include <webbind/WebGLBuffer.hpp>
#include <webbind/WebGLVertexArrayObject.hpp>

namespace webbind {

WebGL2RenderingContext WebGL2RenderingContext::take_ownership(Handle h) noexcept {
    return WebGL2RenderingContext(h);
}

WebGL2RenderingContext WebGL2RenderingContext::clone() const noexcept { return *this; }

emlite::Val WebGL2RenderingContext::instance() noexcept { return emlite::Val::global("WebGL2RenderingContext"); }

WebGL2RenderingContext::WebGL2RenderingContext(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WebGL2RenderingContext::WebGL2RenderingContext(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> WebGL2RenderingContext::makeXRCompatible() {
    return emlite::Val::call("makeXRCompatible").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined WebGL2RenderingContext::copyBufferSubData(const uint32_t& readTarget, const uint32_t& writeTarget, const intptr_t& readOffset, const intptr_t& writeOffset, const intptr_t& size) {
    return emlite::Val::call("copyBufferSubData", readTarget, writeTarget, readOffset, writeOffset, size).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::getBufferSubData(const uint32_t& target, const intptr_t& srcByteOffset, const jsbind::ArrayBufferView& dstBuffer) {
    return emlite::Val::call("getBufferSubData", target, srcByteOffset, dstBuffer).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::getBufferSubData(const uint32_t& target, const intptr_t& srcByteOffset, const jsbind::ArrayBufferView& dstBuffer, long long dstOffset) {
    return emlite::Val::call("getBufferSubData", target, srcByteOffset, dstBuffer, dstOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::getBufferSubData(const uint32_t& target, const intptr_t& srcByteOffset, const jsbind::ArrayBufferView& dstBuffer, long long dstOffset, const jsbind::Any& length) {
    return emlite::Val::call("getBufferSubData", target, srcByteOffset, dstBuffer, dstOffset, length).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::blitFramebuffer(int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, const uint32_t& mask, const uint32_t& filter) {
    return emlite::Val::call("blitFramebuffer", srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::framebufferTextureLayer(const uint32_t& target, const uint32_t& attachment, const WebGLTexture& texture, int level, int layer) {
    return emlite::Val::call("framebufferTextureLayer", target, attachment, texture, level, layer).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::invalidateFramebuffer(const uint32_t& target, const jsbind::TypedArray<uint32_t>& attachments) {
    return emlite::Val::call("invalidateFramebuffer", target, attachments).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::invalidateSubFramebuffer(const uint32_t& target, const jsbind::TypedArray<uint32_t>& attachments, int x, int y, int width, int height) {
    return emlite::Val::call("invalidateSubFramebuffer", target, attachments, x, y, width, height).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::readBuffer(const uint32_t& src) {
    return emlite::Val::call("readBuffer", src).as<jsbind::Undefined>();
}

jsbind::Any WebGL2RenderingContext::getInternalformatParameter(const uint32_t& target, const uint32_t& internalformat, const uint32_t& pname) {
    return emlite::Val::call("getInternalformatParameter", target, internalformat, pname).as<jsbind::Any>();
}

jsbind::Undefined WebGL2RenderingContext::renderbufferStorageMultisample(const uint32_t& target, int samples, const uint32_t& internalformat, int width, int height) {
    return emlite::Val::call("renderbufferStorageMultisample", target, samples, internalformat, width, height).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texStorage2D(const uint32_t& target, int levels, const uint32_t& internalformat, int width, int height) {
    return emlite::Val::call("texStorage2D", target, levels, internalformat, width, height).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texStorage3D(const uint32_t& target, int levels, const uint32_t& internalformat, int width, int height, int depth) {
    return emlite::Val::call("texStorage3D", target, levels, internalformat, width, height, depth).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset) {
    return emlite::Val::call("texImage3D", target, level, internalformat, width, height, depth, border, format, type, pboOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texImage3D", target, level, internalformat, width, height, depth, border, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData) {
    return emlite::Val::call("texImage3D", target, level, internalformat, width, height, depth, border, format, type, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage3D(const uint32_t& target, int level, int internalformat, int width, int height, int depth, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("texImage3D", target, level, internalformat, width, height, depth, border, format, type, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset) {
    return emlite::Val::call("texSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pboOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData) {
    return emlite::Val::call("texSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("texSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::copyTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height) {
    return emlite::Val::call("copyTexSubImage3D", target, level, xoffset, yoffset, zoffset, x, y, width, height).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, int imageSize, const intptr_t& offset) {
    return emlite::Val::call("compressedTexImage3D", target, level, internalformat, width, height, depth, border, imageSize, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, const jsbind::ArrayBufferView& srcData) {
    return emlite::Val::call("compressedTexImage3D", target, level, internalformat, width, height, depth, border, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("compressedTexImage3D", target, level, internalformat, width, height, depth, border, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage3D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int depth, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride) {
    return emlite::Val::call("compressedTexImage3D", target, level, internalformat, width, height, depth, border, srcData, srcOffset, srcLengthOverride).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, int imageSize, const intptr_t& offset) {
    return emlite::Val::call("compressedTexSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const jsbind::ArrayBufferView& srcData) {
    return emlite::Val::call("compressedTexSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("compressedTexSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage3D(const uint32_t& target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride) {
    return emlite::Val::call("compressedTexSubImage3D", target, level, xoffset, yoffset, zoffset, width, height, depth, format, srcData, srcOffset, srcLengthOverride).as<jsbind::Undefined>();
}

int WebGL2RenderingContext::getFragDataLocation(const WebGLProgram& program, const jsbind::String& name) {
    return emlite::Val::call("getFragDataLocation", program, name).as<int>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1ui(const WebGLUniformLocation& location, const jsbind::Any& v0) {
    return emlite::Val::call("uniform1ui", location, v0).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1) {
    return emlite::Val::call("uniform2ui", location, v0, v1).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1, const jsbind::Any& v2) {
    return emlite::Val::call("uniform3ui", location, v0, v1, v2).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4ui(const WebGLUniformLocation& location, const jsbind::Any& v0, const jsbind::Any& v1, const jsbind::Any& v2, const jsbind::Any& v3) {
    return emlite::Val::call("uniform4ui", location, v0, v1, v2, v3).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform1uiv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform1uiv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform1uiv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform2uiv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform2uiv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform2uiv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform3uiv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform3uiv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform3uiv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform4uiv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform4uiv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4uiv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform4uiv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix3x2fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix3x2fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix3x2fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix4x2fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix4x2fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4x2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix4x2fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix2x3fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix2x3fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix2x3fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix4x3fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix4x3fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4x3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix4x3fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix2x4fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix2x4fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix2x4fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix3x4fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix3x4fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3x4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix3x4fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::vertexAttribI4i(const jsbind::Any& index, int x, int y, int z, int w) {
    return emlite::Val::call("vertexAttribI4i", index, x, y, z, w).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::vertexAttribI4iv(const jsbind::Any& index, const jsbind::Any& values) {
    return emlite::Val::call("vertexAttribI4iv", index, values).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::vertexAttribI4ui(const jsbind::Any& index, const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const jsbind::Any& w) {
    return emlite::Val::call("vertexAttribI4ui", index, x, y, z, w).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::vertexAttribI4uiv(const jsbind::Any& index, const jsbind::Any& values) {
    return emlite::Val::call("vertexAttribI4uiv", index, values).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::vertexAttribIPointer(const jsbind::Any& index, int size, const uint32_t& type, int stride, const intptr_t& offset) {
    return emlite::Val::call("vertexAttribIPointer", index, size, type, stride, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::vertexAttribDivisor(const jsbind::Any& index, const jsbind::Any& divisor) {
    return emlite::Val::call("vertexAttribDivisor", index, divisor).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::drawArraysInstanced(const uint32_t& mode, int first, int count, int instanceCount) {
    return emlite::Val::call("drawArraysInstanced", mode, first, count, instanceCount).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::drawElementsInstanced(const uint32_t& mode, int count, const uint32_t& type, const intptr_t& offset, int instanceCount) {
    return emlite::Val::call("drawElementsInstanced", mode, count, type, offset, instanceCount).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::drawRangeElements(const uint32_t& mode, const jsbind::Any& start, const jsbind::Any& end, int count, const uint32_t& type, const intptr_t& offset) {
    return emlite::Val::call("drawRangeElements", mode, start, end, count, type, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::drawBuffers(const jsbind::TypedArray<uint32_t>& buffers) {
    return emlite::Val::call("drawBuffers", buffers).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferfv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values) {
    return emlite::Val::call("clearBufferfv", buffer, drawbuffer, values).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferfv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values, long long srcOffset) {
    return emlite::Val::call("clearBufferfv", buffer, drawbuffer, values, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values) {
    return emlite::Val::call("clearBufferiv", buffer, drawbuffer, values).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values, long long srcOffset) {
    return emlite::Val::call("clearBufferiv", buffer, drawbuffer, values, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferuiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values) {
    return emlite::Val::call("clearBufferuiv", buffer, drawbuffer, values).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferuiv(const uint32_t& buffer, int drawbuffer, const jsbind::Any& values, long long srcOffset) {
    return emlite::Val::call("clearBufferuiv", buffer, drawbuffer, values, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::clearBufferfi(const uint32_t& buffer, int drawbuffer, float depth, int stencil) {
    return emlite::Val::call("clearBufferfi", buffer, drawbuffer, depth, stencil).as<jsbind::Undefined>();
}

WebGLQuery WebGL2RenderingContext::createQuery() {
    return emlite::Val::call("createQuery").as<WebGLQuery>();
}

jsbind::Undefined WebGL2RenderingContext::deleteQuery(const WebGLQuery& query) {
    return emlite::Val::call("deleteQuery", query).as<jsbind::Undefined>();
}

bool WebGL2RenderingContext::isQuery(const WebGLQuery& query) {
    return emlite::Val::call("isQuery", query).as<bool>();
}

jsbind::Undefined WebGL2RenderingContext::beginQuery(const uint32_t& target, const WebGLQuery& query) {
    return emlite::Val::call("beginQuery", target, query).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::endQuery(const uint32_t& target) {
    return emlite::Val::call("endQuery", target).as<jsbind::Undefined>();
}

WebGLQuery WebGL2RenderingContext::getQuery(const uint32_t& target, const uint32_t& pname) {
    return emlite::Val::call("getQuery", target, pname).as<WebGLQuery>();
}

jsbind::Any WebGL2RenderingContext::getQueryParameter(const WebGLQuery& query, const uint32_t& pname) {
    return emlite::Val::call("getQueryParameter", query, pname).as<jsbind::Any>();
}

WebGLSampler WebGL2RenderingContext::createSampler() {
    return emlite::Val::call("createSampler").as<WebGLSampler>();
}

jsbind::Undefined WebGL2RenderingContext::deleteSampler(const WebGLSampler& sampler) {
    return emlite::Val::call("deleteSampler", sampler).as<jsbind::Undefined>();
}

bool WebGL2RenderingContext::isSampler(const WebGLSampler& sampler) {
    return emlite::Val::call("isSampler", sampler).as<bool>();
}

jsbind::Undefined WebGL2RenderingContext::bindSampler(const jsbind::Any& unit, const WebGLSampler& sampler) {
    return emlite::Val::call("bindSampler", unit, sampler).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::samplerParameteri(const WebGLSampler& sampler, const uint32_t& pname, int param) {
    return emlite::Val::call("samplerParameteri", sampler, pname, param).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::samplerParameterf(const WebGLSampler& sampler, const uint32_t& pname, float param) {
    return emlite::Val::call("samplerParameterf", sampler, pname, param).as<jsbind::Undefined>();
}

jsbind::Any WebGL2RenderingContext::getSamplerParameter(const WebGLSampler& sampler, const uint32_t& pname) {
    return emlite::Val::call("getSamplerParameter", sampler, pname).as<jsbind::Any>();
}

WebGLSync WebGL2RenderingContext::fenceSync(const uint32_t& condition, const uint32_t& flags) {
    return emlite::Val::call("fenceSync", condition, flags).as<WebGLSync>();
}

bool WebGL2RenderingContext::isSync(const WebGLSync& sync) {
    return emlite::Val::call("isSync", sync).as<bool>();
}

jsbind::Undefined WebGL2RenderingContext::deleteSync(const WebGLSync& sync) {
    return emlite::Val::call("deleteSync", sync).as<jsbind::Undefined>();
}

uint32_t WebGL2RenderingContext::clientWaitSync(const WebGLSync& sync, const uint32_t& flags, const jsbind::Any& timeout) {
    return emlite::Val::call("clientWaitSync", sync, flags, timeout).as<uint32_t>();
}

jsbind::Undefined WebGL2RenderingContext::waitSync(const WebGLSync& sync, const uint32_t& flags, const jsbind::Any& timeout) {
    return emlite::Val::call("waitSync", sync, flags, timeout).as<jsbind::Undefined>();
}

jsbind::Any WebGL2RenderingContext::getSyncParameter(const WebGLSync& sync, const uint32_t& pname) {
    return emlite::Val::call("getSyncParameter", sync, pname).as<jsbind::Any>();
}

WebGLTransformFeedback WebGL2RenderingContext::createTransformFeedback() {
    return emlite::Val::call("createTransformFeedback").as<WebGLTransformFeedback>();
}

jsbind::Undefined WebGL2RenderingContext::deleteTransformFeedback(const WebGLTransformFeedback& tf) {
    return emlite::Val::call("deleteTransformFeedback", tf).as<jsbind::Undefined>();
}

bool WebGL2RenderingContext::isTransformFeedback(const WebGLTransformFeedback& tf) {
    return emlite::Val::call("isTransformFeedback", tf).as<bool>();
}

jsbind::Undefined WebGL2RenderingContext::bindTransformFeedback(const uint32_t& target, const WebGLTransformFeedback& tf) {
    return emlite::Val::call("bindTransformFeedback", target, tf).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::beginTransformFeedback(const uint32_t& primitiveMode) {
    return emlite::Val::call("beginTransformFeedback", primitiveMode).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::endTransformFeedback() {
    return emlite::Val::call("endTransformFeedback").as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::transformFeedbackVaryings(const WebGLProgram& program, const jsbind::TypedArray<jsbind::String>& varyings, const uint32_t& bufferMode) {
    return emlite::Val::call("transformFeedbackVaryings", program, varyings, bufferMode).as<jsbind::Undefined>();
}

WebGLActiveInfo WebGL2RenderingContext::getTransformFeedbackVarying(const WebGLProgram& program, const jsbind::Any& index) {
    return emlite::Val::call("getTransformFeedbackVarying", program, index).as<WebGLActiveInfo>();
}

jsbind::Undefined WebGL2RenderingContext::pauseTransformFeedback() {
    return emlite::Val::call("pauseTransformFeedback").as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::resumeTransformFeedback() {
    return emlite::Val::call("resumeTransformFeedback").as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bindBufferBase(const uint32_t& target, const jsbind::Any& index, const WebGLBuffer& buffer) {
    return emlite::Val::call("bindBufferBase", target, index, buffer).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bindBufferRange(const uint32_t& target, const jsbind::Any& index, const WebGLBuffer& buffer, const intptr_t& offset, const intptr_t& size) {
    return emlite::Val::call("bindBufferRange", target, index, buffer, offset, size).as<jsbind::Undefined>();
}

jsbind::Any WebGL2RenderingContext::getIndexedParameter(const uint32_t& target, const jsbind::Any& index) {
    return emlite::Val::call("getIndexedParameter", target, index).as<jsbind::Any>();
}

jsbind::TypedArray<jsbind::Any> WebGL2RenderingContext::getUniformIndices(const WebGLProgram& program, const jsbind::TypedArray<jsbind::String>& uniformNames) {
    return emlite::Val::call("getUniformIndices", program, uniformNames).as<jsbind::TypedArray<jsbind::Any>>();
}

jsbind::Any WebGL2RenderingContext::getActiveUniforms(const WebGLProgram& program, const jsbind::TypedArray<jsbind::Any>& uniformIndices, const uint32_t& pname) {
    return emlite::Val::call("getActiveUniforms", program, uniformIndices, pname).as<jsbind::Any>();
}

jsbind::Any WebGL2RenderingContext::getUniformBlockIndex(const WebGLProgram& program, const jsbind::String& uniformBlockName) {
    return emlite::Val::call("getUniformBlockIndex", program, uniformBlockName).as<jsbind::Any>();
}

jsbind::Any WebGL2RenderingContext::getActiveUniformBlockParameter(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const uint32_t& pname) {
    return emlite::Val::call("getActiveUniformBlockParameter", program, uniformBlockIndex, pname).as<jsbind::Any>();
}

jsbind::String WebGL2RenderingContext::getActiveUniformBlockName(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex) {
    return emlite::Val::call("getActiveUniformBlockName", program, uniformBlockIndex).as<jsbind::String>();
}

jsbind::Undefined WebGL2RenderingContext::uniformBlockBinding(const WebGLProgram& program, const jsbind::Any& uniformBlockIndex, const jsbind::Any& uniformBlockBinding) {
    return emlite::Val::call("uniformBlockBinding", program, uniformBlockIndex, uniformBlockBinding).as<jsbind::Undefined>();
}

WebGLVertexArrayObject WebGL2RenderingContext::createVertexArray() {
    return emlite::Val::call("createVertexArray").as<WebGLVertexArrayObject>();
}

jsbind::Undefined WebGL2RenderingContext::deleteVertexArray(const WebGLVertexArrayObject& vertexArray) {
    return emlite::Val::call("deleteVertexArray", vertexArray).as<jsbind::Undefined>();
}

bool WebGL2RenderingContext::isVertexArray(const WebGLVertexArrayObject& vertexArray) {
    return emlite::Val::call("isVertexArray", vertexArray).as<bool>();
}

jsbind::Undefined WebGL2RenderingContext::bindVertexArray(const WebGLVertexArrayObject& array) {
    return emlite::Val::call("bindVertexArray", array).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferData(const uint32_t& target, const intptr_t& size, const uint32_t& usage) {
    return emlite::Val::call("bufferData", target, size, usage).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferData(const uint32_t& target, const jsbind::Any& srcData, const uint32_t& usage) {
    return emlite::Val::call("bufferData", target, srcData, usage).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferSubData(const uint32_t& target, const intptr_t& dstByteOffset, const jsbind::Any& srcData) {
    return emlite::Val::call("bufferSubData", target, dstByteOffset, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferData(const uint32_t& target, const jsbind::ArrayBufferView& srcData, const uint32_t& usage, long long srcOffset) {
    return emlite::Val::call("bufferData", target, srcData, usage, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferData(const uint32_t& target, const jsbind::ArrayBufferView& srcData, const uint32_t& usage, long long srcOffset, const jsbind::Any& length) {
    return emlite::Val::call("bufferData", target, srcData, usage, srcOffset, length).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferSubData(const uint32_t& target, const intptr_t& dstByteOffset, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("bufferSubData", target, dstByteOffset, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::bufferSubData(const uint32_t& target, const intptr_t& dstByteOffset, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& length) {
    return emlite::Val::call("bufferSubData", target, dstByteOffset, srcData, srcOffset, length).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels) {
    return emlite::Val::call("texImage2D", target, level, internalformat, width, height, border, format, type, pixels).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texImage2D", target, level, internalformat, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, width, height, format, type, pixels).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset) {
    return emlite::Val::call("texImage2D", target, level, internalformat, width, height, border, format, type, pboOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texImage2D", target, level, internalformat, width, height, border, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("texImage2D", target, level, internalformat, width, height, border, format, type, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const intptr_t& pboOffset) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, width, height, format, type, pboOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, width, height, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, width, height, format, type, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, int imageSize, const intptr_t& offset) {
    return emlite::Val::call("compressedTexImage2D", target, level, internalformat, width, height, border, imageSize, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& srcData) {
    return emlite::Val::call("compressedTexImage2D", target, level, internalformat, width, height, border, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("compressedTexImage2D", target, level, internalformat, width, height, border, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride) {
    return emlite::Val::call("compressedTexImage2D", target, level, internalformat, width, height, border, srcData, srcOffset, srcLengthOverride).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, int imageSize, const intptr_t& offset) {
    return emlite::Val::call("compressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, imageSize, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& srcData) {
    return emlite::Val::call("compressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, srcData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset) {
    return emlite::Val::call("compressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, srcData, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& srcData, long long srcOffset, const jsbind::Any& srcLengthOverride) {
    return emlite::Val::call("compressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, srcData, srcOffset, srcLengthOverride).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform1fv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform1fv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform1fv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform2fv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform2fv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform2fv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform3fv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform3fv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform3fv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform4fv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform4fv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform4fv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform1iv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform1iv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform1iv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform2iv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform2iv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform2iv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform3iv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform3iv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform3iv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data) {
    return emlite::Val::call("uniform4iv", location, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniform4iv", location, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniform4iv", location, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix2fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix2fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix2fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix3fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix3fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix3fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data) {
    return emlite::Val::call("uniformMatrix4fv", location, transpose, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset) {
    return emlite::Val::call("uniformMatrix4fv", location, transpose, data, srcOffset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& data, long long srcOffset, const jsbind::Any& srcLength) {
    return emlite::Val::call("uniformMatrix4fv", location, transpose, data, srcOffset, srcLength).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& dstData) {
    return emlite::Val::call("readPixels", x, y, width, height, format, type, dstData).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const intptr_t& offset) {
    return emlite::Val::call("readPixels", x, y, width, height, format, type, offset).as<jsbind::Undefined>();
}

jsbind::Undefined WebGL2RenderingContext::readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& dstData, long long dstOffset) {
    return emlite::Val::call("readPixels", x, y, width, height, format, type, dstData, dstOffset).as<jsbind::Undefined>();
}


} // namespace webbind