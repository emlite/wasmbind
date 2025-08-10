#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface XRViewport
/// [`XRViewport`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport)
class XRViewport : public emlite::Val {
    explicit XRViewport(Handle h) noexcept;
public:
    explicit XRViewport(const emlite::Val &val) noexcept;
    static XRViewport take_ownership(Handle h) noexcept;
    [[nodiscard]] XRViewport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRViewport.x`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/x)
    /// [`XRViewport.x`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/x)
    [[nodiscard]] long x() const;
    /// [`XRViewport.y`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/y)
    /// [`XRViewport.y`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/y)
    [[nodiscard]] long y() const;
    /// [`XRViewport.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/width)
    /// [`XRViewport.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/width)
    [[nodiscard]] long width() const;
    /// [`XRViewport.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/height)
    /// [`XRViewport.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport/height)
    [[nodiscard]] long height() const;
};

} // namespace webbind