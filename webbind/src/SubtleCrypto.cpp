#include <webbind/SubtleCrypto.hpp>
#include <webbind/CryptoKey.hpp>
#include <webbind/EncapsulatedKey.hpp>
#include <webbind/EncapsulatedBits.hpp>

namespace webbind {

SubtleCrypto SubtleCrypto::take_ownership(Handle h) noexcept {
    return SubtleCrypto(h);
}

SubtleCrypto SubtleCrypto::clone() const noexcept { return *this; }

emlite::Val SubtleCrypto::instance() noexcept { return emlite::Val::global("SubtleCrypto"); }

SubtleCrypto::SubtleCrypto(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SubtleCrypto::SubtleCrypto(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::encrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data) {
    return emlite::Val::call("encrypt", algorithm, key, data).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::decrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data) {
    return emlite::Val::call("decrypt", algorithm, key, data).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::sign(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data) {
    return emlite::Val::call("sign", algorithm, key, data).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<bool> SubtleCrypto::verify(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& signature, const jsbind::Any& data) {
    return emlite::Val::call("verify", algorithm, key, signature, data).as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::digest(const jsbind::Any& algorithm, const jsbind::Any& data) {
    return emlite::Val::call("digest", algorithm, data).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::Any> SubtleCrypto::generateKey(const jsbind::Any& algorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("generateKey", algorithm, extractable, keyUsages).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<CryptoKey> SubtleCrypto::deriveKey(const jsbind::Any& algorithm, const CryptoKey& baseKey, const jsbind::Any& derivedKeyType, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("deriveKey", algorithm, baseKey, derivedKeyType, extractable, keyUsages).as<jsbind::Promise<CryptoKey>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey) {
    return emlite::Val::call("deriveBits", algorithm, baseKey).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey, unsigned long length) {
    return emlite::Val::call("deriveBits", algorithm, baseKey, length).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<CryptoKey> SubtleCrypto::importKey(const KeyFormat& format, const jsbind::Any& keyData, const jsbind::Any& algorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("importKey", format, keyData, algorithm, extractable, keyUsages).as<jsbind::Promise<CryptoKey>>();
}

jsbind::Promise<jsbind::Any> SubtleCrypto::exportKey(const KeyFormat& format, const CryptoKey& key) {
    return emlite::Val::call("exportKey", format, key).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::wrapKey(const KeyFormat& format, const CryptoKey& key, const CryptoKey& wrappingKey, const jsbind::Any& wrapAlgorithm) {
    return emlite::Val::call("wrapKey", format, key, wrappingKey, wrapAlgorithm).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<CryptoKey> SubtleCrypto::unwrapKey(const KeyFormat& format, const jsbind::Any& wrappedKey, const CryptoKey& unwrappingKey, const jsbind::Any& unwrapAlgorithm, const jsbind::Any& unwrappedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("unwrapKey", format, wrappedKey, unwrappingKey, unwrapAlgorithm, unwrappedKeyAlgorithm, extractable, keyUsages).as<jsbind::Promise<CryptoKey>>();
}

jsbind::Promise<EncapsulatedKey> SubtleCrypto::encapsulateKey(const jsbind::Any& encapsulationAlgorithm, const CryptoKey& encapsulationKey, const jsbind::Any& sharedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("encapsulateKey", encapsulationAlgorithm, encapsulationKey, sharedKeyAlgorithm, extractable, keyUsages).as<jsbind::Promise<EncapsulatedKey>>();
}

jsbind::Promise<EncapsulatedBits> SubtleCrypto::encapsulateBits(const jsbind::Any& encapsulationAlgorithm, const CryptoKey& encapsulationKey) {
    return emlite::Val::call("encapsulateBits", encapsulationAlgorithm, encapsulationKey).as<jsbind::Promise<EncapsulatedBits>>();
}

jsbind::Promise<CryptoKey> SubtleCrypto::decapsulateKey(const jsbind::Any& decapsulationAlgorithm, const CryptoKey& decapsulationKey, const jsbind::Any& ciphertext, const jsbind::Any& sharedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("decapsulateKey", decapsulationAlgorithm, decapsulationKey, ciphertext, sharedKeyAlgorithm, extractable, keyUsages).as<jsbind::Promise<CryptoKey>>();
}

jsbind::Promise<jsbind::ArrayBuffer> SubtleCrypto::decapsulateBits(const jsbind::Any& decapsulationAlgorithm, const CryptoKey& decapsulationKey, const jsbind::Any& ciphertext) {
    return emlite::Val::call("decapsulateBits", decapsulationAlgorithm, decapsulationKey, ciphertext).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<CryptoKey> SubtleCrypto::getPublicKey(const CryptoKey& key, const jsbind::TypedArray<KeyUsage>& keyUsages) {
    return emlite::Val::call("getPublicKey", key, keyUsages).as<jsbind::Promise<CryptoKey>>();
}

bool SubtleCrypto::supports(const jsbind::String& operation, const jsbind::Any& algorithm) {
    return emlite::Val::global("subtlecrypto").call("supports", operation, algorithm).as<bool>();
}

bool SubtleCrypto::supports(const jsbind::String& operation, const jsbind::Any& algorithm, unsigned long length) {
    return emlite::Val::global("subtlecrypto").call("supports", operation, algorithm, length).as<bool>();
}

bool SubtleCrypto::supports(const jsbind::String& operation, const jsbind::Any& algorithm, const jsbind::Any& additionalAlgorithm) {
    return emlite::Val::global("subtlecrypto").call("supports", operation, algorithm, additionalAlgorithm).as<bool>();
}


} // namespace webbind