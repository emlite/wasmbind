#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUBufferBindingLayout.hpp"
#include "GPUSamplerBindingLayout.hpp"
#include "GPUTextureBindingLayout.hpp"
#include "GPUStorageTextureBindingLayout.hpp"
#include "GPUExternalTextureBindingLayout.hpp"

namespace webbind {

/// Dictionary type GPUBindGroupLayoutEntry
/// [`GPUBindGroupLayoutEntry`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupLayoutEntry)
class GPUBindGroupLayoutEntry : public emlite::Val {
  explicit GPUBindGroupLayoutEntry(Handle h) noexcept;
public:
    static GPUBindGroupLayoutEntry take_ownership(Handle h) noexcept;
    explicit GPUBindGroupLayoutEntry(const emlite::Val &val) noexcept;
    GPUBindGroupLayoutEntry() noexcept;
    [[nodiscard]] GPUBindGroupLayoutEntry clone() const noexcept;
    [[nodiscard]] jsbind::Any binding() const;
    void binding(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any visibility() const;
    void visibility(const jsbind::Any& value);
    [[nodiscard]] GPUBufferBindingLayout buffer() const;
    void buffer(const GPUBufferBindingLayout& value);
    [[nodiscard]] GPUSamplerBindingLayout sampler() const;
    void sampler(const GPUSamplerBindingLayout& value);
    [[nodiscard]] GPUTextureBindingLayout texture() const;
    void texture(const GPUTextureBindingLayout& value);
    [[nodiscard]] GPUStorageTextureBindingLayout storageTexture() const;
    void storageTexture(const GPUStorageTextureBindingLayout& value);
    [[nodiscard]] GPUExternalTextureBindingLayout externalTexture() const;
    void externalTexture(const GPUExternalTextureBindingLayout& value);
};

} // namespace webbind