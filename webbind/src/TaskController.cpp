#include "webbind/TaskController.hpp"
#include "webbind/TaskControllerInit.hpp"

namespace webbind {

TaskController TaskController::take_ownership(Handle h) noexcept {
        return TaskController(h);
    }
TaskController TaskController::clone() const noexcept { return *this; }
emlite::Val TaskController::instance() noexcept { return emlite::Val::global("TaskController"); }
TaskController::TaskController(Handle h) noexcept : AbortController(emlite::Val::take_ownership(h)) {}
TaskController::TaskController(const emlite::Val &val) noexcept: AbortController(val) {}

TaskController::TaskController() : AbortController(emlite::Val::global("TaskController").new_()) {}

TaskController::TaskController(const TaskControllerInit& init) : AbortController(emlite::Val::global("TaskController").new_(init)) {}

jsbind::Undefined TaskController::setPriority(const TaskPriority& priority) {
    return AbortController::call("setPriority", priority).as<jsbind::Undefined>();
}


} // namespace webbind