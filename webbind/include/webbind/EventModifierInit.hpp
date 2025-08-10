#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

/// Dictionary type EventModifierInit
/// [`EventModifierInit`](https://developer.mozilla.org/en-US/docs/Web/API/EventModifierInit)
class EventModifierInit : public UIEventInit {
  explicit EventModifierInit(Handle h) noexcept;
public:
    static EventModifierInit take_ownership(Handle h) noexcept;
    explicit EventModifierInit(const emlite::Val &val) noexcept;
    EventModifierInit() noexcept;
    [[nodiscard]] EventModifierInit clone() const noexcept;
    [[nodiscard]] bool ctrlKey() const;
    void ctrlKey(bool value);
    [[nodiscard]] bool shiftKey() const;
    void shiftKey(bool value);
    [[nodiscard]] bool altKey() const;
    void altKey(bool value);
    [[nodiscard]] bool metaKey() const;
    void metaKey(bool value);
    [[nodiscard]] bool modifierAltGraph() const;
    void modifierAltGraph(bool value);
    [[nodiscard]] bool modifierCapsLock() const;
    void modifierCapsLock(bool value);
    [[nodiscard]] bool modifierFn() const;
    void modifierFn(bool value);
    [[nodiscard]] bool modifierFnLock() const;
    void modifierFnLock(bool value);
    [[nodiscard]] bool modifierHyper() const;
    void modifierHyper(bool value);
    [[nodiscard]] bool modifierNumLock() const;
    void modifierNumLock(bool value);
    [[nodiscard]] bool modifierScrollLock() const;
    void modifierScrollLock(bool value);
    [[nodiscard]] bool modifierSuper() const;
    void modifierSuper(bool value);
    [[nodiscard]] bool modifierSymbol() const;
    void modifierSymbol(bool value);
    [[nodiscard]] bool modifierSymbolLock() const;
    void modifierSymbolLock(bool value);
};

} // namespace webbind