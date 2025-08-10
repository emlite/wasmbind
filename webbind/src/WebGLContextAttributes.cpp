#include "webbind/WebGLContextAttributes.hpp"

using emlite::Val;
namespace webbind {

WebGLContextAttributes::WebGLContextAttributes(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLContextAttributes WebGLContextAttributes::take_ownership(Handle h) noexcept {
        return WebGLContextAttributes(h);
    }
WebGLContextAttributes::WebGLContextAttributes(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebGLContextAttributes::WebGLContextAttributes() noexcept: emlite::Val(emlite::Val::object()) {}
WebGLContextAttributes WebGLContextAttributes::clone() const noexcept { return *this; }

bool WebGLContextAttributes::xrCompatible() const {
    return emlite::Val::get("xrCompatible").as<bool>();
}

void WebGLContextAttributes::xrCompatible(bool value) {
    emlite::Val::set("xrCompatible", value);
}


} // namespace webbind