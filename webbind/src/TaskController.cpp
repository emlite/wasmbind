#include <webbind/TaskController.hpp>


TaskController TaskController::take_ownership(Handle h) noexcept {
        return TaskController(h);
    }
TaskController TaskController::clone() const noexcept { return *this; }
TaskController::TaskController(Handle h) noexcept : AbortController(emlite::Val::take_ownership(h)) {}
TaskController::TaskController(const emlite::Val &val) noexcept: AbortController(val) {}


TaskController::TaskController(const jsbind::Any& init): AbortController(emlite::Val::global("TaskController").new_(init)) {}

jsbind::Undefined TaskController::setPriority(const TaskPriority& priority) {
    return AbortController::call("setPriority", priority).as<jsbind::Undefined>();
}

