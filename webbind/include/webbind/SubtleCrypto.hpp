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
    jsbind::Promise encrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    jsbind::Promise decrypt(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    jsbind::Promise sign(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& data);
    jsbind::Promise verify(const jsbind::Any& algorithm, const CryptoKey& key, const jsbind::Any& signature, const jsbind::Any& data);
    jsbind::Promise digest(const jsbind::Any& algorithm, const jsbind::Any& data);
    jsbind::Promise generateKey(const jsbind::Any& algorithm, bool extractable, const jsbind::Sequence<KeyUsage>& keyUsages);
    jsbind::Promise deriveKey(const jsbind::Any& algorithm, const CryptoKey& baseKey, const jsbind::Any& derivedKeyType, bool extractable, const jsbind::Sequence<KeyUsage>& keyUsages);
    jsbind::Promise deriveBits(const jsbind::Any& algorithm, const CryptoKey& baseKey, unsigned long length);
    jsbind::Promise importKey(const KeyFormat& format, const jsbind::Any& keyData, const jsbind::Any& algorithm, bool extractable, const jsbind::Sequence<KeyUsage>& keyUsages);
    jsbind::Promise exportKey(const KeyFormat& format, const CryptoKey& key);
    jsbind::Promise wrapKey(const KeyFormat& format, const CryptoKey& key, const CryptoKey& wrappingKey, const jsbind::Any& wrapAlgorithm);
    jsbind::Promise unwrapKey(const KeyFormat& format, const jsbind::Any& wrappedKey, const CryptoKey& unwrappingKey, const jsbind::Any& unwrapAlgorithm, const jsbind::Any& unwrappedKeyAlgorithm, bool extractable, const jsbind::Sequence<KeyUsage>& keyUsages);
};

