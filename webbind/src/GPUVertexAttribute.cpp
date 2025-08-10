#include "webbind/GPUVertexAttribute.hpp"

using emlite::Val;
namespace webbind {

GPUVertexAttribute::GPUVertexAttribute(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUVertexAttribute GPUVertexAttribute::take_ownership(Handle h) noexcept {
        return GPUVertexAttribute(h);
    }
GPUVertexAttribute::GPUVertexAttribute(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUVertexAttribute::GPUVertexAttribute() noexcept: emlite::Val(emlite::Val::object()) {}
GPUVertexAttribute GPUVertexAttribute::clone() const noexcept { return *this; }

GPUVertexFormat GPUVertexAttribute::format() const {
    return emlite::Val::get("format").as<GPUVertexFormat>();
}

void GPUVertexAttribute::format(const GPUVertexFormat& value) {
    emlite::Val::set("format", value);
}

jsbind::Any GPUVertexAttribute::offset() const {
    return emlite::Val::get("offset").as<jsbind::Any>();
}

void GPUVertexAttribute::offset(const jsbind::Any& value) {
    emlite::Val::set("offset", value);
}

jsbind::Any GPUVertexAttribute::shaderLocation() const {
    return emlite::Val::get("shaderLocation").as<jsbind::Any>();
}

void GPUVertexAttribute::shaderLocation(const jsbind::Any& value) {
    emlite::Val::set("shaderLocation", value);
}


} // namespace webbind