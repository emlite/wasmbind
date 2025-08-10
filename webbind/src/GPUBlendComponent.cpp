#include "webbind/GPUBlendComponent.hpp"

using emlite::Val;
namespace webbind {

GPUBlendComponent::GPUBlendComponent(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBlendComponent GPUBlendComponent::take_ownership(Handle h) noexcept {
        return GPUBlendComponent(h);
    }
GPUBlendComponent::GPUBlendComponent(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBlendComponent::GPUBlendComponent() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBlendComponent GPUBlendComponent::clone() const noexcept { return *this; }

GPUBlendOperation GPUBlendComponent::operation() const {
    return emlite::Val::get("operation").as<GPUBlendOperation>();
}

void GPUBlendComponent::operation(const GPUBlendOperation& value) {
    emlite::Val::set("operation", value);
}

GPUBlendFactor GPUBlendComponent::srcFactor() const {
    return emlite::Val::get("srcFactor").as<GPUBlendFactor>();
}

void GPUBlendComponent::srcFactor(const GPUBlendFactor& value) {
    emlite::Val::set("srcFactor", value);
}

GPUBlendFactor GPUBlendComponent::dstFactor() const {
    return emlite::Val::get("dstFactor").as<GPUBlendFactor>();
}

void GPUBlendComponent::dstFactor(const GPUBlendFactor& value) {
    emlite::Val::set("dstFactor", value);
}


} // namespace webbind