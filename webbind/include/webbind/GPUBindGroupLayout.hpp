#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUBindGroupLayout class.
/// [`GPUBindGroupLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupLayout)
class GPUBindGroupLayout : public emlite::Val {
    explicit GPUBindGroupLayout(Handle h) noexcept;

public:
    explicit GPUBindGroupLayout(const emlite::Val &val) noexcept;
    static GPUBindGroupLayout take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUBindGroupLayout clone() const noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUBindGroupLayout.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupLayout/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUBindGroupLayout.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupLayout/label)
    void label(const jsbind::String& value);
};

