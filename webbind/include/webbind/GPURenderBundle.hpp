#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GPURenderBundle
/// [`GPURenderBundle`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundle)
class GPURenderBundle : public emlite::Val {
    explicit GPURenderBundle(Handle h) noexcept;
public:
    explicit GPURenderBundle(const emlite::Val &val) noexcept;
    static GPURenderBundle take_ownership(Handle h) noexcept;
    [[nodiscard]] GPURenderBundle clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `label` attribute.
    /// [`GPURenderBundle.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundle/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPURenderBundle.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundle/label)
    void label(const jsbind::String& value);
};

} // namespace webbind