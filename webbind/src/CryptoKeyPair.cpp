#include <webbind/CryptoKeyPair.hpp>
#include <webbind/CryptoKey.hpp>

namespace webbind {

CryptoKeyPair::CryptoKeyPair(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CryptoKeyPair CryptoKeyPair::take_ownership(Handle h) noexcept {
    return CryptoKeyPair(h);
}

CryptoKeyPair::CryptoKeyPair(const emlite::Val &val) noexcept: emlite::Val(val) {}

CryptoKeyPair::CryptoKeyPair() noexcept: emlite::Val(emlite::Val::object()) {}

CryptoKeyPair CryptoKeyPair::clone() const noexcept { return *this; }

CryptoKey CryptoKeyPair::publicKey() const {
    return emlite::Val::get("publicKey").as<CryptoKey>();
}

void CryptoKeyPair::publicKey(const CryptoKey& value) {
    emlite::Val::set("publicKey", value);
}

CryptoKey CryptoKeyPair::privateKey() const {
    return emlite::Val::get("privateKey").as<CryptoKey>();
}

void CryptoKeyPair::privateKey(const CryptoKey& value) {
    emlite::Val::set("privateKey", value);
}


} // namespace webbind