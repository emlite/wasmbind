#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

class GPUQueueDescriptor;

/// Dictionary type GPUDeviceDescriptor
class GPUDeviceDescriptor : public GPUObjectDescriptorBase {
  explicit GPUDeviceDescriptor(Handle h) noexcept;
public:
    static GPUDeviceDescriptor take_ownership(Handle h) noexcept;
    explicit GPUDeviceDescriptor(const emlite::Val &val) noexcept;
    GPUDeviceDescriptor() noexcept;
    [[nodiscard]] GPUDeviceDescriptor clone() const noexcept;
    /// Getter of the `requiredFeatures` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUFeatureName> requiredFeatures() const;
    /// Setter of the `requiredFeatures` attribute.
    void requiredFeatures(const jsbind::TypedArray<GPUFeatureName>& value);
    /// Getter of the `requiredLimits` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> requiredLimits() const;
    /// Setter of the `requiredLimits` attribute.
    void requiredLimits(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    /// Getter of the `defaultQueue` attribute.
    [[nodiscard]] GPUQueueDescriptor defaultQueue() const;
    /// Setter of the `defaultQueue` attribute.
    void defaultQueue(const GPUQueueDescriptor& value);
};

} // namespace webbind