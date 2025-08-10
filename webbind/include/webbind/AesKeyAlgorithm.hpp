#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type AesKeyAlgorithm
class AesKeyAlgorithm : public KeyAlgorithm {
  explicit AesKeyAlgorithm(Handle h) noexcept;
public:
    static AesKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit AesKeyAlgorithm(const emlite::Val &val) noexcept;
    AesKeyAlgorithm() noexcept;
    [[nodiscard]] AesKeyAlgorithm clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned short length() const;
    /// Setter of the `length` attribute.
    void length(unsigned short value);
};

} // namespace webbind