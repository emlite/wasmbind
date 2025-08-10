#include <webbind/ProfilerInitOptions.hpp>

using emlite::Val;
namespace webbind {

ProfilerInitOptions::ProfilerInitOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProfilerInitOptions ProfilerInitOptions::take_ownership(Handle h) noexcept {
        return ProfilerInitOptions(h);
    }
ProfilerInitOptions::ProfilerInitOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ProfilerInitOptions::ProfilerInitOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ProfilerInitOptions ProfilerInitOptions::clone() const noexcept { return *this; }

jsbind::Any ProfilerInitOptions::sampleInterval() const {
    return emlite::Val::get("sampleInterval").as<jsbind::Any>();
}

void ProfilerInitOptions::sampleInterval(const jsbind::Any& value) {
    emlite::Val::set("sampleInterval", value);
}

unsigned long ProfilerInitOptions::maxBufferSize() const {
    return emlite::Val::get("maxBufferSize").as<unsigned long>();
}

void ProfilerInitOptions::maxBufferSize(unsigned long value) {
    emlite::Val::set("maxBufferSize", value);
}


} // namespace webbind