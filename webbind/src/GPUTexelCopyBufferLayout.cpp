#include <webbind/GPUTexelCopyBufferLayout.hpp>

using emlite::Val;
namespace webbind {

GPUTexelCopyBufferLayout::GPUTexelCopyBufferLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout::take_ownership(Handle h) noexcept {
        return GPUTexelCopyBufferLayout(h);
    }
GPUTexelCopyBufferLayout::GPUTexelCopyBufferLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTexelCopyBufferLayout::GPUTexelCopyBufferLayout() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout::clone() const noexcept { return *this; }

jsbind::Any GPUTexelCopyBufferLayout::offset() const {
    return emlite::Val::get("offset").as<jsbind::Any>();
}

void GPUTexelCopyBufferLayout::offset(const jsbind::Any& value) {
    emlite::Val::set("offset", value);
}

jsbind::Any GPUTexelCopyBufferLayout::bytesPerRow() const {
    return emlite::Val::get("bytesPerRow").as<jsbind::Any>();
}

void GPUTexelCopyBufferLayout::bytesPerRow(const jsbind::Any& value) {
    emlite::Val::set("bytesPerRow", value);
}

jsbind::Any GPUTexelCopyBufferLayout::rowsPerImage() const {
    return emlite::Val::get("rowsPerImage").as<jsbind::Any>();
}

void GPUTexelCopyBufferLayout::rowsPerImage(const jsbind::Any& value) {
    emlite::Val::set("rowsPerImage", value);
}


} // namespace webbind