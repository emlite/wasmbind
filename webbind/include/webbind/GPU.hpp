#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUAdapter;
class GPURequestAdapterOptions;
class WGSLLanguageFeatures;


class GPURequestAdapterOptions : public emlite::Val {
  explicit GPURequestAdapterOptions(Handle h) noexcept;
public:
    static GPURequestAdapterOptions take_ownership(Handle h) noexcept;
    explicit GPURequestAdapterOptions(const emlite::Val &val) noexcept;
    GPURequestAdapterOptions() noexcept;
    [[nodiscard]] GPURequestAdapterOptions clone() const noexcept;
    [[nodiscard]] jsbind::String featureLevel() const;
    void featureLevel(const jsbind::String& value);
    [[nodiscard]] GPUPowerPreference powerPreference() const;
    void powerPreference(const GPUPowerPreference& value);
    [[nodiscard]] bool forceFallbackAdapter() const;
    void forceFallbackAdapter(bool value);
    [[nodiscard]] bool xrCompatible() const;
    void xrCompatible(bool value);
};

/// The GPU class.
/// [`GPU`](https://developer.mozilla.org/en-US/docs/Web/API/GPU)
class GPU : public emlite::Val {
    explicit GPU(Handle h) noexcept;

public:
    explicit GPU(const emlite::Val &val) noexcept;
    static GPU take_ownership(Handle h) noexcept;

    [[nodiscard]] GPU clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The requestAdapter method.
    /// [`GPU.requestAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/requestAdapter)
    jsbind::Promise<GPUAdapter> requestAdapter();
    /// The requestAdapter method.
    /// [`GPU.requestAdapter`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/requestAdapter)
    jsbind::Promise<GPUAdapter> requestAdapter(const GPURequestAdapterOptions& options);
    /// The getPreferredCanvasFormat method.
    /// [`GPU.getPreferredCanvasFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/getPreferredCanvasFormat)
    GPUTextureFormat getPreferredCanvasFormat();
    /// Getter of the `wgslLanguageFeatures` attribute.
    /// [`GPU.wgslLanguageFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/GPU/wgslLanguageFeatures)
    [[nodiscard]] WGSLLanguageFeatures wgslLanguageFeatures() const;
};

