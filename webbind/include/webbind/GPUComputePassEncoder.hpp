#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUComputePipeline;
class GPUBuffer;
class GPUBindGroup;

/// Interface GPUComputePassEncoder
/// [`GPUComputePassEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder)
class GPUComputePassEncoder : public emlite::Val {
    explicit GPUComputePassEncoder(Handle h) noexcept;
public:
    explicit GPUComputePassEncoder(const emlite::Val &val) noexcept;
    static GPUComputePassEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUComputePassEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The setPipeline method.
    /// [`GPUComputePassEncoder.setPipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/setPipeline)
    jsbind::Undefined setPipeline(const GPUComputePipeline& pipeline);
    /// The dispatchWorkgroups method.
    /// [`GPUComputePassEncoder.dispatchWorkgroups`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/dispatchWorkgroups)
    jsbind::Undefined dispatchWorkgroups(const jsbind::Any& workgroupCountX);
    /// The dispatchWorkgroups method.
    /// [`GPUComputePassEncoder.dispatchWorkgroups`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/dispatchWorkgroups)
    jsbind::Undefined dispatchWorkgroups(const jsbind::Any& workgroupCountX, const jsbind::Any& workgroupCountY);
    /// The dispatchWorkgroups method.
    /// [`GPUComputePassEncoder.dispatchWorkgroups`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/dispatchWorkgroups)
    jsbind::Undefined dispatchWorkgroups(const jsbind::Any& workgroupCountX, const jsbind::Any& workgroupCountY, const jsbind::Any& workgroupCountZ);
    /// The dispatchWorkgroupsIndirect method.
    /// [`GPUComputePassEncoder.dispatchWorkgroupsIndirect`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/dispatchWorkgroupsIndirect)
    jsbind::Undefined dispatchWorkgroupsIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
    /// The end method.
    /// [`GPUComputePassEncoder.end`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/end)
    jsbind::Undefined end();
    /// [`GPUComputePassEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/label)
    /// [`GPUComputePassEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUComputePassEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/label)
    void label(const jsbind::String& value);
    /// The pushDebugGroup method.
    /// [`GPUComputePassEncoder.pushDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/pushDebugGroup)
    jsbind::Undefined pushDebugGroup(const jsbind::String& groupLabel);
    /// The popDebugGroup method.
    /// [`GPUComputePassEncoder.popDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/popDebugGroup)
    jsbind::Undefined popDebugGroup();
    /// The insertDebugMarker method.
    /// [`GPUComputePassEncoder.insertDebugMarker`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/insertDebugMarker)
    jsbind::Undefined insertDebugMarker(const jsbind::String& markerLabel);
    /// The setBindGroup method.
    /// [`GPUComputePassEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup);
    /// The setBindGroup method.
    /// [`GPUComputePassEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::TypedArray<jsbind::Any>& dynamicOffsets);
    /// The setBindGroup method.
    /// [`GPUComputePassEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength);
};

} // namespace webbind