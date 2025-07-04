#include <webbind/WebGLSampler.hpp>


WebGLSampler WebGLSampler::take_ownership(Handle h) noexcept {
        return WebGLSampler(h);
    }
WebGLSampler WebGLSampler::clone() const noexcept { return *this; }
WebGLSampler::WebGLSampler(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLSampler::WebGLSampler(const emlite::Val &val) noexcept: WebGLObject(val) {}


