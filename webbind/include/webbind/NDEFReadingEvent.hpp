#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NDEFMessage;


/// The NDEFReadingEvent class.
/// [`NDEFReadingEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent)
class NDEFReadingEvent : public Event {
    explicit NDEFReadingEvent(Handle h) noexcept;

public:
    explicit NDEFReadingEvent(const emlite::Val &val) noexcept;
    static NDEFReadingEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] NDEFReadingEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NDEFReadingEvent(..)` constructor, creating a new NDEFReadingEvent instance
    NDEFReadingEvent(const jsbind::String& type, const jsbind::Any& readingEventInitDict);
    /// Getter of the `serialNumber` attribute.
    /// [`NDEFReadingEvent.serialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent/serialNumber)
    [[nodiscard]] jsbind::String serialNumber() const;
    /// Getter of the `message` attribute.
    /// [`NDEFReadingEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent/message)
    [[nodiscard]] NDEFMessage message() const;
};

