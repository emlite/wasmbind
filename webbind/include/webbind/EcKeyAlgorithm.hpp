#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyAlgorithm.hpp"

namespace webbind {

/// Dictionary type EcKeyAlgorithm
/// [`EcKeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/EcKeyAlgorithm)
class EcKeyAlgorithm : public KeyAlgorithm {
  explicit EcKeyAlgorithm(Handle h) noexcept;
public:
    static EcKeyAlgorithm take_ownership(Handle h) noexcept;
    explicit EcKeyAlgorithm(const emlite::Val &val) noexcept;
    EcKeyAlgorithm() noexcept;
    [[nodiscard]] EcKeyAlgorithm clone() const noexcept;
    [[nodiscard]] jsbind::Any namedCurve() const;
    void namedCurve(const jsbind::Any& value);
};

} // namespace webbind