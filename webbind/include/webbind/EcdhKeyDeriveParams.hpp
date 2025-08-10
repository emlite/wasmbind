#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

class CryptoKey;

/// Dictionary type EcdhKeyDeriveParams
class EcdhKeyDeriveParams : public Algorithm {
  explicit EcdhKeyDeriveParams(Handle h) noexcept;
public:
    static EcdhKeyDeriveParams take_ownership(Handle h) noexcept;
    explicit EcdhKeyDeriveParams(const emlite::Val &val) noexcept;
    EcdhKeyDeriveParams() noexcept;
    [[nodiscard]] EcdhKeyDeriveParams clone() const noexcept;
    /// Getter of the `public` attribute.
    [[nodiscard]] CryptoKey public_() const;
    /// Setter of the `public` attribute.
    void public_(const CryptoKey& value);
};

} // namespace webbind