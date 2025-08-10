#include "webbind/GPUObjectDescriptorBase.hpp"

using emlite::Val;
namespace webbind {

GPUObjectDescriptorBase::GPUObjectDescriptorBase(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUObjectDescriptorBase GPUObjectDescriptorBase::take_ownership(Handle h) noexcept {
        return GPUObjectDescriptorBase(h);
    }
GPUObjectDescriptorBase::GPUObjectDescriptorBase(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUObjectDescriptorBase::GPUObjectDescriptorBase() noexcept: emlite::Val(emlite::Val::object()) {}
GPUObjectDescriptorBase GPUObjectDescriptorBase::clone() const noexcept { return *this; }

jsbind::String GPUObjectDescriptorBase::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUObjectDescriptorBase::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind