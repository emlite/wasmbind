#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type RsaKeyAlgorithm
/// [`RsaKeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/RsaKeyAlgorithm)
class RsaKeyAlgorithm : public KeyAlgorithm {
  explicit RsaKeyAlgorithm(Handle h) noexcept;
public:
    static RsaKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit RsaKeyAlgorithm(const emlite::Val &val) noexcept;
    RsaKeyAlgorithm() noexcept;
    [[nodiscard]] RsaKeyAlgorithm clone() const noexcept;
    [[nodiscard]] unsigned long modulusLength() const;
    void modulusLength(unsigned long value);
    [[nodiscard]] jsbind::Any publicExponent() const;
    void publicExponent(const jsbind::Any& value);
};

} // namespace webbind