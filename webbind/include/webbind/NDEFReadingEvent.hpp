#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "NDEFReadingEventInit.hpp"

namespace webbind {

class NDEFMessage;

/// Interface NDEFReadingEvent
/// [`NDEFReadingEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent)
class NDEFReadingEvent : public Event {
    explicit NDEFReadingEvent(Handle h) noexcept;
public:
    explicit NDEFReadingEvent(const emlite::Val &val) noexcept;
    static NDEFReadingEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] NDEFReadingEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NDEFReadingEvent(..)` constructor, creating a new NDEFReadingEvent instance
    NDEFReadingEvent(const jsbind::String& type, const NDEFReadingEventInit& readingEventInitDict);
    /// [`NDEFReadingEvent.serialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent/serialNumber)
    /// [`NDEFReadingEvent.serialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent/serialNumber)
    [[nodiscard]] jsbind::String serialNumber() const;
    /// [`NDEFReadingEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent/message)
    /// [`NDEFReadingEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent/message)
    [[nodiscard]] NDEFMessage message() const;
};

} // namespace webbind