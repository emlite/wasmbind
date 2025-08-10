#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HMACGetSecretInput
class HMACGetSecretInput : public emlite::Val {
  explicit HMACGetSecretInput(Handle h) noexcept;
public:
    static HMACGetSecretInput take_ownership(Handle h) noexcept;
    explicit HMACGetSecretInput(const emlite::Val &val) noexcept;
    HMACGetSecretInput() noexcept;
    [[nodiscard]] HMACGetSecretInput clone() const noexcept;
    /// Getter of the `salt1` attribute.
    [[nodiscard]] jsbind::ArrayBuffer salt1() const;
    /// Setter of the `salt1` attribute.
    void salt1(const jsbind::ArrayBuffer& value);
    /// Getter of the `salt2` attribute.
    [[nodiscard]] jsbind::ArrayBuffer salt2() const;
    /// Setter of the `salt2` attribute.
    void salt2(const jsbind::ArrayBuffer& value);
};

} // namespace webbind