#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type KmacKeyAlgorithm
class KmacKeyAlgorithm : public KeyAlgorithm {
  explicit KmacKeyAlgorithm(Handle h) noexcept;
public:
    static KmacKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit KmacKeyAlgorithm(const emlite::Val &val) noexcept;
    KmacKeyAlgorithm() noexcept;
    [[nodiscard]] KmacKeyAlgorithm clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
};

} // namespace webbind