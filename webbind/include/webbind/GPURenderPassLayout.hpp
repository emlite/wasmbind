#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPURenderPassLayout
/// [`GPURenderPassLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassLayout)
class GPURenderPassLayout : public GPUObjectDescriptorBase {
  explicit GPURenderPassLayout(Handle h) noexcept;
public:
    static GPURenderPassLayout take_ownership(Handle h) noexcept;
    explicit GPURenderPassLayout(const emlite::Val &val) noexcept;
    GPURenderPassLayout() noexcept;
    [[nodiscard]] GPURenderPassLayout clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUTextureFormat> colorFormats() const;
    void colorFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
    [[nodiscard]] GPUTextureFormat depthStencilFormat() const;
    void depthStencilFormat(const GPUTextureFormat& value);
    [[nodiscard]] jsbind::Any sampleCount() const;
    void sampleCount(const jsbind::Any& value);
};

} // namespace webbind