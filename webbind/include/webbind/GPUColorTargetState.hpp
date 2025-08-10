#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUBlendState.hpp"

namespace webbind {

/// Dictionary type GPUColorTargetState
/// [`GPUColorTargetState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUColorTargetState)
class GPUColorTargetState : public emlite::Val {
  explicit GPUColorTargetState(Handle h) noexcept;
public:
    static GPUColorTargetState take_ownership(Handle h) noexcept;
    explicit GPUColorTargetState(const emlite::Val &val) noexcept;
    GPUColorTargetState() noexcept;
    [[nodiscard]] GPUColorTargetState clone() const noexcept;
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] GPUBlendState blend() const;
    void blend(const GPUBlendState& value);
    [[nodiscard]] jsbind::Any writeMask() const;
    void writeMask(const jsbind::Any& value);
};

} // namespace webbind