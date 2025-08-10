#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EventInit
class EventInit : public emlite::Val {
  explicit EventInit(Handle h) noexcept;
public:
    static EventInit take_ownership(Handle h) noexcept;
    explicit EventInit(const emlite::Val &val) noexcept;
    EventInit() noexcept;
    [[nodiscard]] EventInit clone() const noexcept;
    /// Getter of the `bubbles` attribute.
    [[nodiscard]] bool bubbles() const;
    /// Setter of the `bubbles` attribute.
    void bubbles(bool value);
    /// Getter of the `cancelable` attribute.
    [[nodiscard]] bool cancelable() const;
    /// Setter of the `cancelable` attribute.
    void cancelable(bool value);
    /// Getter of the `composed` attribute.
    [[nodiscard]] bool composed() const;
    /// Setter of the `composed` attribute.
    void composed(bool value);
};

} // namespace webbind