#include <webbind/MemoryBreakdownEntry.hpp>
#include <webbind/MemoryAttribution.hpp>

namespace webbind {

MemoryBreakdownEntry::MemoryBreakdownEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MemoryBreakdownEntry MemoryBreakdownEntry::take_ownership(Handle h) noexcept {
    return MemoryBreakdownEntry(h);
}

MemoryBreakdownEntry::MemoryBreakdownEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}

MemoryBreakdownEntry::MemoryBreakdownEntry() noexcept: emlite::Val(emlite::Val::object()) {}

MemoryBreakdownEntry MemoryBreakdownEntry::clone() const noexcept { return *this; }

long long MemoryBreakdownEntry::bytes() const {
    return emlite::Val::get("bytes").as<long long>();
}

void MemoryBreakdownEntry::bytes(long long value) {
    emlite::Val::set("bytes", value);
}

jsbind::TypedArray<MemoryAttribution> MemoryBreakdownEntry::attribution() const {
    return emlite::Val::get("attribution").as<jsbind::TypedArray<MemoryAttribution>>();
}

void MemoryBreakdownEntry::attribution(const jsbind::TypedArray<MemoryAttribution>& value) {
    emlite::Val::set("attribution", value);
}

jsbind::TypedArray<jsbind::String> MemoryBreakdownEntry::types() const {
    return emlite::Val::get("types").as<jsbind::TypedArray<jsbind::String>>();
}

void MemoryBreakdownEntry::types(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("types", value);
}


} // namespace webbind