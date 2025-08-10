#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRCompositionLayer.hpp"

namespace webbind {

class XRSpace;
class DOMPointReadOnly;

/// Interface XRCubeLayer
/// [`XRCubeLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer)
class XRCubeLayer : public XRCompositionLayer {
    explicit XRCubeLayer(Handle h) noexcept;
public:
    explicit XRCubeLayer(const emlite::Val &val) noexcept;
    static XRCubeLayer take_ownership(Handle h) noexcept;
    [[nodiscard]] XRCubeLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `space` attribute.
    /// [`XRCubeLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer/space)
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    /// [`XRCubeLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer/space)
    void space(const XRSpace& value);
    /// Getter of the `orientation` attribute.
    /// [`XRCubeLayer.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer/orientation)
    [[nodiscard]] DOMPointReadOnly orientation() const;
    /// Setter of the `orientation` attribute.
    /// [`XRCubeLayer.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer/orientation)
    void orientation(const DOMPointReadOnly& value);
    /// Getter of the `onredraw` attribute.
    /// [`XRCubeLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer/onredraw)
    [[nodiscard]] jsbind::Any onredraw() const;
    /// Setter of the `onredraw` attribute.
    /// [`XRCubeLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer/onredraw)
    void onredraw(const jsbind::Any& value);
};

} // namespace webbind