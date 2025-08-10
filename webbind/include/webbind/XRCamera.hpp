#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface XRCamera
/// [`XRCamera`](https://developer.mozilla.org/en-US/docs/Web/API/XRCamera)
class XRCamera : public emlite::Val {
    explicit XRCamera(Handle h) noexcept;
public:
    explicit XRCamera(const emlite::Val &val) noexcept;
    static XRCamera take_ownership(Handle h) noexcept;
    [[nodiscard]] XRCamera clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRCamera.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRCamera/width)
    /// [`XRCamera.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRCamera/width)
    [[nodiscard]] unsigned long width() const;
    /// [`XRCamera.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRCamera/height)
    /// [`XRCamera.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRCamera/height)
    [[nodiscard]] unsigned long height() const;
};

} // namespace webbind