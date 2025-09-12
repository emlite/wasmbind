#include <webbind/WebGLRenderingContext.hpp>
#include <webbind/WebGLUniformLocation.hpp>

namespace webbind {

WebGLRenderingContext WebGLRenderingContext::take_ownership(Handle h) noexcept {
    return WebGLRenderingContext(h);
}

WebGLRenderingContext WebGLRenderingContext::clone() const noexcept { return *this; }

emlite::Val WebGLRenderingContext::instance() noexcept { return emlite::Val::global("WebGLRenderingContext"); }

WebGLRenderingContext::WebGLRenderingContext(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WebGLRenderingContext::WebGLRenderingContext(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> WebGLRenderingContext::makeXRCompatible() {
    return emlite::Val::call("makeXRCompatible").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined WebGLRenderingContext::bufferData(const uint32_t& target, const intptr_t& size, const uint32_t& usage) {
    return emlite::Val::call("bufferData", target, size, usage).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::bufferData(const uint32_t& target, const jsbind::Any& data, const uint32_t& usage) {
    return emlite::Val::call("bufferData", target, data, usage).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::bufferSubData(const uint32_t& target, const intptr_t& offset, const jsbind::Any& data) {
    return emlite::Val::call("bufferSubData", target, offset, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::compressedTexImage2D(const uint32_t& target, int level, const uint32_t& internalformat, int width, int height, int border, const jsbind::ArrayBufferView& data) {
    return emlite::Val::call("compressedTexImage2D", target, level, internalformat, width, height, border, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::compressedTexSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const jsbind::ArrayBufferView& data) {
    return emlite::Val::call("compressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::readPixels(int x, int y, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels) {
    return emlite::Val::call("readPixels", x, y, width, height, format, type, pixels).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, int width, int height, int border, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels) {
    return emlite::Val::call("texImage2D", target, level, internalformat, width, height, border, format, type, pixels).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::texImage2D(const uint32_t& target, int level, int internalformat, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texImage2D", target, level, internalformat, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, int width, int height, const uint32_t& format, const uint32_t& type, const jsbind::ArrayBufferView& pixels) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, width, height, format, type, pixels).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::texSubImage2D(const uint32_t& target, int level, int xoffset, int yoffset, const uint32_t& format, const uint32_t& type, const jsbind::Any& source) {
    return emlite::Val::call("texSubImage2D", target, level, xoffset, yoffset, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform1fv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform1fv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform2fv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform2fv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform3fv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform3fv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform4fv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform4fv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform1iv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform1iv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform2iv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform2iv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform3iv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform3iv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniform4iv(const WebGLUniformLocation& location, const jsbind::Any& v) {
    return emlite::Val::call("uniform4iv", location, v).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniformMatrix2fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& value) {
    return emlite::Val::call("uniformMatrix2fv", location, transpose, value).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniformMatrix3fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& value) {
    return emlite::Val::call("uniformMatrix3fv", location, transpose, value).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniformMatrix4fv(const WebGLUniformLocation& location, bool transpose, const jsbind::Any& value) {
    return emlite::Val::call("uniformMatrix4fv", location, transpose, value).as<jsbind::Undefined>();
}


} // namespace webbind