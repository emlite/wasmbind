#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Event;

/// Callback interface EventListener
/// Generated wrapper for WebIDL `callback interface EventListener`
class EventListener : public emlite::Val {
    explicit EventListener(Handle h) noexcept;
public:
    explicit EventListener(const emlite::Val &val) noexcept;
    static EventListener take_ownership(Handle h) noexcept;
    [[nodiscard]] EventListener clone() const noexcept;

    // Converting constructors from functions
    EventListener(const jsbind::Function &fn) noexcept;
    EventListener(const jsbind::Function::Fn<jsbind::Undefined(Event)> &fn) noexcept;

    [[nodiscard]] jsbind::Undefined handleEvent(const Event& event) const;
};

} // namespace webbind