#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RsaKeyAlgorithm.hpp"

namespace webbind {

class KeyAlgorithm;

/// Dictionary type RsaHashedKeyAlgorithm
class RsaHashedKeyAlgorithm : public RsaKeyAlgorithm {
  explicit RsaHashedKeyAlgorithm(Handle h) noexcept;
public:
    static RsaHashedKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit RsaHashedKeyAlgorithm(const emlite::Val &val) noexcept;
    RsaHashedKeyAlgorithm() noexcept;
    [[nodiscard]] RsaHashedKeyAlgorithm clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] KeyAlgorithm hash() const;
    /// Setter of the `hash` attribute.
    void hash(const KeyAlgorithm& value);
};

} // namespace webbind