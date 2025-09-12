#include <webbind/KmacKeyAlgorithm.hpp>

namespace webbind {

KmacKeyAlgorithm::KmacKeyAlgorithm(Handle h) noexcept : KeyAlgorithm(emlite::Val::take_ownership(h)) {}
KmacKeyAlgorithm KmacKeyAlgorithm::take_ownership(Handle h) noexcept {
    return KmacKeyAlgorithm(h);
}

KmacKeyAlgorithm::KmacKeyAlgorithm(const emlite::Val &val) noexcept: KeyAlgorithm(val) {}

KmacKeyAlgorithm::KmacKeyAlgorithm() noexcept: KeyAlgorithm(emlite::Val::object()) {}

KmacKeyAlgorithm KmacKeyAlgorithm::clone() const noexcept { return *this; }

unsigned long KmacKeyAlgorithm::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void KmacKeyAlgorithm::length(unsigned long value) {
    emlite::Val::set("length", value);
}


} // namespace webbind