#include "webbind/ULongRange.hpp"

using emlite::Val;
namespace webbind {

ULongRange::ULongRange(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ULongRange ULongRange::take_ownership(Handle h) noexcept {
        return ULongRange(h);
    }
ULongRange::ULongRange(const emlite::Val &val) noexcept: emlite::Val(val) {}
ULongRange::ULongRange() noexcept: emlite::Val(emlite::Val::object()) {}
ULongRange ULongRange::clone() const noexcept { return *this; }

unsigned long ULongRange::max() const {
    return emlite::Val::get("max").as<unsigned long>();
}

void ULongRange::max(unsigned long value) {
    emlite::Val::set("max", value);
}

unsigned long ULongRange::min() const {
    return emlite::Val::get("min").as<unsigned long>();
}

void ULongRange::min(unsigned long value) {
    emlite::Val::set("min", value);
}


} // namespace webbind