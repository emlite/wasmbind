#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

/// Dictionary type EventModifierInit
class EventModifierInit : public UIEventInit {
  explicit EventModifierInit(Handle h) noexcept;
public:
    static EventModifierInit take_ownership(Handle h) noexcept;
    explicit EventModifierInit(const emlite::Val &val) noexcept;
    EventModifierInit() noexcept;
    [[nodiscard]] EventModifierInit clone() const noexcept;
    /// Getter of the `ctrlKey` attribute.
    [[nodiscard]] bool ctrlKey() const;
    /// Setter of the `ctrlKey` attribute.
    void ctrlKey(bool value);
    /// Getter of the `shiftKey` attribute.
    [[nodiscard]] bool shiftKey() const;
    /// Setter of the `shiftKey` attribute.
    void shiftKey(bool value);
    /// Getter of the `altKey` attribute.
    [[nodiscard]] bool altKey() const;
    /// Setter of the `altKey` attribute.
    void altKey(bool value);
    /// Getter of the `metaKey` attribute.
    [[nodiscard]] bool metaKey() const;
    /// Setter of the `metaKey` attribute.
    void metaKey(bool value);
    /// Getter of the `modifierAltGraph` attribute.
    [[nodiscard]] bool modifierAltGraph() const;
    /// Setter of the `modifierAltGraph` attribute.
    void modifierAltGraph(bool value);
    /// Getter of the `modifierCapsLock` attribute.
    [[nodiscard]] bool modifierCapsLock() const;
    /// Setter of the `modifierCapsLock` attribute.
    void modifierCapsLock(bool value);
    /// Getter of the `modifierFn` attribute.
    [[nodiscard]] bool modifierFn() const;
    /// Setter of the `modifierFn` attribute.
    void modifierFn(bool value);
    /// Getter of the `modifierFnLock` attribute.
    [[nodiscard]] bool modifierFnLock() const;
    /// Setter of the `modifierFnLock` attribute.
    void modifierFnLock(bool value);
    /// Getter of the `modifierHyper` attribute.
    [[nodiscard]] bool modifierHyper() const;
    /// Setter of the `modifierHyper` attribute.
    void modifierHyper(bool value);
    /// Getter of the `modifierNumLock` attribute.
    [[nodiscard]] bool modifierNumLock() const;
    /// Setter of the `modifierNumLock` attribute.
    void modifierNumLock(bool value);
    /// Getter of the `modifierScrollLock` attribute.
    [[nodiscard]] bool modifierScrollLock() const;
    /// Setter of the `modifierScrollLock` attribute.
    void modifierScrollLock(bool value);
    /// Getter of the `modifierSuper` attribute.
    [[nodiscard]] bool modifierSuper() const;
    /// Setter of the `modifierSuper` attribute.
    void modifierSuper(bool value);
    /// Getter of the `modifierSymbol` attribute.
    [[nodiscard]] bool modifierSymbol() const;
    /// Setter of the `modifierSymbol` attribute.
    void modifierSymbol(bool value);
    /// Getter of the `modifierSymbolLock` attribute.
    [[nodiscard]] bool modifierSymbolLock() const;
    /// Setter of the `modifierSymbolLock` attribute.
    void modifierSymbolLock(bool value);
};

} // namespace webbind