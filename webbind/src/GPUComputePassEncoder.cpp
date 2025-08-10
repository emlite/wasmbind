#include <webbind/GPUComputePassEncoder.hpp>
#include <webbind/GPUComputePipeline.hpp>
#include <webbind/GPUBuffer.hpp>
#include <webbind/GPUBindGroup.hpp>

namespace webbind {

GPUComputePassEncoder GPUComputePassEncoder::take_ownership(Handle h) noexcept {
    return GPUComputePassEncoder(h);
}

GPUComputePassEncoder GPUComputePassEncoder::clone() const noexcept { return *this; }

emlite::Val GPUComputePassEncoder::instance() noexcept { return emlite::Val::global("GPUComputePassEncoder"); }

GPUComputePassEncoder::GPUComputePassEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

GPUComputePassEncoder::GPUComputePassEncoder(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined GPUComputePassEncoder::setPipeline(const GPUComputePipeline& pipeline) {
    return emlite::Val::call("setPipeline", pipeline).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::dispatchWorkgroups(const jsbind::Any& workgroupCountX) {
    return emlite::Val::call("dispatchWorkgroups", workgroupCountX).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::dispatchWorkgroups(const jsbind::Any& workgroupCountX, const jsbind::Any& workgroupCountY) {
    return emlite::Val::call("dispatchWorkgroups", workgroupCountX, workgroupCountY).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::dispatchWorkgroups(const jsbind::Any& workgroupCountX, const jsbind::Any& workgroupCountY, const jsbind::Any& workgroupCountZ) {
    return emlite::Val::call("dispatchWorkgroups", workgroupCountX, workgroupCountY, workgroupCountZ).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::dispatchWorkgroupsIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset) {
    return emlite::Val::call("dispatchWorkgroupsIndirect", indirectBuffer, indirectOffset).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::end() {
    return emlite::Val::call("end").as<jsbind::Undefined>();
}

jsbind::String GPUComputePassEncoder::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUComputePassEncoder::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::Undefined GPUComputePassEncoder::pushDebugGroup(const jsbind::String& groupLabel) {
    return emlite::Val::call("pushDebugGroup", groupLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::popDebugGroup() {
    return emlite::Val::call("popDebugGroup").as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::insertDebugMarker(const jsbind::String& markerLabel) {
    return emlite::Val::call("insertDebugMarker", markerLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPUComputePassEncoder::setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength) {
    return emlite::Val::call("setBindGroup", index, bindGroup, dynamicOffsetsData, dynamicOffsetsDataStart, dynamicOffsetsDataLength).as<jsbind::Undefined>();
}


} // namespace webbind