#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPURenderPassLayout
class GPURenderPassLayout : public GPUObjectDescriptorBase {
  explicit GPURenderPassLayout(Handle h) noexcept;
public:
    static GPURenderPassLayout take_ownership(Handle h) noexcept;
    explicit GPURenderPassLayout(const emlite::Val &val) noexcept;
    GPURenderPassLayout() noexcept;
    [[nodiscard]] GPURenderPassLayout clone() const noexcept;
    /// Getter of the `colorFormats` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUTextureFormat> colorFormats() const;
    /// Setter of the `colorFormats` attribute.
    void colorFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
    /// Getter of the `depthStencilFormat` attribute.
    [[nodiscard]] GPUTextureFormat depthStencilFormat() const;
    /// Setter of the `depthStencilFormat` attribute.
    void depthStencilFormat(const GPUTextureFormat& value);
    /// Getter of the `sampleCount` attribute.
    [[nodiscard]] jsbind::Any sampleCount() const;
    /// Setter of the `sampleCount` attribute.
    void sampleCount(const jsbind::Any& value);
};

} // namespace webbind