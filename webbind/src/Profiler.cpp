#include <webbind/Profiler.hpp>


ProfilerTrace::ProfilerTrace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProfilerTrace ProfilerTrace::take_ownership(Handle h) noexcept {
        return ProfilerTrace(h);
    }
ProfilerTrace::ProfilerTrace(const emlite::Val &val) noexcept: emlite::Val(val) {}
ProfilerTrace::ProfilerTrace() noexcept: emlite::Val(emlite::Val::object()) {}
ProfilerTrace ProfilerTrace::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> ProfilerTrace::resources() const {
    return emlite::Val::get("resources").as<jsbind::Sequence<jsbind::Any>>();
}

void ProfilerTrace::resources(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("resources", value);
}

jsbind::Sequence<jsbind::Any> ProfilerTrace::frames() const {
    return emlite::Val::get("frames").as<jsbind::Sequence<jsbind::Any>>();
}

void ProfilerTrace::frames(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("frames", value);
}

jsbind::Sequence<jsbind::Any> ProfilerTrace::stacks() const {
    return emlite::Val::get("stacks").as<jsbind::Sequence<jsbind::Any>>();
}

void ProfilerTrace::stacks(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("stacks", value);
}

jsbind::Sequence<jsbind::Any> ProfilerTrace::samples() const {
    return emlite::Val::get("samples").as<jsbind::Sequence<jsbind::Any>>();
}

void ProfilerTrace::samples(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("samples", value);
}

Profiler Profiler::take_ownership(Handle h) noexcept {
        return Profiler(h);
    }
Profiler Profiler::clone() const noexcept { return *this; }
Profiler::Profiler(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Profiler::Profiler(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any Profiler::sampleInterval() const {
    return EventTarget::get("sampleInterval").as<jsbind::Any>();
}

bool Profiler::stopped() const {
    return EventTarget::get("stopped").as<bool>();
}

Profiler::Profiler(const jsbind::Any& options) : EventTarget(emlite::Val::global("Profiler").new_(options)) {}

jsbind::Promise<ProfilerTrace> Profiler::stop() {
    return EventTarget::call("stop").as<jsbind::Promise<ProfilerTrace>>();
}

