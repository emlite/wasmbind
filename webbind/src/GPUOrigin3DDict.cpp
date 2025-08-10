#include "webbind/GPUOrigin3DDict.hpp"

using emlite::Val;
namespace webbind {

GPUOrigin3DDict::GPUOrigin3DDict(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUOrigin3DDict GPUOrigin3DDict::take_ownership(Handle h) noexcept {
        return GPUOrigin3DDict(h);
    }
GPUOrigin3DDict::GPUOrigin3DDict(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUOrigin3DDict::GPUOrigin3DDict() noexcept: emlite::Val(emlite::Val::object()) {}
GPUOrigin3DDict GPUOrigin3DDict::clone() const noexcept { return *this; }

jsbind::Any GPUOrigin3DDict::x() const {
    return emlite::Val::get("x").as<jsbind::Any>();
}

void GPUOrigin3DDict::x(const jsbind::Any& value) {
    emlite::Val::set("x", value);
}

jsbind::Any GPUOrigin3DDict::y() const {
    return emlite::Val::get("y").as<jsbind::Any>();
}

void GPUOrigin3DDict::y(const jsbind::Any& value) {
    emlite::Val::set("y", value);
}

jsbind::Any GPUOrigin3DDict::z() const {
    return emlite::Val::get("z").as<jsbind::Any>();
}

void GPUOrigin3DDict::z(const jsbind::Any& value) {
    emlite::Val::set("z", value);
}


} // namespace webbind