#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

class GPUBindGroupLayoutEntry;

/// Dictionary type GPUBindGroupLayoutDescriptor
class GPUBindGroupLayoutDescriptor : public GPUObjectDescriptorBase {
  explicit GPUBindGroupLayoutDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupLayoutDescriptor() noexcept;
    [[nodiscard]] GPUBindGroupLayoutDescriptor clone() const noexcept;
    /// Getter of the `entries` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUBindGroupLayoutEntry> entries() const;
    /// Setter of the `entries` attribute.
    void entries(const jsbind::TypedArray<GPUBindGroupLayoutEntry>& value);
};

} // namespace webbind