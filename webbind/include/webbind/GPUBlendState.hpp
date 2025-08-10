#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUBlendComponent.hpp"

namespace webbind {

/// Dictionary type GPUBlendState
/// [`GPUBlendState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBlendState)
class GPUBlendState : public emlite::Val {
  explicit GPUBlendState(Handle h) noexcept;
public:
    static GPUBlendState take_ownership(Handle h) noexcept;
    explicit GPUBlendState(const emlite::Val &val) noexcept;
    GPUBlendState() noexcept;
    [[nodiscard]] GPUBlendState clone() const noexcept;
    [[nodiscard]] GPUBlendComponent color() const;
    void color(const GPUBlendComponent& value);
    [[nodiscard]] GPUBlendComponent alpha() const;
    void alpha(const GPUBlendComponent& value);
};

} // namespace webbind