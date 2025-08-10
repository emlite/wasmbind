#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "enums.hpp"

namespace webbind {

class TaskPriorityChangeEventInit;

/// Interface TaskPriorityChangeEvent
/// [`TaskPriorityChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEvent)
class TaskPriorityChangeEvent : public Event {
    explicit TaskPriorityChangeEvent(Handle h) noexcept;
public:
    explicit TaskPriorityChangeEvent(const emlite::Val &val) noexcept;
    static TaskPriorityChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TaskPriorityChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TaskPriorityChangeEvent(..)` constructor, creating a new TaskPriorityChangeEvent instance
    TaskPriorityChangeEvent(const jsbind::String& type, const TaskPriorityChangeEventInit& priorityChangeEventInitDict);
    /// [`TaskPriorityChangeEvent.previousPriority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEvent/previousPriority)
    /// [`TaskPriorityChangeEvent.previousPriority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriorityChangeEvent/previousPriority)
    [[nodiscard]] TaskPriority previousPriority() const;
};

} // namespace webbind