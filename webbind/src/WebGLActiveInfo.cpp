#include <webbind/WebGLActiveInfo.hpp>

namespace webbind {

WebGLActiveInfo WebGLActiveInfo::take_ownership(Handle h) noexcept {
        return WebGLActiveInfo(h);
    }
WebGLActiveInfo WebGLActiveInfo::clone() const noexcept { return *this; }
emlite::Val WebGLActiveInfo::instance() noexcept { return emlite::Val::global("WebGLActiveInfo"); }
WebGLActiveInfo::WebGLActiveInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLActiveInfo::WebGLActiveInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any WebGLActiveInfo::size() const {
    return emlite::Val::get("size").as<jsbind::Any>();
}

jsbind::Any WebGLActiveInfo::type() const {
    return emlite::Val::get("type").as<jsbind::Any>();
}

jsbind::String WebGLActiveInfo::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}


} // namespace webbind