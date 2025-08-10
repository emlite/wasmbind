#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type EcKeyGenParams
class EcKeyGenParams : public Algorithm {
  explicit EcKeyGenParams(Handle h) noexcept;
public:
    static EcKeyGenParams take_ownership(Handle h) noexcept;
    explicit EcKeyGenParams(const emlite::Val &val) noexcept;
    EcKeyGenParams() noexcept;
    [[nodiscard]] EcKeyGenParams clone() const noexcept;
    /// Getter of the `namedCurve` attribute.
    [[nodiscard]] jsbind::Any namedCurve() const;
    /// Setter of the `namedCurve` attribute.
    void namedCurve(const jsbind::Any& value);
};

} // namespace webbind