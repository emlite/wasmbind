#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventModifierInit.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type MouseEventInit
class MouseEventInit : public EventModifierInit {
  explicit MouseEventInit(Handle h) noexcept;
public:
    static MouseEventInit take_ownership(Handle h) noexcept;
    explicit MouseEventInit(const emlite::Val &val) noexcept;
    MouseEventInit() noexcept;
    [[nodiscard]] MouseEventInit clone() const noexcept;
    /// Getter of the `screenX` attribute.
    [[nodiscard]] long screenX() const;
    /// Setter of the `screenX` attribute.
    void screenX(long value);
    /// Getter of the `screenY` attribute.
    [[nodiscard]] long screenY() const;
    /// Setter of the `screenY` attribute.
    void screenY(long value);
    /// Getter of the `clientX` attribute.
    [[nodiscard]] long clientX() const;
    /// Setter of the `clientX` attribute.
    void clientX(long value);
    /// Getter of the `clientY` attribute.
    [[nodiscard]] long clientY() const;
    /// Setter of the `clientY` attribute.
    void clientY(long value);
    /// Getter of the `button` attribute.
    [[nodiscard]] short button() const;
    /// Setter of the `button` attribute.
    void button(short value);
    /// Getter of the `buttons` attribute.
    [[nodiscard]] unsigned short buttons() const;
    /// Setter of the `buttons` attribute.
    void buttons(unsigned short value);
    /// Getter of the `relatedTarget` attribute.
    [[nodiscard]] EventTarget relatedTarget() const;
    /// Setter of the `relatedTarget` attribute.
    void relatedTarget(const EventTarget& value);
};

} // namespace webbind