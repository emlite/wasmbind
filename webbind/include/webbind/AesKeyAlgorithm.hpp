#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type AesKeyAlgorithm
/// [`AesKeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/AesKeyAlgorithm)
class AesKeyAlgorithm : public KeyAlgorithm {
  explicit AesKeyAlgorithm(Handle h) noexcept;
public:
    static AesKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit AesKeyAlgorithm(const emlite::Val &val) noexcept;
    AesKeyAlgorithm() noexcept;
    [[nodiscard]] AesKeyAlgorithm clone() const noexcept;
    [[nodiscard]] unsigned short length() const;
    void length(unsigned short value);
};

} // namespace webbind