#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUComputePipeline;
class GPUBuffer;
class GPUBindGroup;


class GPUComputePassEncoder : public emlite::Val {
    explicit GPUComputePassEncoder(Handle h) noexcept;

public:
    explicit GPUComputePassEncoder(const emlite::Val &val) noexcept;
    static GPUComputePassEncoder take_ownership(Handle h) noexcept;

    GPUComputePassEncoder clone() const noexcept;
    jsbind::Undefined setPipeline(const GPUComputePipeline& pipeline);
    jsbind::Undefined dispatchWorkgroups(const jsbind::Any& workgroupCountX);
    jsbind::Undefined dispatchWorkgroups(const jsbind::Any& workgroupCountX, const jsbind::Any& workgroupCountY);
    jsbind::Undefined dispatchWorkgroups(const jsbind::Any& workgroupCountX, const jsbind::Any& workgroupCountY, const jsbind::Any& workgroupCountZ);
    jsbind::Undefined dispatchWorkgroupsIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
    jsbind::Undefined end();
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
    jsbind::Undefined pushDebugGroup(const jsbind::USVString& groupLabel);
    jsbind::Undefined popDebugGroup();
    jsbind::Undefined insertDebugMarker(const jsbind::USVString& markerLabel);
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength);
};

