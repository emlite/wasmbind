#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type EcKeyImportParams
/// [`EcKeyImportParams`](https://developer.mozilla.org/en-US/docs/Web/API/EcKeyImportParams)
class EcKeyImportParams : public Algorithm {
  explicit EcKeyImportParams(Handle h) noexcept;
public:
    static EcKeyImportParams take_ownership(Handle h) noexcept;
    explicit EcKeyImportParams(const emlite::Val &val) noexcept;
    EcKeyImportParams() noexcept;
    [[nodiscard]] EcKeyImportParams clone() const noexcept;
    [[nodiscard]] jsbind::Any namedCurve() const;
    void namedCurve(const jsbind::Any& value);
};

} // namespace webbind