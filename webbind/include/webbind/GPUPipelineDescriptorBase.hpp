#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUObjectDescriptorBase.hpp"

namespace webbind {

/// Dictionary type GPUPipelineDescriptorBase
class GPUPipelineDescriptorBase : public GPUObjectDescriptorBase {
  explicit GPUPipelineDescriptorBase(Handle h) noexcept;
public:
    static GPUPipelineDescriptorBase take_ownership(Handle h) noexcept;
    explicit GPUPipelineDescriptorBase(const emlite::Val &val) noexcept;
    GPUPipelineDescriptorBase() noexcept;
    [[nodiscard]] GPUPipelineDescriptorBase clone() const noexcept;
    /// Getter of the `layout` attribute.
    [[nodiscard]] jsbind::Any layout() const;
    /// Setter of the `layout` attribute.
    void layout(const jsbind::Any& value);
};

} // namespace webbind