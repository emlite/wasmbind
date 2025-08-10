#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUQuerySetDescriptor
/// [`GPUQuerySetDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySetDescriptor)
class GPUQuerySetDescriptor : public GPUObjectDescriptorBase {
  explicit GPUQuerySetDescriptor(Handle h) noexcept;
public:
    static GPUQuerySetDescriptor take_ownership(Handle h) noexcept;
    explicit GPUQuerySetDescriptor(const emlite::Val &val) noexcept;
    GPUQuerySetDescriptor() noexcept;
    [[nodiscard]] GPUQuerySetDescriptor clone() const noexcept;
    [[nodiscard]] GPUQueryType type() const;
    void type(const GPUQueryType& value);
    [[nodiscard]] jsbind::Any count() const;
    void count(const jsbind::Any& value);
};

} // namespace webbind