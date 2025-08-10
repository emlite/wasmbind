#include <webbind/Profiler.hpp>
#include <webbind/ProfilerInitOptions.hpp>
#include <webbind/ProfilerTrace.hpp>

namespace webbind {

Profiler Profiler::take_ownership(Handle h) noexcept {
    return Profiler(h);
}

Profiler Profiler::clone() const noexcept { return *this; }

emlite::Val Profiler::instance() noexcept { return emlite::Val::global("Profiler"); }

Profiler::Profiler(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

Profiler::Profiler(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any Profiler::sampleInterval() const {
    return EventTarget::get("sampleInterval").as<jsbind::Any>();
}

bool Profiler::stopped() const {
    return EventTarget::get("stopped").as<bool>();
}

Profiler::Profiler(const ProfilerInitOptions& options) : EventTarget(emlite::Val::global("Profiler").new_(options)) {}

jsbind::Promise<ProfilerTrace> Profiler::stop() {
    return EventTarget::call("stop").as<jsbind::Promise<ProfilerTrace>>();
}


} // namespace webbind