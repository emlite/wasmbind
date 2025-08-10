#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUDevice;
class GPUCanvasToneMapping;

/// Dictionary type GPUCanvasConfiguration
class GPUCanvasConfiguration : public emlite::Val {
  explicit GPUCanvasConfiguration(Handle h) noexcept;
public:
    static GPUCanvasConfiguration take_ownership(Handle h) noexcept;
    explicit GPUCanvasConfiguration(const emlite::Val &val) noexcept;
    GPUCanvasConfiguration() noexcept;
    [[nodiscard]] GPUCanvasConfiguration clone() const noexcept;
    /// Getter of the `device` attribute.
    [[nodiscard]] GPUDevice device() const;
    /// Setter of the `device` attribute.
    void device(const GPUDevice& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] GPUTextureFormat format() const;
    /// Setter of the `format` attribute.
    void format(const GPUTextureFormat& value);
    /// Getter of the `usage` attribute.
    [[nodiscard]] jsbind::Any usage() const;
    /// Setter of the `usage` attribute.
    void usage(const jsbind::Any& value);
    /// Getter of the `viewFormats` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUTextureFormat> viewFormats() const;
    /// Setter of the `viewFormats` attribute.
    void viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const PredefinedColorSpace& value);
    /// Getter of the `toneMapping` attribute.
    [[nodiscard]] GPUCanvasToneMapping toneMapping() const;
    /// Setter of the `toneMapping` attribute.
    void toneMapping(const GPUCanvasToneMapping& value);
    /// Getter of the `alphaMode` attribute.
    [[nodiscard]] GPUCanvasAlphaMode alphaMode() const;
    /// Setter of the `alphaMode` attribute.
    void alphaMode(const GPUCanvasAlphaMode& value);
};

} // namespace webbind