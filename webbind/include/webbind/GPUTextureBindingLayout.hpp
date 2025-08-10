#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUTextureBindingLayout
class GPUTextureBindingLayout : public emlite::Val {
  explicit GPUTextureBindingLayout(Handle h) noexcept;
public:
    static GPUTextureBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUTextureBindingLayout(const emlite::Val &val) noexcept;
    GPUTextureBindingLayout() noexcept;
    [[nodiscard]] GPUTextureBindingLayout clone() const noexcept;
    /// Getter of the `sampleType` attribute.
    [[nodiscard]] GPUTextureSampleType sampleType() const;
    /// Setter of the `sampleType` attribute.
    void sampleType(const GPUTextureSampleType& value);
    /// Getter of the `viewDimension` attribute.
    [[nodiscard]] GPUTextureViewDimension viewDimension() const;
    /// Setter of the `viewDimension` attribute.
    void viewDimension(const GPUTextureViewDimension& value);
    /// Getter of the `multisampled` attribute.
    [[nodiscard]] bool multisampled() const;
    /// Setter of the `multisampled` attribute.
    void multisampled(bool value);
};

} // namespace webbind