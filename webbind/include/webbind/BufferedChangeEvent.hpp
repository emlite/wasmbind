#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class TimeRanges;


/// The BufferedChangeEvent class.
/// [`BufferedChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent)
class BufferedChangeEvent : public Event {
    explicit BufferedChangeEvent(Handle h) noexcept;

public:
    explicit BufferedChangeEvent(const emlite::Val &val) noexcept;
    static BufferedChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] BufferedChangeEvent clone() const noexcept;
    /// The `new BufferedChangeEvent(..)` constructor, creating a new BufferedChangeEvent instance
    BufferedChangeEvent(const jsbind::String& type);
    /// The `new BufferedChangeEvent(..)` constructor, creating a new BufferedChangeEvent instance
    BufferedChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `addedRanges` attribute.
    /// [`BufferedChangeEvent.addedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent/addedRanges)
    [[nodiscard]] TimeRanges addedRanges() const;
    /// Getter of the `removedRanges` attribute.
    /// [`BufferedChangeEvent.removedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent/removedRanges)
    [[nodiscard]] TimeRanges removedRanges() const;
};

