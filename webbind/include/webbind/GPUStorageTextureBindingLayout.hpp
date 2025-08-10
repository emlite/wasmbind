#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUStorageTextureBindingLayout
/// [`GPUStorageTextureBindingLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStorageTextureBindingLayout)
class GPUStorageTextureBindingLayout : public emlite::Val {
  explicit GPUStorageTextureBindingLayout(Handle h) noexcept;
public:
    static GPUStorageTextureBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUStorageTextureBindingLayout(const emlite::Val &val) noexcept;
    GPUStorageTextureBindingLayout() noexcept;
    [[nodiscard]] GPUStorageTextureBindingLayout clone() const noexcept;
    [[nodiscard]] GPUStorageTextureAccess access() const;
    void access(const GPUStorageTextureAccess& value);
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] GPUTextureViewDimension viewDimension() const;
    void viewDimension(const GPUTextureViewDimension& value);
};

} // namespace webbind