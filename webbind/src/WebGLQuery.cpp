#include <webbind/WebGLQuery.hpp>

namespace webbind {

WebGLQuery WebGLQuery::take_ownership(Handle h) noexcept {
    return WebGLQuery(h);
}

WebGLQuery WebGLQuery::clone() const noexcept { return *this; }

emlite::Val WebGLQuery::instance() noexcept { return emlite::Val::global("WebGLQuery"); }

WebGLQuery::WebGLQuery(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLQuery::WebGLQuery(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind