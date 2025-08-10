#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUQueueDescriptor
/// [`GPUQueueDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueueDescriptor)
class GPUQueueDescriptor : public GPUObjectDescriptorBase {
  explicit GPUQueueDescriptor(Handle h) noexcept;
public:
    static GPUQueueDescriptor take_ownership(Handle h) noexcept;
    explicit GPUQueueDescriptor(const emlite::Val &val) noexcept;
    GPUQueueDescriptor() noexcept;
    [[nodiscard]] GPUQueueDescriptor clone() const noexcept;
};

} // namespace webbind