#include <webbind/ProfilerSample.hpp>

namespace webbind {

ProfilerSample::ProfilerSample(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProfilerSample ProfilerSample::take_ownership(Handle h) noexcept {
    return ProfilerSample(h);
}

ProfilerSample::ProfilerSample(const emlite::Val &val) noexcept: emlite::Val(val) {}

ProfilerSample::ProfilerSample() noexcept: emlite::Val(emlite::Val::object()) {}

ProfilerSample ProfilerSample::clone() const noexcept { return *this; }

jsbind::Any ProfilerSample::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

void ProfilerSample::timestamp(const jsbind::Any& value) {
    emlite::Val::set("timestamp", value);
}

long long ProfilerSample::stackId() const {
    return emlite::Val::get("stackId").as<long long>();
}

void ProfilerSample::stackId(long long value) {
    emlite::Val::set("stackId", value);
}


} // namespace webbind