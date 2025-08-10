#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPointReadOnly;
class DOMRectReadOnly;

/// Dictionary type GamepadTouch
/// [`GamepadTouch`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadTouch)
class GamepadTouch : public emlite::Val {
  explicit GamepadTouch(Handle h) noexcept;
public:
    static GamepadTouch take_ownership(Handle h) noexcept;
    explicit GamepadTouch(const emlite::Val &val) noexcept;
    GamepadTouch() noexcept;
    [[nodiscard]] GamepadTouch clone() const noexcept;
    [[nodiscard]] unsigned long touchId() const;
    void touchId(unsigned long value);
    [[nodiscard]] unsigned char surfaceId() const;
    void surfaceId(unsigned char value);
    [[nodiscard]] DOMPointReadOnly position() const;
    void position(const DOMPointReadOnly& value);
    [[nodiscard]] DOMRectReadOnly surfaceDimensions() const;
    void surfaceDimensions(const DOMRectReadOnly& value);
};

} // namespace webbind