#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUBufferDescriptor
class GPUBufferDescriptor : public GPUObjectDescriptorBase {
  explicit GPUBufferDescriptor(Handle h) noexcept;
public:
    static GPUBufferDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBufferDescriptor(const emlite::Val &val) noexcept;
    GPUBufferDescriptor() noexcept;
    [[nodiscard]] GPUBufferDescriptor clone() const noexcept;
    /// Getter of the `size` attribute.
    [[nodiscard]] jsbind::Any size() const;
    /// Setter of the `size` attribute.
    void size(const jsbind::Any& value);
    /// Getter of the `usage` attribute.
    [[nodiscard]] jsbind::Any usage() const;
    /// Setter of the `usage` attribute.
    void usage(const jsbind::Any& value);
    /// Getter of the `mappedAtCreation` attribute.
    [[nodiscard]] bool mappedAtCreation() const;
    /// Setter of the `mappedAtCreation` attribute.
    void mappedAtCreation(bool value);
};

} // namespace webbind