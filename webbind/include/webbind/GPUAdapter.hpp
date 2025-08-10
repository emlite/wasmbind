#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUDeviceDescriptor.hpp"

namespace webbind {

class GPUSupportedFeatures;
class GPUSupportedLimits;
class GPUAdapterInfo;
class GPUDevice;

/// Interface GPUAdapter
/// [`GPUAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter)
class GPUAdapter : public emlite::Val {
    explicit GPUAdapter(Handle h) noexcept;
public:
    explicit GPUAdapter(const emlite::Val &val) noexcept;
    static GPUAdapter take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUAdapter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUAdapter.features`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/features)
    /// [`GPUAdapter.features`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/features)
    [[nodiscard]] GPUSupportedFeatures features() const;
    /// [`GPUAdapter.limits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/limits)
    /// [`GPUAdapter.limits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/limits)
    [[nodiscard]] GPUSupportedLimits limits() const;
    /// [`GPUAdapter.info`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/info)
    /// [`GPUAdapter.info`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/info)
    [[nodiscard]] GPUAdapterInfo info() const;
    /// The requestDevice method.
    /// [`GPUAdapter.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/requestDevice)
    jsbind::Promise<GPUDevice> requestDevice();
    /// The requestDevice method.
    /// [`GPUAdapter.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAdapter/requestDevice)
    jsbind::Promise<GPUDevice> requestDevice(const GPUDeviceDescriptor& descriptor);
};

} // namespace webbind