#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class DOMRect;

/// Dictionary type WindowControlsOverlayGeometryChangeEventInit
/// [`WindowControlsOverlayGeometryChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/WindowControlsOverlayGeometryChangeEventInit)
class WindowControlsOverlayGeometryChangeEventInit : public EventInit {
  explicit WindowControlsOverlayGeometryChangeEventInit(Handle h) noexcept;
public:
    static WindowControlsOverlayGeometryChangeEventInit take_ownership(Handle h) noexcept;
    explicit WindowControlsOverlayGeometryChangeEventInit(const emlite::Val &val) noexcept;
    WindowControlsOverlayGeometryChangeEventInit() noexcept;
    [[nodiscard]] WindowControlsOverlayGeometryChangeEventInit clone() const noexcept;
    [[nodiscard]] DOMRect titlebarAreaRect() const;
    void titlebarAreaRect(const DOMRect& value);
    [[nodiscard]] bool visible() const;
    void visible(bool value);
};

} // namespace webbind