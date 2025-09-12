#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class CryptoKey;
class EncapsulatedKey;
class EncapsulatedBits;

/// Interface SubtleCrypto
/// [`SubtleCrypto`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto)
class SubtleCrypto : public emlite::Val {
    explicit SubtleCrypto(Handle h) noexcept;
public:
    explicit SubtleCrypto(const emlite::Val &val) noexcept;
    static SubtleCrypto take_ownership(Handle h) noexcept;
    [[nodiscard]] SubtleCrypto clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The encrypt method.
    /// [`SubtleCrypto.encrypt`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/encrypt)
    jsbind::Promise<jsbind::ArrayBuffer> encrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    /// The decrypt method.
    /// [`SubtleCrypto.decrypt`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/decrypt)
    jsbind::Promise<jsbind::ArrayBuffer> decrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    /// The sign method.
    /// [`SubtleCrypto.sign`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/sign)
    jsbind::Promise<jsbind::ArrayBuffer> sign(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    /// The verify method.
    /// [`SubtleCrypto.verify`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/verify)
    jsbind::Promise<bool> verify(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& signature, const jsbind::Any& data);
    /// The digest method.
    /// [`SubtleCrypto.digest`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/digest)
    jsbind::Promise<jsbind::ArrayBuffer> digest(const jsbind::Any& algorithm, const jsbind::Any& data);
    /// The generateKey method.
    /// [`SubtleCrypto.generateKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/generateKey)
    jsbind::Promise<jsbind::Any> generateKey(const jsbind::Any& algorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The deriveKey method.
    /// [`SubtleCrypto.deriveKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/deriveKey)
    jsbind::Promise<CryptoKey> deriveKey(const jsbind::Any& algorithm, const CryptoKey& baseKey, const jsbind::Any& derivedKeyType, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The deriveBits method.
    /// [`SubtleCrypto.deriveBits`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/deriveBits)
    jsbind::Promise<jsbind::ArrayBuffer> deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey);
    /// The deriveBits method.
    /// [`SubtleCrypto.deriveBits`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/deriveBits)
    jsbind::Promise<jsbind::ArrayBuffer> deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey, unsigned long length);
    /// The importKey method.
    /// [`SubtleCrypto.importKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/importKey)
    jsbind::Promise<CryptoKey> importKey(const KeyFormat& format, const jsbind::Any& keyData, const jsbind::Any& algorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The exportKey method.
    /// [`SubtleCrypto.exportKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/exportKey)
    jsbind::Promise<jsbind::Any> exportKey(const KeyFormat& format, const CryptoKey& key);
    /// The wrapKey method.
    /// [`SubtleCrypto.wrapKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/wrapKey)
    jsbind::Promise<jsbind::ArrayBuffer> wrapKey(const KeyFormat& format, const CryptoKey& key, const CryptoKey& wrappingKey, const jsbind::Any& wrapAlgorithm);
    /// The unwrapKey method.
    /// [`SubtleCrypto.unwrapKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/unwrapKey)
    jsbind::Promise<CryptoKey> unwrapKey(const KeyFormat& format, const jsbind::Any& wrappedKey, const CryptoKey& unwrappingKey, const jsbind::Any& unwrapAlgorithm, const jsbind::Any& unwrappedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The encapsulateKey method.
    /// [`SubtleCrypto.encapsulateKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/encapsulateKey)
    jsbind::Promise<EncapsulatedKey> encapsulateKey(const jsbind::Any& encapsulationAlgorithm, const CryptoKey& encapsulationKey, const jsbind::Any& sharedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The encapsulateBits method.
    /// [`SubtleCrypto.encapsulateBits`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/encapsulateBits)
    jsbind::Promise<EncapsulatedBits> encapsulateBits(const jsbind::Any& encapsulationAlgorithm, const CryptoKey& encapsulationKey);
    /// The decapsulateKey method.
    /// [`SubtleCrypto.decapsulateKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/decapsulateKey)
    jsbind::Promise<CryptoKey> decapsulateKey(const jsbind::Any& decapsulationAlgorithm, const CryptoKey& decapsulationKey, const jsbind::Any& ciphertext, const jsbind::Any& sharedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The decapsulateBits method.
    /// [`SubtleCrypto.decapsulateBits`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/decapsulateBits)
    jsbind::Promise<jsbind::ArrayBuffer> decapsulateBits(const jsbind::Any& decapsulationAlgorithm, const CryptoKey& decapsulationKey, const jsbind::Any& ciphertext);
    /// The getPublicKey method.
    /// [`SubtleCrypto.getPublicKey`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/getPublicKey)
    jsbind::Promise<CryptoKey> getPublicKey(const CryptoKey& key, const jsbind::TypedArray<KeyUsage>& keyUsages);
    /// The supports method.
    /// [`SubtleCrypto.supports`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/supports)
    static bool supports(const jsbind::String& operation, const jsbind::Any& algorithm);
    /// The supports method.
    /// [`SubtleCrypto.supports`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/supports)
    static bool supports(const jsbind::String& operation, const jsbind::Any& algorithm, unsigned long length);
    /// The supports method.
    /// [`SubtleCrypto.supports`](https://developer.mozilla.org/en-US/docs/Web/API/SubtleCrypto/supports)
    static bool supports(const jsbind::String& operation, const jsbind::Any& algorithm, const jsbind::Any& additionalAlgorithm);
};

} // namespace webbind