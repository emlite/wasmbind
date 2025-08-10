#include <webbind/GPUCanvasContext.hpp>
#include <webbind/GPUCanvasConfiguration.hpp>
#include <webbind/GPUTexture.hpp>

namespace webbind {

GPUCanvasContext GPUCanvasContext::take_ownership(Handle h) noexcept {
        return GPUCanvasContext(h);
    }
GPUCanvasContext GPUCanvasContext::clone() const noexcept { return *this; }
emlite::Val GPUCanvasContext::instance() noexcept { return emlite::Val::global("GPUCanvasContext"); }
GPUCanvasContext::GPUCanvasContext(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCanvasContext::GPUCanvasContext(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any GPUCanvasContext::canvas() const {
    return emlite::Val::get("canvas").as<jsbind::Any>();
}

jsbind::Undefined GPUCanvasContext::configure(const GPUCanvasConfiguration& configuration) {
    return emlite::Val::call("configure", configuration).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCanvasContext::unconfigure() {
    return emlite::Val::call("unconfigure").as<jsbind::Undefined>();
}

GPUCanvasConfiguration GPUCanvasContext::getConfiguration() {
    return emlite::Val::call("getConfiguration").as<GPUCanvasConfiguration>();
}

GPUTexture GPUCanvasContext::getCurrentTexture() {
    return emlite::Val::call("getCurrentTexture").as<GPUTexture>();
}


} // namespace webbind