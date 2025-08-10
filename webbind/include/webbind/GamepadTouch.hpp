#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPointReadOnly;
class DOMRectReadOnly;

/// Dictionary type GamepadTouch
class GamepadTouch : public emlite::Val {
  explicit GamepadTouch(Handle h) noexcept;
public:
    static GamepadTouch take_ownership(Handle h) noexcept;
    explicit GamepadTouch(const emlite::Val &val) noexcept;
    GamepadTouch() noexcept;
    [[nodiscard]] GamepadTouch clone() const noexcept;
    /// Getter of the `touchId` attribute.
    [[nodiscard]] unsigned long touchId() const;
    /// Setter of the `touchId` attribute.
    void touchId(unsigned long value);
    /// Getter of the `surfaceId` attribute.
    [[nodiscard]] unsigned char surfaceId() const;
    /// Setter of the `surfaceId` attribute.
    void surfaceId(unsigned char value);
    /// Getter of the `position` attribute.
    [[nodiscard]] DOMPointReadOnly position() const;
    /// Setter of the `position` attribute.
    void position(const DOMPointReadOnly& value);
    /// Getter of the `surfaceDimensions` attribute.
    [[nodiscard]] DOMRectReadOnly surfaceDimensions() const;
    /// Setter of the `surfaceDimensions` attribute.
    void surfaceDimensions(const DOMRectReadOnly& value);
};

} // namespace webbind