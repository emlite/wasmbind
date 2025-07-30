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
    GPUCanvasConfiguration clone() const noexcept;
    GPUDevice device() const;
    void device(const GPUDevice& value);
    GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    jsbind::TypedArray<GPUTextureFormat> viewFormats() const;
    void viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
    PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    jsbind::Any toneMapping() const;
    void toneMapping(const jsbind::Any& value);
    GPUCanvasAlphaMode alphaMode() const;
    void alphaMode(const GPUCanvasAlphaMode& value);
};

class GPUCanvasContext : public emlite::Val {
    explicit GPUCanvasContext(Handle h) noexcept;

public:
    explicit GPUCanvasContext(const emlite::Val &val) noexcept;
    static GPUCanvasContext take_ownership(Handle h) noexcept;

    GPUCanvasContext clone() const noexcept;
    jsbind::Any canvas() const;
    jsbind::Undefined configure(const GPUCanvasConfiguration& configuration);
    jsbind::Undefined unconfigure();
    GPUCanvasConfiguration getConfiguration();
    GPUTexture getCurrentTexture();
};

