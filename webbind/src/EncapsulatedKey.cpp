#include <webbind/EncapsulatedKey.hpp>
#include <webbind/CryptoKey.hpp>

namespace webbind {

EncapsulatedKey::EncapsulatedKey(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncapsulatedKey EncapsulatedKey::take_ownership(Handle h) noexcept {
    return EncapsulatedKey(h);
}

EncapsulatedKey::EncapsulatedKey(const emlite::Val &val) noexcept: emlite::Val(val) {}

EncapsulatedKey::EncapsulatedKey() noexcept: emlite::Val(emlite::Val::object()) {}

EncapsulatedKey EncapsulatedKey::clone() const noexcept { return *this; }

CryptoKey EncapsulatedKey::sharedKey() const {
    return emlite::Val::get("sharedKey").as<CryptoKey>();
}

void EncapsulatedKey::sharedKey(const CryptoKey& value) {
    emlite::Val::set("sharedKey", value);
}

jsbind::ArrayBuffer EncapsulatedKey::ciphertext() const {
    return emlite::Val::get("ciphertext").as<jsbind::ArrayBuffer>();
}

void EncapsulatedKey::ciphertext(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("ciphertext", value);
}


} // namespace webbind