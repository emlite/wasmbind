#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type EcKeyGenParams
/// [`EcKeyGenParams`](https://developer.mozilla.org/en-US/docs/Web/API/EcKeyGenParams)
class EcKeyGenParams : public Algorithm {
  explicit EcKeyGenParams(Handle h) noexcept;
public:
    static EcKeyGenParams take_ownership(Handle h) noexcept;
    explicit EcKeyGenParams(const emlite::Val &val) noexcept;
    EcKeyGenParams() noexcept;
    [[nodiscard]] EcKeyGenParams clone() const noexcept;
    [[nodiscard]] jsbind::Any namedCurve() const;
    void namedCurve(const jsbind::Any& value);
};

} // namespace webbind