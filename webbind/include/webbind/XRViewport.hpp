#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The XRViewport class.
/// [`XRViewport`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport)
class XRViewport : public emlite::Val {
    explicit XRViewport(Handle h) noexcept;

public:
    explicit XRViewport(const emlite::Val &val) noexcept;
    static XRViewport take_ownership(Handle h) noexcept;

    [[nodiscard]] XRViewport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `x` attribute.
    /// [`XRViewport.x`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/x)
    [[nodiscard]] long x() const;
    /// Getter of the `y` attribute.
    /// [`XRViewport.y`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/y)
    [[nodiscard]] long y() const;
    /// Getter of the `width` attribute.
    /// [`XRViewport.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/width)
    [[nodiscard]] long width() const;
    /// Getter of the `height` attribute.
    /// [`XRViewport.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/height)
    [[nodiscard]] long height() const;
};

