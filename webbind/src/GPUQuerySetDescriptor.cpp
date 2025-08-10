#include <webbind/GPUQuerySetDescriptor.hpp>

using emlite::Val;
namespace webbind {

GPUQuerySetDescriptor::GPUQuerySetDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUQuerySetDescriptor GPUQuerySetDescriptor::take_ownership(Handle h) noexcept {
        return GPUQuerySetDescriptor(h);
    }
GPUQuerySetDescriptor::GPUQuerySetDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUQuerySetDescriptor::GPUQuerySetDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUQuerySetDescriptor GPUQuerySetDescriptor::clone() const noexcept { return *this; }

GPUQueryType GPUQuerySetDescriptor::type() const {
    return emlite::Val::get("type").as<GPUQueryType>();
}

void GPUQuerySetDescriptor::type(const GPUQueryType& value) {
    emlite::Val::set("type", value);
}

jsbind::Any GPUQuerySetDescriptor::count() const {
    return emlite::Val::get("count").as<jsbind::Any>();
}

void GPUQuerySetDescriptor::count(const jsbind::Any& value) {
    emlite::Val::set("count", value);
}


} // namespace webbind