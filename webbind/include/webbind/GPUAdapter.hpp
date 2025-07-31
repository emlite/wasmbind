#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUSupportedFeatures;
class GPUSupportedLimits;
class GPUAdapterInfo;
class GPUDevice;
class GPUDeviceDescriptor;


class GPUDeviceDescriptor : public emlite::Val {
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
    [[nodiscard]] jsbind::Any defaultQueue() const;
    void defaultQueue(const jsbind::Any& value);
};

/// The GPUAdapter class.
/// [`GPUAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter)
class GPUAdapter : public emlite::Val {
    explicit GPUAdapter(Handle h) noexcept;

public:
    explicit GPUAdapter(const emlite::Val &val) noexcept;
    static GPUAdapter take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUAdapter clone() const noexcept;
    /// Getter of the `features` attribute.
    /// [`GPUAdapter.features`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/features)
    [[nodiscard]] GPUSupportedFeatures features() const;
    /// Getter of the `limits` attribute.
    /// [`GPUAdapter.limits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/limits)
    [[nodiscard]] GPUSupportedLimits limits() const;
    /// Getter of the `info` attribute.
    /// [`GPUAdapter.info`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/info)
    [[nodiscard]] GPUAdapterInfo info() const;
    /// The requestDevice method.
    /// [`GPUAdapter.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/requestDevice)
    jsbind::Promise<GPUDevice> requestDevice();
    /// The requestDevice method.
    /// [`GPUAdapter.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/requestDevice)
    jsbind::Promise<GPUDevice> requestDevice(const GPUDeviceDescriptor& descriptor);
};

