#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CryptoKey;

/// Dictionary type CryptoKeyPair
class CryptoKeyPair : public emlite::Val {
  explicit CryptoKeyPair(Handle h) noexcept;
public:
    static CryptoKeyPair take_ownership(Handle h) noexcept;
    explicit CryptoKeyPair(const emlite::Val &val) noexcept;
    CryptoKeyPair() noexcept;
    [[nodiscard]] CryptoKeyPair clone() const noexcept;
    /// Getter of the `publicKey` attribute.
    [[nodiscard]] CryptoKey publicKey() const;
    /// Setter of the `publicKey` attribute.
    void publicKey(const CryptoKey& value);
    /// Getter of the `privateKey` attribute.
    [[nodiscard]] CryptoKey privateKey() const;
    /// Setter of the `privateKey` attribute.
    void privateKey(const CryptoKey& value);
};

} // namespace webbind