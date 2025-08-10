#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUSamplerBindingLayout
/// [`GPUSamplerBindingLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSamplerBindingLayout)
class GPUSamplerBindingLayout : public emlite::Val {
  explicit GPUSamplerBindingLayout(Handle h) noexcept;
public:
    static GPUSamplerBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUSamplerBindingLayout(const emlite::Val &val) noexcept;
    GPUSamplerBindingLayout() noexcept;
    [[nodiscard]] GPUSamplerBindingLayout clone() const noexcept;
    [[nodiscard]] GPUSamplerBindingType type() const;
    void type(const GPUSamplerBindingType& value);
};

} // namespace webbind