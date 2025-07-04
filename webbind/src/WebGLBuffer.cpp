#include <webbind/WebGLBuffer.hpp>


WebGLBuffer WebGLBuffer::take_ownership(Handle h) noexcept {
        return WebGLBuffer(h);
    }
WebGLBuffer WebGLBuffer::clone() const noexcept { return *this; }
WebGLBuffer::WebGLBuffer(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLBuffer::WebGLBuffer(const emlite::Val &val) noexcept: WebGLObject(val) {}


