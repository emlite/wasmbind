#include "webbind/RsaHashedKeyAlgorithm.hpp"
#include "webbind/KeyAlgorithm.hpp"

using emlite::Val;
namespace webbind {

RsaHashedKeyAlgorithm::RsaHashedKeyAlgorithm(Handle h) noexcept : RsaKeyAlgorithm(emlite::Val::take_ownership(h)) {}
RsaHashedKeyAlgorithm RsaHashedKeyAlgorithm::take_ownership(Handle h) noexcept {
        return RsaHashedKeyAlgorithm(h);
    }
RsaHashedKeyAlgorithm::RsaHashedKeyAlgorithm(const emlite::Val &val) noexcept: RsaKeyAlgorithm(val) {}
RsaHashedKeyAlgorithm::RsaHashedKeyAlgorithm() noexcept: RsaKeyAlgorithm(emlite::Val::object()) {}
RsaHashedKeyAlgorithm RsaHashedKeyAlgorithm::clone() const noexcept { return *this; }

KeyAlgorithm RsaHashedKeyAlgorithm::hash() const {
    return emlite::Val::get("hash").as<KeyAlgorithm>();
}

void RsaHashedKeyAlgorithm::hash(const KeyAlgorithm& value) {
    emlite::Val::set("hash", value);
}


} // namespace webbind