#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "BufferedChangeEventInit.hpp"

namespace webbind {

class TimeRanges;

/// Interface BufferedChangeEvent
/// [`BufferedChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent)
class BufferedChangeEvent : public Event {
    explicit BufferedChangeEvent(Handle h) noexcept;
public:
    explicit BufferedChangeEvent(const emlite::Val &val) noexcept;
    static BufferedChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] BufferedChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BufferedChangeEvent(..)` constructor, creating a new BufferedChangeEvent instance
    BufferedChangeEvent(const jsbind::String& type);
    /// The `new BufferedChangeEvent(..)` constructor, creating a new BufferedChangeEvent instance
    BufferedChangeEvent(const jsbind::String& type, const BufferedChangeEventInit& eventInitDict);
    /// [`BufferedChangeEvent.addedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent/addedRanges)
    /// [`BufferedChangeEvent.addedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent/addedRanges)
    [[nodiscard]] TimeRanges addedRanges() const;
    /// [`BufferedChangeEvent.removedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent/removedRanges)
    /// [`BufferedChangeEvent.removedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent/removedRanges)
    [[nodiscard]] TimeRanges removedRanges() const;
};

} // namespace webbind