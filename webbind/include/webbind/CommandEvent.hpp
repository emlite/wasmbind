#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "CommandEventInit.hpp"

namespace webbind {

class Element;

/// Interface CommandEvent
/// [`CommandEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent)
class CommandEvent : public Event {
    explicit CommandEvent(Handle h) noexcept;
public:
    explicit CommandEvent(const emlite::Val &val) noexcept;
    static CommandEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CommandEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CommandEvent(..)` constructor, creating a new CommandEvent instance
    CommandEvent(const jsbind::String& type);
    /// The `new CommandEvent(..)` constructor, creating a new CommandEvent instance
    CommandEvent(const jsbind::String& type, const CommandEventInit& eventInitDict);
    /// [`CommandEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent/source)
    /// [`CommandEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent/source)
    [[nodiscard]] Element source() const;
    /// [`CommandEvent.command`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent/command)
    /// [`CommandEvent.command`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent/command)
    [[nodiscard]] jsbind::String command() const;
};

} // namespace webbind