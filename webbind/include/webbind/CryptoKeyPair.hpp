#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CryptoKey;

/// Dictionary type CryptoKeyPair
/// [`CryptoKeyPair`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKeyPair)
class CryptoKeyPair : public emlite::Val {
  explicit CryptoKeyPair(Handle h) noexcept;
public:
    static CryptoKeyPair take_ownership(Handle h) noexcept;
    explicit CryptoKeyPair(const emlite::Val &val) noexcept;
    CryptoKeyPair() noexcept;
    [[nodiscard]] CryptoKeyPair clone() const noexcept;
    [[nodiscard]] CryptoKey publicKey() const;
    void publicKey(const CryptoKey& value);
    [[nodiscard]] CryptoKey privateKey() const;
    void privateKey(const CryptoKey& value);
};

} // namespace webbind