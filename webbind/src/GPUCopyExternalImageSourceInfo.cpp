#include <webbind/GPUCopyExternalImageSourceInfo.hpp>

using emlite::Val;
namespace webbind {

GPUCopyExternalImageSourceInfo::GPUCopyExternalImageSourceInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo::take_ownership(Handle h) noexcept {
        return GPUCopyExternalImageSourceInfo(h);
    }
GPUCopyExternalImageSourceInfo::GPUCopyExternalImageSourceInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCopyExternalImageSourceInfo::GPUCopyExternalImageSourceInfo() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo::clone() const noexcept { return *this; }

jsbind::Any GPUCopyExternalImageSourceInfo::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void GPUCopyExternalImageSourceInfo::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}

jsbind::Any GPUCopyExternalImageSourceInfo::origin() const {
    return emlite::Val::get("origin").as<jsbind::Any>();
}

void GPUCopyExternalImageSourceInfo::origin(const jsbind::Any& value) {
    emlite::Val::set("origin", value);
}

bool GPUCopyExternalImageSourceInfo::flipY() const {
    return emlite::Val::get("flipY").as<bool>();
}

void GPUCopyExternalImageSourceInfo::flipY(bool value) {
    emlite::Val::set("flipY", value);
}


} // namespace webbind