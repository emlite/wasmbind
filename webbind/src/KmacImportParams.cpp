#include <webbind/KmacImportParams.hpp>

namespace webbind {

KmacImportParams::KmacImportParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
KmacImportParams KmacImportParams::take_ownership(Handle h) noexcept {
    return KmacImportParams(h);
}

KmacImportParams::KmacImportParams(const emlite::Val &val) noexcept: Algorithm(val) {}

KmacImportParams::KmacImportParams() noexcept: Algorithm(emlite::Val::object()) {}

KmacImportParams KmacImportParams::clone() const noexcept { return *this; }

unsigned long KmacImportParams::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void KmacImportParams::length(unsigned long value) {
    emlite::Val::set("length", value);
}


} // namespace webbind