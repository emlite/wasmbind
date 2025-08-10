#include <webbind/SchedulerPostTaskOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

SchedulerPostTaskOptions::SchedulerPostTaskOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SchedulerPostTaskOptions SchedulerPostTaskOptions::take_ownership(Handle h) noexcept {
    return SchedulerPostTaskOptions(h);
}

SchedulerPostTaskOptions::SchedulerPostTaskOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SchedulerPostTaskOptions::SchedulerPostTaskOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SchedulerPostTaskOptions SchedulerPostTaskOptions::clone() const noexcept { return *this; }

AbortSignal SchedulerPostTaskOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SchedulerPostTaskOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

TaskPriority SchedulerPostTaskOptions::priority() const {
    return emlite::Val::get("priority").as<TaskPriority>();
}

void SchedulerPostTaskOptions::priority(const TaskPriority& value) {
    emlite::Val::set("priority", value);
}

long long SchedulerPostTaskOptions::delay() const {
    return emlite::Val::get("delay").as<long long>();
}

void SchedulerPostTaskOptions::delay(long long value) {
    emlite::Val::set("delay", value);
}


} // namespace webbind