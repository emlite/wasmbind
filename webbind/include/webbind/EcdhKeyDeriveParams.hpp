#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

class CryptoKey;

/// Dictionary type EcdhKeyDeriveParams
/// [`EcdhKeyDeriveParams`](https://developer.mozilla.org/en-US/docs/Web/API/EcdhKeyDeriveParams)
class EcdhKeyDeriveParams : public Algorithm {
  explicit EcdhKeyDeriveParams(Handle h) noexcept;
public:
    static EcdhKeyDeriveParams take_ownership(Handle h) noexcept;
    explicit EcdhKeyDeriveParams(const emlite::Val &val) noexcept;
    EcdhKeyDeriveParams() noexcept;
    [[nodiscard]] EcdhKeyDeriveParams clone() const noexcept;
    [[nodiscard]] CryptoKey public_() const;
    void public_(const CryptoKey& value);
};

} // namespace webbind