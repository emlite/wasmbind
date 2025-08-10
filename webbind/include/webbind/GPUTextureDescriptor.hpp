#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUTextureDescriptor
class GPUTextureDescriptor : public GPUObjectDescriptorBase {
  explicit GPUTextureDescriptor(Handle h) noexcept;
public:
    static GPUTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureDescriptor(const emlite::Val &val) noexcept;
    GPUTextureDescriptor() noexcept;
    [[nodiscard]] GPUTextureDescriptor clone() const noexcept;
    /// Getter of the `size` attribute.
    [[nodiscard]] jsbind::Any size() const;
    /// Setter of the `size` attribute.
    void size(const jsbind::Any& value);
    /// Getter of the `mipLevelCount` attribute.
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    /// Setter of the `mipLevelCount` attribute.
    void mipLevelCount(const jsbind::Any& value);
    /// Getter of the `sampleCount` attribute.
    [[nodiscard]] jsbind::Any sampleCount() const;
    /// Setter of the `sampleCount` attribute.
    void sampleCount(const jsbind::Any& value);
    /// Getter of the `dimension` attribute.
    [[nodiscard]] GPUTextureDimension dimension() const;
    /// Setter of the `dimension` attribute.
    void dimension(const GPUTextureDimension& value);
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
};

} // namespace webbind