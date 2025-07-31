#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The TaskPriorityChangeEvent class.
/// [`TaskPriorityChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEvent)
class TaskPriorityChangeEvent : public Event {
    explicit TaskPriorityChangeEvent(Handle h) noexcept;

public:
    explicit TaskPriorityChangeEvent(const emlite::Val &val) noexcept;
    static TaskPriorityChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] TaskPriorityChangeEvent clone() const noexcept;
    /// The `new TaskPriorityChangeEvent(..)` constructor, creating a new TaskPriorityChangeEvent instance
    TaskPriorityChangeEvent(const jsbind::String& type, const jsbind::Any& priorityChangeEventInitDict);
    /// Getter of the `previousPriority` attribute.
    /// [`TaskPriorityChangeEvent.previousPriority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEvent/previousPriority)
    [[nodiscard]] TaskPriority previousPriority() const;
};

