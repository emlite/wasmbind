#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUBindGroupEntry.hpp"

namespace webbind {

class GPUBindGroupLayout;

/// Dictionary type GPUBindGroupDescriptor
class GPUBindGroupDescriptor : public GPUObjectDescriptorBase {
  explicit GPUBindGroupDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupDescriptor() noexcept;
    [[nodiscard]] GPUBindGroupDescriptor clone() const noexcept;
    /// Getter of the `layout` attribute.
    [[nodiscard]] GPUBindGroupLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const GPUBindGroupLayout& value);
    /// Getter of the `entries` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUBindGroupEntry> entries() const;
    /// Setter of the `entries` attribute.
    void entries(const jsbind::TypedArray<GPUBindGroupEntry>& value);
};

} // namespace webbind