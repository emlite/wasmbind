#include <webbind/TaskPriorityChangeEvent.hpp>
#include <webbind/TaskPriorityChangeEventInit.hpp>

namespace webbind {

TaskPriorityChangeEvent TaskPriorityChangeEvent::take_ownership(Handle h) noexcept {
        return TaskPriorityChangeEvent(h);
    }
TaskPriorityChangeEvent TaskPriorityChangeEvent::clone() const noexcept { return *this; }
emlite::Val TaskPriorityChangeEvent::instance() noexcept { return emlite::Val::global("TaskPriorityChangeEvent"); }
TaskPriorityChangeEvent::TaskPriorityChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TaskPriorityChangeEvent::TaskPriorityChangeEvent(const emlite::Val &val) noexcept: Event(val) {}

TaskPriorityChangeEvent::TaskPriorityChangeEvent(const jsbind::String& type, const TaskPriorityChangeEventInit& priorityChangeEventInitDict) : Event(emlite::Val::global("TaskPriorityChangeEvent").new_(type, priorityChangeEventInitDict)) {}

TaskPriority TaskPriorityChangeEvent::previousPriority() const {
    return Event::get("previousPriority").as<TaskPriority>();
}


} // namespace webbind