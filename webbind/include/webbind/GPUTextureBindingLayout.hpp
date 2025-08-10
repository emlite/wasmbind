#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUTextureBindingLayout
/// [`GPUTextureBindingLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureBindingLayout)
class GPUTextureBindingLayout : public emlite::Val {
  explicit GPUTextureBindingLayout(Handle h) noexcept;
public:
    static GPUTextureBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUTextureBindingLayout(const emlite::Val &val) noexcept;
    GPUTextureBindingLayout() noexcept;
    [[nodiscard]] GPUTextureBindingLayout clone() const noexcept;
    [[nodiscard]] GPUTextureSampleType sampleType() const;
    void sampleType(const GPUTextureSampleType& value);
    [[nodiscard]] GPUTextureViewDimension viewDimension() const;
    void viewDimension(const GPUTextureViewDimension& value);
    [[nodiscard]] bool multisampled() const;
    void multisampled(bool value);
};

} // namespace webbind