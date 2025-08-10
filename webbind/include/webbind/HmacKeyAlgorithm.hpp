#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type HmacKeyAlgorithm
class HmacKeyAlgorithm : public KeyAlgorithm {
  explicit HmacKeyAlgorithm(Handle h) noexcept;
public:
    static HmacKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit HmacKeyAlgorithm(const emlite::Val &val) noexcept;
    HmacKeyAlgorithm() noexcept;
    [[nodiscard]] HmacKeyAlgorithm clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] KeyAlgorithm hash() const;
    /// Setter of the `hash` attribute.
    void hash(const KeyAlgorithm& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
};

} // namespace webbind