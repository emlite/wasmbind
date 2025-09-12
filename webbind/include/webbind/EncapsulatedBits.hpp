#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EncapsulatedBits
class EncapsulatedBits : public emlite::Val {
  explicit EncapsulatedBits(Handle h) noexcept;
public:
    static EncapsulatedBits take_ownership(Handle h) noexcept;
    explicit EncapsulatedBits(const emlite::Val &val) noexcept;
    EncapsulatedBits() noexcept;
    [[nodiscard]] EncapsulatedBits clone() const noexcept;
    /// Getter of the `sharedKey` attribute.
    [[nodiscard]] jsbind::ArrayBuffer sharedKey() const;
    /// Setter of the `sharedKey` attribute.
    void sharedKey(const jsbind::ArrayBuffer& value);
    /// Getter of the `ciphertext` attribute.
    [[nodiscard]] jsbind::ArrayBuffer ciphertext() const;
    /// Setter of the `ciphertext` attribute.
    void ciphertext(const jsbind::ArrayBuffer& value);
};

} // namespace webbind