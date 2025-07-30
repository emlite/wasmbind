#include <webbind/TaskSignal.hpp>


TaskSignalAnyInit::TaskSignalAnyInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TaskSignalAnyInit TaskSignalAnyInit::take_ownership(Handle h) noexcept {
        return TaskSignalAnyInit(h);
    }
TaskSignalAnyInit::TaskSignalAnyInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
TaskSignalAnyInit::TaskSignalAnyInit() noexcept: emlite::Val(emlite::Val::object()) {}
TaskSignalAnyInit TaskSignalAnyInit::clone() const noexcept { return *this; }

jsbind::Any TaskSignalAnyInit::priority() const {
    return emlite::Val::get("priority").as<jsbind::Any>();
}

void TaskSignalAnyInit::priority(const jsbind::Any& value) {
    emlite::Val::set("priority", value);
}

TaskSignal TaskSignal::take_ownership(Handle h) noexcept {
        return TaskSignal(h);
    }
TaskSignal TaskSignal::clone() const noexcept { return *this; }
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

