#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUObjectDescriptorBase
class GPUObjectDescriptorBase : public emlite::Val {
  explicit GPUObjectDescriptorBase(Handle h) noexcept;
public:
    static GPUObjectDescriptorBase take_ownership(Handle h) noexcept;
    explicit GPUObjectDescriptorBase(const emlite::Val &val) noexcept;
    GPUObjectDescriptorBase() noexcept;
    [[nodiscard]] GPUObjectDescriptorBase clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
};

} // namespace webbind