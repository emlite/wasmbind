#include "webbind/MemoryMeasurement.hpp"
#include "webbind/MemoryBreakdownEntry.hpp"

using emlite::Val;
namespace webbind {

MemoryMeasurement::MemoryMeasurement(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MemoryMeasurement MemoryMeasurement::take_ownership(Handle h) noexcept {
        return MemoryMeasurement(h);
    }
MemoryMeasurement::MemoryMeasurement(const emlite::Val &val) noexcept: emlite::Val(val) {}
MemoryMeasurement::MemoryMeasurement() noexcept: emlite::Val(emlite::Val::object()) {}
MemoryMeasurement MemoryMeasurement::clone() const noexcept { return *this; }

long long MemoryMeasurement::bytes() const {
    return emlite::Val::get("bytes").as<long long>();
}

void MemoryMeasurement::bytes(long long value) {
    emlite::Val::set("bytes", value);
}

jsbind::TypedArray<MemoryBreakdownEntry> MemoryMeasurement::breakdown() const {
    return emlite::Val::get("breakdown").as<jsbind::TypedArray<MemoryBreakdownEntry>>();
}

void MemoryMeasurement::breakdown(const jsbind::TypedArray<MemoryBreakdownEntry>& value) {
    emlite::Val::set("breakdown", value);
}


} // namespace webbind