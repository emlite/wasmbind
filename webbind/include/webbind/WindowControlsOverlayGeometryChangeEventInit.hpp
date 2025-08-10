#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class DOMRect;

/// Dictionary type WindowControlsOverlayGeometryChangeEventInit
class WindowControlsOverlayGeometryChangeEventInit : public EventInit {
  explicit WindowControlsOverlayGeometryChangeEventInit(Handle h) noexcept;
public:
    static WindowControlsOverlayGeometryChangeEventInit take_ownership(Handle h) noexcept;
    explicit WindowControlsOverlayGeometryChangeEventInit(const emlite::Val &val) noexcept;
    WindowControlsOverlayGeometryChangeEventInit() noexcept;
    [[nodiscard]] WindowControlsOverlayGeometryChangeEventInit clone() const noexcept;
    /// Getter of the `titlebarAreaRect` attribute.
    [[nodiscard]] DOMRect titlebarAreaRect() const;
    /// Setter of the `titlebarAreaRect` attribute.
    void titlebarAreaRect(const DOMRect& value);
    /// Getter of the `visible` attribute.
    [[nodiscard]] bool visible() const;
    /// Setter of the `visible` attribute.
    void visible(bool value);
};

} // namespace webbind