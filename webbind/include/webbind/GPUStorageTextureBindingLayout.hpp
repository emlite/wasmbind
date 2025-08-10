#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUStorageTextureBindingLayout
class GPUStorageTextureBindingLayout : public emlite::Val {
  explicit GPUStorageTextureBindingLayout(Handle h) noexcept;
public:
    static GPUStorageTextureBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUStorageTextureBindingLayout(const emlite::Val &val) noexcept;
    GPUStorageTextureBindingLayout() noexcept;
    [[nodiscard]] GPUStorageTextureBindingLayout clone() const noexcept;
    /// Getter of the `access` attribute.
    [[nodiscard]] GPUStorageTextureAccess access() const;
    /// Setter of the `access` attribute.
    void access(const GPUStorageTextureAccess& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] GPUTextureFormat format() const;
    /// Setter of the `format` attribute.
    void format(const GPUTextureFormat& value);
    /// Getter of the `viewDimension` attribute.
    [[nodiscard]] GPUTextureViewDimension viewDimension() const;
    /// Setter of the `viewDimension` attribute.
    void viewDimension(const GPUTextureViewDimension& value);
};

} // namespace webbind