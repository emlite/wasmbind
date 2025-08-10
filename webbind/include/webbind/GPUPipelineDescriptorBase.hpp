#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUPipelineDescriptorBase
/// [`GPUPipelineDescriptorBase`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineDescriptorBase)
class GPUPipelineDescriptorBase : public GPUObjectDescriptorBase {
  explicit GPUPipelineDescriptorBase(Handle h) noexcept;
public:
    static GPUPipelineDescriptorBase take_ownership(Handle h) noexcept;
    explicit GPUPipelineDescriptorBase(const emlite::Val &val) noexcept;
    GPUPipelineDescriptorBase() noexcept;
    [[nodiscard]] GPUPipelineDescriptorBase clone() const noexcept;
    [[nodiscard]] jsbind::Any layout() const;
    void layout(const jsbind::Any& value);
};

} // namespace webbind