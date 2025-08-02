#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUCommandBuffer class.
/// [`GPUCommandBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandBuffer)
class GPUCommandBuffer : public emlite::Val {
    explicit GPUCommandBuffer(Handle h) noexcept;

public:
    explicit GPUCommandBuffer(const emlite::Val &val) noexcept;
    static GPUCommandBuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUCommandBuffer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUCommandBuffer.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandBuffer/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUCommandBuffer.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandBuffer/label)
    void label(const jsbind::String& value);
};

