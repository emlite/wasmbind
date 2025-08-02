#include <webbind/WebGLBuffer.hpp>


WebGLBuffer WebGLBuffer::take_ownership(Handle h) noexcept {
        return WebGLBuffer(h);
    }
WebGLBuffer WebGLBuffer::clone() const noexcept { return *this; }
emlite::Val WebGLBuffer::instance() noexcept { return emlite::Val::global("WebGLBuffer"); }
WebGLBuffer::WebGLBuffer(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLBuffer::WebGLBuffer(const emlite::Val &val) noexcept: WebGLObject(val) {}


