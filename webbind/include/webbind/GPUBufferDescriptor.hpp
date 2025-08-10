#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUBufferDescriptor
/// [`GPUBufferDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferDescriptor)
class GPUBufferDescriptor : public GPUObjectDescriptorBase {
  explicit GPUBufferDescriptor(Handle h) noexcept;
public:
    static GPUBufferDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBufferDescriptor(const emlite::Val &val) noexcept;
    GPUBufferDescriptor() noexcept;
    [[nodiscard]] GPUBufferDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any size() const;
    void size(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    [[nodiscard]] bool mappedAtCreation() const;
    void mappedAtCreation(bool value);
};

} // namespace webbind