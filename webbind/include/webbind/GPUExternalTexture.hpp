#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GPUExternalTexture
/// [`GPUExternalTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUExternalTexture)
class GPUExternalTexture : public emlite::Val {
    explicit GPUExternalTexture(Handle h) noexcept;
public:
    explicit GPUExternalTexture(const emlite::Val &val) noexcept;
    static GPUExternalTexture take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUExternalTexture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUExternalTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUExternalTexture/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUExternalTexture.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUExternalTexture/label)
    void label(const jsbind::String& value);
};

} // namespace webbind