#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUBindGroup class.
/// [`GPUBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup)
class GPUBindGroup : public emlite::Val {
    explicit GPUBindGroup(Handle h) noexcept;

public:
    explicit GPUBindGroup(const emlite::Val &val) noexcept;
    static GPUBindGroup take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUBindGroup clone() const noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUBindGroup.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUBindGroup.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup/label)
    void label(const jsbind::String& value);
};

