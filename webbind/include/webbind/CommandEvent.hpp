#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Element;


/// The CommandEvent class.
/// [`CommandEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent)
class CommandEvent : public Event {
    explicit CommandEvent(Handle h) noexcept;

public:
    explicit CommandEvent(const emlite::Val &val) noexcept;
    static CommandEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] CommandEvent clone() const noexcept;
    /// The `new CommandEvent(..)` constructor, creating a new CommandEvent instance
    CommandEvent(const jsbind::String& type);
    /// The `new CommandEvent(..)` constructor, creating a new CommandEvent instance
    CommandEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `source` attribute.
    /// [`CommandEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent/source)
    [[nodiscard]] Element source() const;
    /// Getter of the `command` attribute.
    /// [`CommandEvent.command`](https://developer.mozilla.org/en-US/docs/Web/API/CommandEvent/command)
    [[nodiscard]] jsbind::String command() const;
};

