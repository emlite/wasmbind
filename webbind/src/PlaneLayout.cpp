#include <webbind/PlaneLayout.hpp>

namespace webbind {

PlaneLayout::PlaneLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PlaneLayout PlaneLayout::take_ownership(Handle h) noexcept {
    return PlaneLayout(h);
}

PlaneLayout::PlaneLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}

PlaneLayout::PlaneLayout() noexcept: emlite::Val(emlite::Val::object()) {}

PlaneLayout PlaneLayout::clone() const noexcept { return *this; }

unsigned long PlaneLayout::offset() const {
    return emlite::Val::get("offset").as<unsigned long>();
}

void PlaneLayout::offset(unsigned long value) {
    emlite::Val::set("offset", value);
}

unsigned long PlaneLayout::stride() const {
    return emlite::Val::get("stride").as<unsigned long>();
}

void PlaneLayout::stride(unsigned long value) {
    emlite::Val::set("stride", value);
}


} // namespace webbind