#include <webbind/TaskPriorityChangeEvent.hpp>


TaskPriorityChangeEvent TaskPriorityChangeEvent::take_ownership(Handle h) noexcept {
        return TaskPriorityChangeEvent(h);
    }
TaskPriorityChangeEvent TaskPriorityChangeEvent::clone() const noexcept { return *this; }
TaskPriorityChangeEvent::TaskPriorityChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TaskPriorityChangeEvent::TaskPriorityChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


TaskPriorityChangeEvent::TaskPriorityChangeEvent(const jsbind::DOMString& type, const jsbind::Any& priorityChangeEventInitDict): Event(emlite::Val::global("TaskPriorityChangeEvent").new_(type, priorityChangeEventInitDict)) {}

TaskPriority TaskPriorityChangeEvent::previousPriority() const {
    return Event::get("previousPriority").as<TaskPriority>();
}

