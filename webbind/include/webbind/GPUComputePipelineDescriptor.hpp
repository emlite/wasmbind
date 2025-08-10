#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUPipelineDescriptorBase.hpp"
#include "GPUProgrammableStage.hpp"

namespace webbind {

/// Dictionary type GPUComputePipelineDescriptor
class GPUComputePipelineDescriptor : public GPUPipelineDescriptorBase {
  explicit GPUComputePipelineDescriptor(Handle h) noexcept;
public:
    static GPUComputePipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePipelineDescriptor(const emlite::Val &val) noexcept;
    GPUComputePipelineDescriptor() noexcept;
    [[nodiscard]] GPUComputePipelineDescriptor clone() const noexcept;
    /// Getter of the `compute` attribute.
    [[nodiscard]] GPUProgrammableStage compute() const;
    /// Setter of the `compute` attribute.
    void compute(const GPUProgrammableStage& value);
};

} // namespace webbind