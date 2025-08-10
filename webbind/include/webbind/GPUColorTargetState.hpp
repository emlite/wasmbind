#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUBlendState;

/// Dictionary type GPUColorTargetState
class GPUColorTargetState : public emlite::Val {
  explicit GPUColorTargetState(Handle h) noexcept;
public:
    static GPUColorTargetState take_ownership(Handle h) noexcept;
    explicit GPUColorTargetState(const emlite::Val &val) noexcept;
    GPUColorTargetState() noexcept;
    [[nodiscard]] GPUColorTargetState clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] GPUTextureFormat format() const;
    /// Setter of the `format` attribute.
    void format(const GPUTextureFormat& value);
    /// Getter of the `blend` attribute.
    [[nodiscard]] GPUBlendState blend() const;
    /// Setter of the `blend` attribute.
    void blend(const GPUBlendState& value);
    /// Getter of the `writeMask` attribute.
    [[nodiscard]] jsbind::Any writeMask() const;
    /// Setter of the `writeMask` attribute.
    void writeMask(const jsbind::Any& value);
};

} // namespace webbind