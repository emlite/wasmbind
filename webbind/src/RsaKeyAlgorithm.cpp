#include <webbind/RsaKeyAlgorithm.hpp>

using emlite::Val;
namespace webbind {

RsaKeyAlgorithm::RsaKeyAlgorithm(Handle h) noexcept : KeyAlgorithm(emlite::Val::take_ownership(h)) {}
RsaKeyAlgorithm RsaKeyAlgorithm::take_ownership(Handle h) noexcept {
        return RsaKeyAlgorithm(h);
    }
RsaKeyAlgorithm::RsaKeyAlgorithm(const emlite::Val &val) noexcept: KeyAlgorithm(val) {}
RsaKeyAlgorithm::RsaKeyAlgorithm() noexcept: KeyAlgorithm(emlite::Val::object()) {}
RsaKeyAlgorithm RsaKeyAlgorithm::clone() const noexcept { return *this; }

unsigned long RsaKeyAlgorithm::modulusLength() const {
    return emlite::Val::get("modulusLength").as<unsigned long>();
}

void RsaKeyAlgorithm::modulusLength(unsigned long value) {
    emlite::Val::set("modulusLength", value);
}

jsbind::Any RsaKeyAlgorithm::publicExponent() const {
    return emlite::Val::get("publicExponent").as<jsbind::Any>();
}

void RsaKeyAlgorithm::publicExponent(const jsbind::Any& value) {
    emlite::Val::set("publicExponent", value);
}


} // namespace webbind