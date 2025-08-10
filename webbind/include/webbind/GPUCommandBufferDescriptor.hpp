#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUCommandBufferDescriptor
class GPUCommandBufferDescriptor : public GPUObjectDescriptorBase {
  explicit GPUCommandBufferDescriptor(Handle h) noexcept;
public:
    static GPUCommandBufferDescriptor take_ownership(Handle h) noexcept;
    explicit GPUCommandBufferDescriptor(const emlite::Val &val) noexcept;
    GPUCommandBufferDescriptor() noexcept;
    [[nodiscard]] GPUCommandBufferDescriptor clone() const noexcept;
};

} // namespace webbind