#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventModifierInit.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type MouseEventInit
/// [`MouseEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/MouseEventInit)
class MouseEventInit : public EventModifierInit {
  explicit MouseEventInit(Handle h) noexcept;
public:
    static MouseEventInit take_ownership(Handle h) noexcept;
    explicit MouseEventInit(const emlite::Val &val) noexcept;
    MouseEventInit() noexcept;
    [[nodiscard]] MouseEventInit clone() const noexcept;
    [[nodiscard]] long screenX() const;
    void screenX(long value);
    [[nodiscard]] long screenY() const;
    void screenY(long value);
    [[nodiscard]] long clientX() const;
    void clientX(long value);
    [[nodiscard]] long clientY() const;
    void clientY(long value);
    [[nodiscard]] short button() const;
    void button(short value);
    [[nodiscard]] unsigned short buttons() const;
    void buttons(unsigned short value);
    [[nodiscard]] EventTarget relatedTarget() const;
    void relatedTarget(const EventTarget& value);
};

} // namespace webbind