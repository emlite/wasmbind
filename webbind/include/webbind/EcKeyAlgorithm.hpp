#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type EcKeyAlgorithm
class EcKeyAlgorithm : public KeyAlgorithm {
  explicit EcKeyAlgorithm(Handle h) noexcept;
public:
    static EcKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit EcKeyAlgorithm(const emlite::Val &val) noexcept;
    EcKeyAlgorithm() noexcept;
    [[nodiscard]] EcKeyAlgorithm clone() const noexcept;
    /// Getter of the `namedCurve` attribute.
    [[nodiscard]] jsbind::Any namedCurve() const;
    /// Setter of the `namedCurve` attribute.
    void namedCurve(const jsbind::Any& value);
};

} // namespace webbind