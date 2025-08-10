#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUBindGroupEntry.hpp"

namespace webbind {

class GPUBindGroupLayout;

/// Dictionary type GPUBindGroupDescriptor
/// [`GPUBindGroupDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupDescriptor)
class GPUBindGroupDescriptor : public GPUObjectDescriptorBase {
  explicit GPUBindGroupDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupDescriptor() noexcept;
    [[nodiscard]] GPUBindGroupDescriptor clone() const noexcept;
    [[nodiscard]] GPUBindGroupLayout layout() const;
    void layout(const GPUBindGroupLayout& value);
    [[nodiscard]] jsbind::TypedArray<GPUBindGroupEntry> entries() const;
    void entries(const jsbind::TypedArray<GPUBindGroupEntry>& value);
};

} // namespace webbind