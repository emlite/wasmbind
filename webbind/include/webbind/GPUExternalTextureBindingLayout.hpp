#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUExternalTextureBindingLayout
/// [`GPUExternalTextureBindingLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUExternalTextureBindingLayout)
class GPUExternalTextureBindingLayout : public emlite::Val {
  explicit GPUExternalTextureBindingLayout(Handle h) noexcept;
public:
    static GPUExternalTextureBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUExternalTextureBindingLayout(const emlite::Val &val) noexcept;
    GPUExternalTextureBindingLayout() noexcept;
    [[nodiscard]] GPUExternalTextureBindingLayout clone() const noexcept;
};

} // namespace webbind