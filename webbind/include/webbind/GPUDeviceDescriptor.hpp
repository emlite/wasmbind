#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUQueueDescriptor.hpp"

namespace webbind {

/// Dictionary type GPUDeviceDescriptor
/// [`GPUDeviceDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceDescriptor)
class GPUDeviceDescriptor : public GPUObjectDescriptorBase {
  explicit GPUDeviceDescriptor(Handle h) noexcept;
public:
    static GPUDeviceDescriptor take_ownership(Handle h) noexcept;
    explicit GPUDeviceDescriptor(const emlite::Val &val) noexcept;
    GPUDeviceDescriptor() noexcept;
    [[nodiscard]] GPUDeviceDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUFeatureName> requiredFeatures() const;
    void requiredFeatures(const jsbind::TypedArray<GPUFeatureName>& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> requiredLimits() const;
    void requiredLimits(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    [[nodiscard]] GPUQueueDescriptor defaultQueue() const;
    void defaultQueue(const GPUQueueDescriptor& value);
};

} // namespace webbind