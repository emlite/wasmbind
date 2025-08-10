#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RsaKeyAlgorithm.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type RsaHashedKeyAlgorithm
/// [`RsaHashedKeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/RsaHashedKeyAlgorithm)
class RsaHashedKeyAlgorithm : public RsaKeyAlgorithm {
  explicit RsaHashedKeyAlgorithm(Handle h) noexcept;
public:
    static RsaHashedKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit RsaHashedKeyAlgorithm(const emlite::Val &val) noexcept;
    RsaHashedKeyAlgorithm() noexcept;
    [[nodiscard]] RsaHashedKeyAlgorithm clone() const noexcept;
    [[nodiscard]] KeyAlgorithm hash() const;
    void hash(const KeyAlgorithm& value);
};

} // namespace webbind