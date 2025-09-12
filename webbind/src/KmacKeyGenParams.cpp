#include <webbind/KmacKeyGenParams.hpp>

namespace webbind {

KmacKeyGenParams::KmacKeyGenParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
KmacKeyGenParams KmacKeyGenParams::take_ownership(Handle h) noexcept {
    return KmacKeyGenParams(h);
}

KmacKeyGenParams::KmacKeyGenParams(const emlite::Val &val) noexcept: Algorithm(val) {}

KmacKeyGenParams::KmacKeyGenParams() noexcept: Algorithm(emlite::Val::object()) {}

KmacKeyGenParams KmacKeyGenParams::clone() const noexcept { return *this; }

unsigned long KmacKeyGenParams::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void KmacKeyGenParams::length(unsigned long value) {
    emlite::Val::set("length", value);
}


} // namespace webbind