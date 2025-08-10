#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUQuerySetDescriptor
class GPUQuerySetDescriptor : public GPUObjectDescriptorBase {
  explicit GPUQuerySetDescriptor(Handle h) noexcept;
public:
    static GPUQuerySetDescriptor take_ownership(Handle h) noexcept;
    explicit GPUQuerySetDescriptor(const emlite::Val &val) noexcept;
    GPUQuerySetDescriptor() noexcept;
    [[nodiscard]] GPUQuerySetDescriptor clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] GPUQueryType type() const;
    /// Setter of the `type` attribute.
    void type(const GPUQueryType& value);
    /// Getter of the `count` attribute.
    [[nodiscard]] jsbind::Any count() const;
    /// Setter of the `count` attribute.
    void count(const jsbind::Any& value);
};

} // namespace webbind