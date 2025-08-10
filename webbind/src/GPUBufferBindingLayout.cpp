#include <webbind/GPUBufferBindingLayout.hpp>

using emlite::Val;
namespace webbind {

GPUBufferBindingLayout::GPUBufferBindingLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBufferBindingLayout GPUBufferBindingLayout::take_ownership(Handle h) noexcept {
        return GPUBufferBindingLayout(h);
    }
GPUBufferBindingLayout::GPUBufferBindingLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBufferBindingLayout::GPUBufferBindingLayout() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBufferBindingLayout GPUBufferBindingLayout::clone() const noexcept { return *this; }

GPUBufferBindingType GPUBufferBindingLayout::type() const {
    return emlite::Val::get("type").as<GPUBufferBindingType>();
}

void GPUBufferBindingLayout::type(const GPUBufferBindingType& value) {
    emlite::Val::set("type", value);
}

bool GPUBufferBindingLayout::hasDynamicOffset() const {
    return emlite::Val::get("hasDynamicOffset").as<bool>();
}

void GPUBufferBindingLayout::hasDynamicOffset(bool value) {
    emlite::Val::set("hasDynamicOffset", value);
}

jsbind::Any GPUBufferBindingLayout::minBindingSize() const {
    return emlite::Val::get("minBindingSize").as<jsbind::Any>();
}

void GPUBufferBindingLayout::minBindingSize(const jsbind::Any& value) {
    emlite::Val::set("minBindingSize", value);
}


} // namespace webbind