#include <webbind/ProfilerTrace.hpp>
#include <webbind/ProfilerFrame.hpp>
#include <webbind/ProfilerStack.hpp>
#include <webbind/ProfilerSample.hpp>

using emlite::Val;
namespace webbind {

ProfilerTrace::ProfilerTrace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProfilerTrace ProfilerTrace::take_ownership(Handle h) noexcept {
        return ProfilerTrace(h);
    }
ProfilerTrace::ProfilerTrace(const emlite::Val &val) noexcept: emlite::Val(val) {}
ProfilerTrace::ProfilerTrace() noexcept: emlite::Val(emlite::Val::object()) {}
ProfilerTrace ProfilerTrace::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> ProfilerTrace::resources() const {
    return emlite::Val::get("resources").as<jsbind::TypedArray<jsbind::Any>>();
}

void ProfilerTrace::resources(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("resources", value);
}

jsbind::TypedArray<ProfilerFrame> ProfilerTrace::frames() const {
    return emlite::Val::get("frames").as<jsbind::TypedArray<ProfilerFrame>>();
}

void ProfilerTrace::frames(const jsbind::TypedArray<ProfilerFrame>& value) {
    emlite::Val::set("frames", value);
}

jsbind::TypedArray<ProfilerStack> ProfilerTrace::stacks() const {
    return emlite::Val::get("stacks").as<jsbind::TypedArray<ProfilerStack>>();
}

void ProfilerTrace::stacks(const jsbind::TypedArray<ProfilerStack>& value) {
    emlite::Val::set("stacks", value);
}

jsbind::TypedArray<ProfilerSample> ProfilerTrace::samples() const {
    return emlite::Val::get("samples").as<jsbind::TypedArray<ProfilerSample>>();
}

void ProfilerTrace::samples(const jsbind::TypedArray<ProfilerSample>& value) {
    emlite::Val::set("samples", value);
}


} // namespace webbind