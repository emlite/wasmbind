#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUTextureDescriptor
/// [`GPUTextureDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureDescriptor)
class GPUTextureDescriptor : public GPUObjectDescriptorBase {
  explicit GPUTextureDescriptor(Handle h) noexcept;
public:
    static GPUTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureDescriptor(const emlite::Val &val) noexcept;
    GPUTextureDescriptor() noexcept;
    [[nodiscard]] GPUTextureDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any size() const;
    void size(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    void mipLevelCount(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any sampleCount() const;
    void sampleCount(const jsbind::Any& value);
    [[nodiscard]] GPUTextureDimension dimension() const;
    void dimension(const GPUTextureDimension& value);
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<GPUTextureFormat> viewFormats() const;
    void viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
};

} // namespace webbind