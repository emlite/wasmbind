#include "webbind/ProfilerFrame.hpp"

using emlite::Val;
namespace webbind {

ProfilerFrame::ProfilerFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProfilerFrame ProfilerFrame::take_ownership(Handle h) noexcept {
        return ProfilerFrame(h);
    }
ProfilerFrame::ProfilerFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}
ProfilerFrame::ProfilerFrame() noexcept: emlite::Val(emlite::Val::object()) {}
ProfilerFrame ProfilerFrame::clone() const noexcept { return *this; }

jsbind::String ProfilerFrame::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void ProfilerFrame::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

long long ProfilerFrame::resourceId() const {
    return emlite::Val::get("resourceId").as<long long>();
}

void ProfilerFrame::resourceId(long long value) {
    emlite::Val::set("resourceId", value);
}

long long ProfilerFrame::line() const {
    return emlite::Val::get("line").as<long long>();
}

void ProfilerFrame::line(long long value) {
    emlite::Val::set("line", value);
}

long long ProfilerFrame::column() const {
    return emlite::Val::get("column").as<long long>();
}

void ProfilerFrame::column(long long value) {
    emlite::Val::set("column", value);
}


} // namespace webbind