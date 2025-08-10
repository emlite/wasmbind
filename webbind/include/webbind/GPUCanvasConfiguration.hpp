#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUCanvasToneMapping.hpp"

namespace webbind {

class GPUDevice;

/// Dictionary type GPUCanvasConfiguration
/// [`GPUCanvasConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasConfiguration)
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
    [[nodiscard]] GPUCanvasToneMapping toneMapping() const;
    void toneMapping(const GPUCanvasToneMapping& value);
    [[nodiscard]] GPUCanvasAlphaMode alphaMode() const;
    void alphaMode(const GPUCanvasAlphaMode& value);
};

} // namespace webbind