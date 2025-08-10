#include <webbind/GPURenderBundleEncoderDescriptor.hpp>

using emlite::Val;
namespace webbind {

GPURenderBundleEncoderDescriptor::GPURenderBundleEncoderDescriptor(Handle h) noexcept : GPURenderPassLayout(emlite::Val::take_ownership(h)) {}
GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderBundleEncoderDescriptor(h);
    }
GPURenderBundleEncoderDescriptor::GPURenderBundleEncoderDescriptor(const emlite::Val &val) noexcept: GPURenderPassLayout(val) {}
GPURenderBundleEncoderDescriptor::GPURenderBundleEncoderDescriptor() noexcept: GPURenderPassLayout(emlite::Val::object()) {}
GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor::clone() const noexcept { return *this; }

bool GPURenderBundleEncoderDescriptor::depthReadOnly() const {
    return emlite::Val::get("depthReadOnly").as<bool>();
}

void GPURenderBundleEncoderDescriptor::depthReadOnly(bool value) {
    emlite::Val::set("depthReadOnly", value);
}

bool GPURenderBundleEncoderDescriptor::stencilReadOnly() const {
    return emlite::Val::get("stencilReadOnly").as<bool>();
}

void GPURenderBundleEncoderDescriptor::stencilReadOnly(bool value) {
    emlite::Val::set("stencilReadOnly", value);
}


} // namespace webbind