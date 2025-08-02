#include <webbind/WebGLRenderingContext.hpp>
#include <webbind/WebGLUniformLocation.hpp>


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

jsbind::Undefined WebGLRenderingContext::bufferData(const jsbind::Any& target, const jsbind::Any& data, const jsbind::Any& usage) {
    return emlite::Val::call("bufferData", target, data, usage).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::bufferSubData(const jsbind::Any& target, const jsbind::Any& offset, const jsbind::Any& data) {
    return emlite::Val::call("bufferSubData", target, offset, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::compressedTexImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& border, const jsbind::Any& data) {
    return emlite::Val::call("compressedTexImage2D", target, level, internalformat, width, height, border, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::compressedTexSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& data) {
    return emlite::Val::call("compressedTexSubImage2D", target, level, xoffset, yoffset, width, height, format, data).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::readPixels(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& pixels) {
    return emlite::Val::call("readPixels", x, y, width, height, format, type, pixels).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::texImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& internalformat, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& source) {
    return emlite::Val::call("texImage2D", target, level, internalformat, format, type, source).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::texSubImage2D(const jsbind::Any& target, const jsbind::Any& level, const jsbind::Any& xoffset, const jsbind::Any& yoffset, const jsbind::Any& format, const jsbind::Any& type, const jsbind::Any& source) {
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

jsbind::Undefined WebGLRenderingContext::uniformMatrix2fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value) {
    return emlite::Val::call("uniformMatrix2fv", location, transpose, value).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniformMatrix3fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value) {
    return emlite::Val::call("uniformMatrix3fv", location, transpose, value).as<jsbind::Undefined>();
}

jsbind::Undefined WebGLRenderingContext::uniformMatrix4fv(const WebGLUniformLocation& location, const jsbind::Any& transpose, const jsbind::Any& value) {
    return emlite::Val::call("uniformMatrix4fv", location, transpose, value).as<jsbind::Undefined>();
}

