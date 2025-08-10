#include <webbind/GPUTexelCopyTextureInfo.hpp>
#include <webbind/GPUTexture.hpp>

namespace webbind {

GPUTexelCopyTextureInfo::GPUTexelCopyTextureInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo::take_ownership(Handle h) noexcept {
    return GPUTexelCopyTextureInfo(h);
}

GPUTexelCopyTextureInfo::GPUTexelCopyTextureInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPUTexelCopyTextureInfo::GPUTexelCopyTextureInfo() noexcept: emlite::Val(emlite::Val::object()) {}

GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo::clone() const noexcept { return *this; }

GPUTexture GPUTexelCopyTextureInfo::texture() const {
    return emlite::Val::get("texture").as<GPUTexture>();
}

void GPUTexelCopyTextureInfo::texture(const GPUTexture& value) {
    emlite::Val::set("texture", value);
}

jsbind::Any GPUTexelCopyTextureInfo::mipLevel() const {
    return emlite::Val::get("mipLevel").as<jsbind::Any>();
}

void GPUTexelCopyTextureInfo::mipLevel(const jsbind::Any& value) {
    emlite::Val::set("mipLevel", value);
}

jsbind::Any GPUTexelCopyTextureInfo::origin() const {
    return emlite::Val::get("origin").as<jsbind::Any>();
}

void GPUTexelCopyTextureInfo::origin(const jsbind::Any& value) {
    emlite::Val::set("origin", value);
}

GPUTextureAspect GPUTexelCopyTextureInfo::aspect() const {
    return emlite::Val::get("aspect").as<GPUTextureAspect>();
}

void GPUTexelCopyTextureInfo::aspect(const GPUTextureAspect& value) {
    emlite::Val::set("aspect", value);
}


} // namespace webbind