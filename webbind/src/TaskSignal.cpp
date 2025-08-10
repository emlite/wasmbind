#include <webbind/TaskSignal.hpp>
#include <webbind/TaskSignal.hpp>
#include <webbind/TaskSignalAnyInit.hpp>

namespace webbind {

TaskSignal TaskSignal::take_ownership(Handle h) noexcept {
    return TaskSignal(h);
}

TaskSignal TaskSignal::clone() const noexcept { return *this; }

emlite::Val TaskSignal::instance() noexcept { return emlite::Val::global("TaskSignal"); }

TaskSignal::TaskSignal(Handle h) noexcept : AbortSignal(emlite::Val::take_ownership(h)) {}

TaskSignal::TaskSignal(const emlite::Val &val) noexcept: AbortSignal(val) {}

TaskSignal TaskSignal::any(const jsbind::TypedArray<AbortSignal>& signals) {
    return emlite::Val::global("tasksignal").call("any", signals).as<TaskSignal>();
}

TaskSignal TaskSignal::any(const jsbind::TypedArray<AbortSignal>& signals, const TaskSignalAnyInit& init) {
    return emlite::Val::global("tasksignal").call("any", signals, init).as<TaskSignal>();
}

TaskPriority TaskSignal::priority() const {
    return AbortSignal::get("priority").as<TaskPriority>();
}

jsbind::Any TaskSignal::onprioritychange() const {
    return AbortSignal::get("onprioritychange").as<jsbind::Any>();
}

void TaskSignal::onprioritychange(const jsbind::Any& value) {
    AbortSignal::set("onprioritychange", value);
}


} // namespace webbind