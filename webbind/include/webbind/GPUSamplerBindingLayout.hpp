#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUSamplerBindingLayout
class GPUSamplerBindingLayout : public emlite::Val {
  explicit GPUSamplerBindingLayout(Handle h) noexcept;
public:
    static GPUSamplerBindingLayout take_ownership(Handle h) noexcept;
    explicit GPUSamplerBindingLayout(const emlite::Val &val) noexcept;
    GPUSamplerBindingLayout() noexcept;
    [[nodiscard]] GPUSamplerBindingLayout clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] GPUSamplerBindingType type() const;
    /// Setter of the `type` attribute.
    void type(const GPUSamplerBindingType& value);
};

} // namespace webbind