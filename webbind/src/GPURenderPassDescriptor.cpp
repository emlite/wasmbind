#include "webbind/GPURenderPassDescriptor.hpp"
#include "webbind/GPURenderPassColorAttachment.hpp"
#include "webbind/GPURenderPassDepthStencilAttachment.hpp"
#include "webbind/GPUQuerySet.hpp"
#include "webbind/GPURenderPassTimestampWrites.hpp"

using emlite::Val;
namespace webbind {

GPURenderPassDescriptor::GPURenderPassDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPURenderPassDescriptor GPURenderPassDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderPassDescriptor(h);
    }
GPURenderPassDescriptor::GPURenderPassDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPURenderPassDescriptor::GPURenderPassDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPURenderPassDescriptor GPURenderPassDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<GPURenderPassColorAttachment> GPURenderPassDescriptor::colorAttachments() const {
    return emlite::Val::get("colorAttachments").as<jsbind::TypedArray<GPURenderPassColorAttachment>>();
}

void GPURenderPassDescriptor::colorAttachments(const jsbind::TypedArray<GPURenderPassColorAttachment>& value) {
    emlite::Val::set("colorAttachments", value);
}

GPURenderPassDepthStencilAttachment GPURenderPassDescriptor::depthStencilAttachment() const {
    return emlite::Val::get("depthStencilAttachment").as<GPURenderPassDepthStencilAttachment>();
}

void GPURenderPassDescriptor::depthStencilAttachment(const GPURenderPassDepthStencilAttachment& value) {
    emlite::Val::set("depthStencilAttachment", value);
}

GPUQuerySet GPURenderPassDescriptor::occlusionQuerySet() const {
    return emlite::Val::get("occlusionQuerySet").as<GPUQuerySet>();
}

void GPURenderPassDescriptor::occlusionQuerySet(const GPUQuerySet& value) {
    emlite::Val::set("occlusionQuerySet", value);
}

GPURenderPassTimestampWrites GPURenderPassDescriptor::timestampWrites() const {
    return emlite::Val::get("timestampWrites").as<GPURenderPassTimestampWrites>();
}

void GPURenderPassDescriptor::timestampWrites(const GPURenderPassTimestampWrites& value) {
    emlite::Val::set("timestampWrites", value);
}

jsbind::Any GPURenderPassDescriptor::maxDrawCount() const {
    return emlite::Val::get("maxDrawCount").as<jsbind::Any>();
}

void GPURenderPassDescriptor::maxDrawCount(const jsbind::Any& value) {
    emlite::Val::set("maxDrawCount", value);
}


} // namespace webbind