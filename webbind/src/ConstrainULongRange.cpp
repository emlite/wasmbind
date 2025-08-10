#include <webbind/ConstrainULongRange.hpp>

namespace webbind {

ConstrainULongRange::ConstrainULongRange(Handle h) noexcept : ULongRange(emlite::Val::take_ownership(h)) {}
ConstrainULongRange ConstrainULongRange::take_ownership(Handle h) noexcept {
    return ConstrainULongRange(h);
}

ConstrainULongRange::ConstrainULongRange(const emlite::Val &val) noexcept: ULongRange(val) {}

ConstrainULongRange::ConstrainULongRange() noexcept: ULongRange(emlite::Val::object()) {}

ConstrainULongRange ConstrainULongRange::clone() const noexcept { return *this; }

unsigned long ConstrainULongRange::exact() const {
    return emlite::Val::get("exact").as<unsigned long>();
}

void ConstrainULongRange::exact(unsigned long value) {
    emlite::Val::set("exact", value);
}

unsigned long ConstrainULongRange::ideal() const {
    return emlite::Val::get("ideal").as<unsigned long>();
}

void ConstrainULongRange::ideal(unsigned long value) {
    emlite::Val::set("ideal", value);
}


} // namespace webbind