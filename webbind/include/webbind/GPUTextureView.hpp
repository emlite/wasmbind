#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUTextureView class.
/// [`GPUTextureView`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureView)
class GPUTextureView : public emlite::Val {
    explicit GPUTextureView(Handle h) noexcept;

public:
    explicit GPUTextureView(const emlite::Val &val) noexcept;
    static GPUTextureView take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUTextureView clone() const noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUTextureView.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureView/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUTextureView.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureView/label)
    void label(const jsbind::String& value);
};

