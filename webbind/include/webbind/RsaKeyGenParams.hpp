#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaKeyGenParams
class RsaKeyGenParams : public Algorithm {
  explicit RsaKeyGenParams(Handle h) noexcept;
public:
    static RsaKeyGenParams take_ownership(Handle h) noexcept;
    explicit RsaKeyGenParams(const emlite::Val &val) noexcept;
    RsaKeyGenParams() noexcept;
    [[nodiscard]] RsaKeyGenParams clone() const noexcept;
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