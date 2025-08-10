#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

class GPUComputePassTimestampWrites;

/// Dictionary type GPUComputePassDescriptor
class GPUComputePassDescriptor : public GPUObjectDescriptorBase {
  explicit GPUComputePassDescriptor(Handle h) noexcept;
public:
    static GPUComputePassDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePassDescriptor(const emlite::Val &val) noexcept;
    GPUComputePassDescriptor() noexcept;
    [[nodiscard]] GPUComputePassDescriptor clone() const noexcept;
    /// Getter of the `timestampWrites` attribute.
    [[nodiscard]] GPUComputePassTimestampWrites timestampWrites() const;
    /// Setter of the `timestampWrites` attribute.
    void timestampWrites(const GPUComputePassTimestampWrites& value);
};

} // namespace webbind