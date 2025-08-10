#include "webbind/HmacKeyAlgorithm.hpp"
#include "webbind/KeyAlgorithm.hpp"

using emlite::Val;
namespace webbind {

HmacKeyAlgorithm::HmacKeyAlgorithm(Handle h) noexcept : KeyAlgorithm(emlite::Val::take_ownership(h)) {}
HmacKeyAlgorithm HmacKeyAlgorithm::take_ownership(Handle h) noexcept {
        return HmacKeyAlgorithm(h);
    }
HmacKeyAlgorithm::HmacKeyAlgorithm(const emlite::Val &val) noexcept: KeyAlgorithm(val) {}
HmacKeyAlgorithm::HmacKeyAlgorithm() noexcept: KeyAlgorithm(emlite::Val::object()) {}
HmacKeyAlgorithm HmacKeyAlgorithm::clone() const noexcept { return *this; }

KeyAlgorithm HmacKeyAlgorithm::hash() const {
    return emlite::Val::get("hash").as<KeyAlgorithm>();
}

void HmacKeyAlgorithm::hash(const KeyAlgorithm& value) {
    emlite::Val::set("hash", value);
}

unsigned long HmacKeyAlgorithm::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void HmacKeyAlgorithm::length(unsigned long value) {
    emlite::Val::set("length", value);
}


} // namespace webbind