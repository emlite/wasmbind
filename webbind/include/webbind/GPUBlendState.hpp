#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUBlendComponent;

/// Dictionary type GPUBlendState
class GPUBlendState : public emlite::Val {
  explicit GPUBlendState(Handle h) noexcept;
public:
    static GPUBlendState take_ownership(Handle h) noexcept;
    explicit GPUBlendState(const emlite::Val &val) noexcept;
    GPUBlendState() noexcept;
    [[nodiscard]] GPUBlendState clone() const noexcept;
    /// Getter of the `color` attribute.
    [[nodiscard]] GPUBlendComponent color() const;
    /// Setter of the `color` attribute.
    void color(const GPUBlendComponent& value);
    /// Getter of the `alpha` attribute.
    [[nodiscard]] GPUBlendComponent alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(const GPUBlendComponent& value);
};

} // namespace webbind