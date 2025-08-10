#include <webbind/AesKeyAlgorithm.hpp>

using emlite::Val;
namespace webbind {

AesKeyAlgorithm::AesKeyAlgorithm(Handle h) noexcept : KeyAlgorithm(emlite::Val::take_ownership(h)) {}
AesKeyAlgorithm AesKeyAlgorithm::take_ownership(Handle h) noexcept {
        return AesKeyAlgorithm(h);
    }
AesKeyAlgorithm::AesKeyAlgorithm(const emlite::Val &val) noexcept: KeyAlgorithm(val) {}
AesKeyAlgorithm::AesKeyAlgorithm() noexcept: KeyAlgorithm(emlite::Val::object()) {}
AesKeyAlgorithm AesKeyAlgorithm::clone() const noexcept { return *this; }

unsigned short AesKeyAlgorithm::length() const {
    return emlite::Val::get("length").as<unsigned short>();
}

void AesKeyAlgorithm::length(unsigned short value) {
    emlite::Val::set("length", value);
}


} // namespace webbind