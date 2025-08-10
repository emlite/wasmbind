#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GPUBindGroup
/// [`GPUBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup)
class GPUBindGroup : public emlite::Val {
    explicit GPUBindGroup(Handle h) noexcept;
public:
    explicit GPUBindGroup(const emlite::Val &val) noexcept;
    static GPUBindGroup take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBindGroup clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUBindGroup.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup/label)
    /// [`GPUBindGroup.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUBindGroup.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup/label)
    void label(const jsbind::String& value);
};

} // namespace webbind