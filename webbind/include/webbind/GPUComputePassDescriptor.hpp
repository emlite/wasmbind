#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUComputePassTimestampWrites.hpp"

namespace webbind {

/// Dictionary type GPUComputePassDescriptor
/// [`GPUComputePassDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassDescriptor)
class GPUComputePassDescriptor : public GPUObjectDescriptorBase {
  explicit GPUComputePassDescriptor(Handle h) noexcept;
public:
    static GPUComputePassDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePassDescriptor(const emlite::Val &val) noexcept;
    GPUComputePassDescriptor() noexcept;
    [[nodiscard]] GPUComputePassDescriptor clone() const noexcept;
    [[nodiscard]] GPUComputePassTimestampWrites timestampWrites() const;
    void timestampWrites(const GPUComputePassTimestampWrites& value);
};

} // namespace webbind