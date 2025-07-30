#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CryptoKey;


class SubtleCrypto : public emlite::Val {
    explicit SubtleCrypto(Handle h) noexcept;

public:
    explicit SubtleCrypto(const emlite::Val &val) noexcept;
    static SubtleCrypto take_ownership(Handle h) noexcept;

    SubtleCrypto clone() const noexcept;
    jsbind::Promise<jsbind::ArrayBuffer> encrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    jsbind::Promise<jsbind::ArrayBuffer> decrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    jsbind::Promise<jsbind::ArrayBuffer> sign(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    jsbind::Promise<bool> verify(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& signature, const jsbind::Any& data);
    jsbind::Promise<jsbind::ArrayBuffer> digest(const jsbind::Any& algorithm, const jsbind::Any& data);
    jsbind::Promise<jsbind::Any> generateKey(const jsbind::Any& algorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    jsbind::Promise<CryptoKey> deriveKey(const jsbind::Any& algorithm, const CryptoKey& baseKey, const jsbind::Any& derivedKeyType, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    jsbind::Promise<jsbind::ArrayBuffer> deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey);
    jsbind::Promise<jsbind::ArrayBuffer> deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey, unsigned long length);
    jsbind::Promise<CryptoKey> importKey(const KeyFormat& format, const jsbind::Any& keyData, const jsbind::Any& algorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
    jsbind::Promise<jsbind::Any> exportKey(const KeyFormat& format, const CryptoKey& key);
    jsbind::Promise<jsbind::ArrayBuffer> wrapKey(const KeyFormat& format, const CryptoKey& key, const CryptoKey& wrappingKey, const jsbind::Any& wrapAlgorithm);
    jsbind::Promise<CryptoKey> unwrapKey(const KeyFormat& format, const jsbind::Any& wrappedKey, const CryptoKey& unwrappingKey, const jsbind::Any& unwrapAlgorithm, const jsbind::Any& unwrappedKeyAlgorithm, bool extractable, const jsbind::TypedArray<KeyUsage>& keyUsages);
};

