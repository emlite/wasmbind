#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

class GPUBindGroupLayout;

/// Dictionary type GPUPipelineLayoutDescriptor
/// [`GPUPipelineLayoutDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineLayoutDescriptor)
class GPUPipelineLayoutDescriptor : public GPUObjectDescriptorBase {
  explicit GPUPipelineLayoutDescriptor(Handle h) noexcept;
public:
    static GPUPipelineLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUPipelineLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUPipelineLayoutDescriptor() noexcept;
    [[nodiscard]] GPUPipelineLayoutDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUBindGroupLayout> bindGroupLayouts() const;
    void bindGroupLayouts(const jsbind::TypedArray<GPUBindGroupLayout>& value);
};

} // namespace webbind