#include <webbind/TaskControllerInit.hpp>

namespace webbind {

TaskControllerInit::TaskControllerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TaskControllerInit TaskControllerInit::take_ownership(Handle h) noexcept {
    return TaskControllerInit(h);
}

TaskControllerInit::TaskControllerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

TaskControllerInit::TaskControllerInit() noexcept: emlite::Val(emlite::Val::object()) {}

TaskControllerInit TaskControllerInit::clone() const noexcept { return *this; }

TaskPriority TaskControllerInit::priority() const {
    return emlite::Val::get("priority").as<TaskPriority>();
}

void TaskControllerInit::priority(const TaskPriority& value) {
    emlite::Val::set("priority", value);
}


} // namespace webbind