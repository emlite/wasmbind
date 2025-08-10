#include "webbind/GPUOrigin2DDict.hpp"

using emlite::Val;
namespace webbind {

GPUOrigin2DDict::GPUOrigin2DDict(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUOrigin2DDict GPUOrigin2DDict::take_ownership(Handle h) noexcept {
        return GPUOrigin2DDict(h);
    }
GPUOrigin2DDict::GPUOrigin2DDict(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUOrigin2DDict::GPUOrigin2DDict() noexcept: emlite::Val(emlite::Val::object()) {}
GPUOrigin2DDict GPUOrigin2DDict::clone() const noexcept { return *this; }

jsbind::Any GPUOrigin2DDict::x() const {
    return emlite::Val::get("x").as<jsbind::Any>();
}

void GPUOrigin2DDict::x(const jsbind::Any& value) {
    emlite::Val::set("x", value);
}

jsbind::Any GPUOrigin2DDict::y() const {
    return emlite::Val::get("y").as<jsbind::Any>();
}

void GPUOrigin2DDict::y(const jsbind::Any& value) {
    emlite::Val::set("y", value);
}


} // namespace webbind