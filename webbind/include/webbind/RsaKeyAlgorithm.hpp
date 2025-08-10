#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type RsaKeyAlgorithm
class RsaKeyAlgorithm : public KeyAlgorithm {
  explicit RsaKeyAlgorithm(Handle h) noexcept;
public:
    static RsaKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit RsaKeyAlgorithm(const emlite::Val &val) noexcept;
    RsaKeyAlgorithm() noexcept;
    [[nodiscard]] RsaKeyAlgorithm clone() const noexcept;
    /// Getter of the `modulusLength` attribute.
    [[nodiscard]] unsigned long modulusLength() const;
    /// Setter of the `modulusLength` attribute.
    void modulusLength(unsigned long value);
    /// Getter of the `publicExponent` attribute.
    [[nodiscard]] jsbind::Any publicExponent() const;
    /// Setter of the `publicExponent` attribute.
    void publicExponent(const jsbind::Any& value);
};

} // namespace webbind