#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"
#include "GPUBindGroupLayoutEntry.hpp"

namespace webbind {

/// Dictionary type GPUBindGroupLayoutDescriptor
/// [`GPUBindGroupLayoutDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupLayoutDescriptor)
class GPUBindGroupLayoutDescriptor : public GPUObjectDescriptorBase {
  explicit GPUBindGroupLayoutDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupLayoutDescriptor() noexcept;
    [[nodiscard]] GPUBindGroupLayoutDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUBindGroupLayoutEntry> entries() const;
    void entries(const jsbind::TypedArray<GPUBindGroupLayoutEntry>& value);
};

} // namespace webbind