#include <webbind/ProfilerStack.hpp>

namespace webbind {

ProfilerStack::ProfilerStack(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProfilerStack ProfilerStack::take_ownership(Handle h) noexcept {
    return ProfilerStack(h);
}

ProfilerStack::ProfilerStack(const emlite::Val &val) noexcept: emlite::Val(val) {}

ProfilerStack::ProfilerStack() noexcept: emlite::Val(emlite::Val::object()) {}

ProfilerStack ProfilerStack::clone() const noexcept { return *this; }

long long ProfilerStack::parentId() const {
    return emlite::Val::get("parentId").as<long long>();
}

void ProfilerStack::parentId(long long value) {
    emlite::Val::set("parentId", value);
}

long long ProfilerStack::frameId() const {
    return emlite::Val::get("frameId").as<long long>();
}

void ProfilerStack::frameId(long long value) {
    emlite::Val::set("frameId", value);
}


} // namespace webbind