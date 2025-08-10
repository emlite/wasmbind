#include "webbind/GPUExtent3DDict.hpp"

using emlite::Val;
namespace webbind {

GPUExtent3DDict::GPUExtent3DDict(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUExtent3DDict GPUExtent3DDict::take_ownership(Handle h) noexcept {
        return GPUExtent3DDict(h);
    }
GPUExtent3DDict::GPUExtent3DDict(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUExtent3DDict::GPUExtent3DDict() noexcept: emlite::Val(emlite::Val::object()) {}
GPUExtent3DDict GPUExtent3DDict::clone() const noexcept { return *this; }

jsbind::Any GPUExtent3DDict::width() const {
    return emlite::Val::get("width").as<jsbind::Any>();
}

void GPUExtent3DDict::width(const jsbind::Any& value) {
    emlite::Val::set("width", value);
}

jsbind::Any GPUExtent3DDict::height() const {
    return emlite::Val::get("height").as<jsbind::Any>();
}

void GPUExtent3DDict::height(const jsbind::Any& value) {
    emlite::Val::set("height", value);
}

jsbind::Any GPUExtent3DDict::depthOrArrayLayers() const {
    return emlite::Val::get("depthOrArrayLayers").as<jsbind::Any>();
}

void GPUExtent3DDict::depthOrArrayLayers(const jsbind::Any& value) {
    emlite::Val::set("depthOrArrayLayers", value);
}


} // namespace webbind