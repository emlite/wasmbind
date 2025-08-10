#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUBufferBindingLayout;
class GPUSamplerBindingLayout;
class GPUTextureBindingLayout;
class GPUStorageTextureBindingLayout;
class GPUExternalTextureBindingLayout;

/// Dictionary type GPUBindGroupLayoutEntry
class GPUBindGroupLayoutEntry : public emlite::Val {
  explicit GPUBindGroupLayoutEntry(Handle h) noexcept;
public:
    static GPUBindGroupLayoutEntry take_ownership(Handle h) noexcept;
    explicit GPUBindGroupLayoutEntry(const emlite::Val &val) noexcept;
    GPUBindGroupLayoutEntry() noexcept;
    [[nodiscard]] GPUBindGroupLayoutEntry clone() const noexcept;
    /// Getter of the `binding` attribute.
    [[nodiscard]] jsbind::Any binding() const;
    /// Setter of the `binding` attribute.
    void binding(const jsbind::Any& value);
    /// Getter of the `visibility` attribute.
    [[nodiscard]] jsbind::Any visibility() const;
    /// Setter of the `visibility` attribute.
    void visibility(const jsbind::Any& value);
    /// Getter of the `buffer` attribute.
    [[nodiscard]] GPUBufferBindingLayout buffer() const;
    /// Setter of the `buffer` attribute.
    void buffer(const GPUBufferBindingLayout& value);
    /// Getter of the `sampler` attribute.
    [[nodiscard]] GPUSamplerBindingLayout sampler() const;
    /// Setter of the `sampler` attribute.
    void sampler(const GPUSamplerBindingLayout& value);
    /// Getter of the `texture` attribute.
    [[nodiscard]] GPUTextureBindingLayout texture() const;
    /// Setter of the `texture` attribute.
    void texture(const GPUTextureBindingLayout& value);
    /// Getter of the `storageTexture` attribute.
    [[nodiscard]] GPUStorageTextureBindingLayout storageTexture() const;
    /// Setter of the `storageTexture` attribute.
    void storageTexture(const GPUStorageTextureBindingLayout& value);
    /// Getter of the `externalTexture` attribute.
    [[nodiscard]] GPUExternalTextureBindingLayout externalTexture() const;
    /// Setter of the `externalTexture` attribute.
    void externalTexture(const GPUExternalTextureBindingLayout& value);
};

} // namespace webbind