#include "webbind/Scheduler.hpp"
#include "webbind/SchedulerPostTaskOptions.hpp"

namespace webbind {

Scheduler Scheduler::take_ownership(Handle h) noexcept {
        return Scheduler(h);
    }
Scheduler Scheduler::clone() const noexcept { return *this; }
emlite::Val Scheduler::instance() noexcept { return emlite::Val::global("Scheduler"); }
Scheduler::Scheduler(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Scheduler::Scheduler(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Any> Scheduler::postTask(const jsbind::Function& callback) {
    return emlite::Val::call("postTask", callback).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Scheduler::postTask(const jsbind::Function& callback, const SchedulerPostTaskOptions& options) {
    return emlite::Val::call("postTask", callback, options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Undefined> Scheduler::yield() {
    return emlite::Val::call("yield").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind