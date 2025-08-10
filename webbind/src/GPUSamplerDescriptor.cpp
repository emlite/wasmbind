#include <webbind/GPUSamplerDescriptor.hpp>

using emlite::Val;
namespace webbind {

GPUSamplerDescriptor::GPUSamplerDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUSamplerDescriptor GPUSamplerDescriptor::take_ownership(Handle h) noexcept {
        return GPUSamplerDescriptor(h);
    }
GPUSamplerDescriptor::GPUSamplerDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUSamplerDescriptor::GPUSamplerDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUSamplerDescriptor GPUSamplerDescriptor::clone() const noexcept { return *this; }

GPUAddressMode GPUSamplerDescriptor::addressModeU() const {
    return emlite::Val::get("addressModeU").as<GPUAddressMode>();
}

void GPUSamplerDescriptor::addressModeU(const GPUAddressMode& value) {
    emlite::Val::set("addressModeU", value);
}

GPUAddressMode GPUSamplerDescriptor::addressModeV() const {
    return emlite::Val::get("addressModeV").as<GPUAddressMode>();
}

void GPUSamplerDescriptor::addressModeV(const GPUAddressMode& value) {
    emlite::Val::set("addressModeV", value);
}

GPUAddressMode GPUSamplerDescriptor::addressModeW() const {
    return emlite::Val::get("addressModeW").as<GPUAddressMode>();
}

void GPUSamplerDescriptor::addressModeW(const GPUAddressMode& value) {
    emlite::Val::set("addressModeW", value);
}

GPUFilterMode GPUSamplerDescriptor::magFilter() const {
    return emlite::Val::get("magFilter").as<GPUFilterMode>();
}

void GPUSamplerDescriptor::magFilter(const GPUFilterMode& value) {
    emlite::Val::set("magFilter", value);
}

GPUFilterMode GPUSamplerDescriptor::minFilter() const {
    return emlite::Val::get("minFilter").as<GPUFilterMode>();
}

void GPUSamplerDescriptor::minFilter(const GPUFilterMode& value) {
    emlite::Val::set("minFilter", value);
}

GPUMipmapFilterMode GPUSamplerDescriptor::mipmapFilter() const {
    return emlite::Val::get("mipmapFilter").as<GPUMipmapFilterMode>();
}

void GPUSamplerDescriptor::mipmapFilter(const GPUMipmapFilterMode& value) {
    emlite::Val::set("mipmapFilter", value);
}

float GPUSamplerDescriptor::lodMinClamp() const {
    return emlite::Val::get("lodMinClamp").as<float>();
}

void GPUSamplerDescriptor::lodMinClamp(float value) {
    emlite::Val::set("lodMinClamp", value);
}

float GPUSamplerDescriptor::lodMaxClamp() const {
    return emlite::Val::get("lodMaxClamp").as<float>();
}

void GPUSamplerDescriptor::lodMaxClamp(float value) {
    emlite::Val::set("lodMaxClamp", value);
}

GPUCompareFunction GPUSamplerDescriptor::compare() const {
    return emlite::Val::get("compare").as<GPUCompareFunction>();
}

void GPUSamplerDescriptor::compare(const GPUCompareFunction& value) {
    emlite::Val::set("compare", value);
}

unsigned short GPUSamplerDescriptor::maxAnisotropy() const {
    return emlite::Val::get("maxAnisotropy").as<unsigned short>();
}

void GPUSamplerDescriptor::maxAnisotropy(unsigned short value) {
    emlite::Val::set("maxAnisotropy", value);
}


} // namespace webbind