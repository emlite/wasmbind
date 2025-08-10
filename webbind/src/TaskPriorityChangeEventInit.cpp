#include <webbind/TaskPriorityChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

TaskPriorityChangeEventInit::TaskPriorityChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
TaskPriorityChangeEventInit TaskPriorityChangeEventInit::take_ownership(Handle h) noexcept {
        return TaskPriorityChangeEventInit(h);
    }
TaskPriorityChangeEventInit::TaskPriorityChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
TaskPriorityChangeEventInit::TaskPriorityChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
TaskPriorityChangeEventInit TaskPriorityChangeEventInit::clone() const noexcept { return *this; }

TaskPriority TaskPriorityChangeEventInit::previousPriority() const {
    return emlite::Val::get("previousPriority").as<TaskPriority>();
}

void TaskPriorityChangeEventInit::previousPriority(const TaskPriority& value) {
    emlite::Val::set("previousPriority", value);
}


} // namespace webbind