#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUCanvasConfiguration;
class GPUTexture;
class GPUDevice;


class GPUCanvasConfiguration : public emlite::Val {
  explicit GPUCanvasConfiguration(Handle h) noexcept;
public:
    static GPUCanvasConfiguration take_ownership(Handle h) noexcept;
    explicit GPUCanvasConfiguration(const emlite::Val &val) noexcept;
    GPUCanvasConfiguration() noexcept;
    [[nodiscard]] GPUCanvasConfiguration clone() const noexcept;
    [[nodiscard]] GPUDevice device() const;
    void device(const GPUDevice& value);
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<GPUTextureFormat> viewFormats() const;
    void viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    [[nodiscard]] jsbind::Any toneMapping() const;
    void toneMapping(const jsbind::Any& value);
    [[nodiscard]] GPUCanvasAlphaMode alphaMode() const;
    void alphaMode(const GPUCanvasAlphaMode& value);
};

/// The GPUCanvasContext class.
/// [`GPUCanvasContext`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext)
class GPUCanvasContext : public emlite::Val {
    explicit GPUCanvasContext(Handle h) noexcept;

public:
    explicit GPUCanvasContext(const emlite::Val &val) noexcept;
    static GPUCanvasContext take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUCanvasContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `canvas` attribute.
    /// [`GPUCanvasContext.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/canvas)
    [[nodiscard]] jsbind::Any canvas() const;
    /// The configure method.
    /// [`GPUCanvasContext.configure`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/configure)
    jsbind::Undefined configure(const GPUCanvasConfiguration& configuration);
    /// The unconfigure method.
    /// [`GPUCanvasContext.unconfigure`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/unconfigure)
    jsbind::Undefined unconfigure();
    /// The getConfiguration method.
    /// [`GPUCanvasContext.getConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/getConfiguration)
    GPUCanvasConfiguration getConfiguration();
    /// The getCurrentTexture method.
    /// [`GPUCanvasContext.getCurrentTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext/getCurrentTexture)
    GPUTexture getCurrentTexture();
};

