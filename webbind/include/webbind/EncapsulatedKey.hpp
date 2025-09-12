#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CryptoKey;

/// Dictionary type EncapsulatedKey
class EncapsulatedKey : public emlite::Val {
  explicit EncapsulatedKey(Handle h) noexcept;
public:
    static EncapsulatedKey take_ownership(Handle h) noexcept;
    explicit EncapsulatedKey(const emlite::Val &val) noexcept;
    EncapsulatedKey() noexcept;
    [[nodiscard]] EncapsulatedKey clone() const noexcept;
    /// Getter of the `sharedKey` attribute.
    [[nodiscard]] CryptoKey sharedKey() const;
    /// Setter of the `sharedKey` attribute.
    void sharedKey(const CryptoKey& value);
    /// Getter of the `ciphertext` attribute.
    [[nodiscard]] jsbind::ArrayBuffer ciphertext() const;
    /// Setter of the `ciphertext` attribute.
    void ciphertext(const jsbind::ArrayBuffer& value);
};

} // namespace webbind