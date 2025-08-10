#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type EcKeyImportParams
class EcKeyImportParams : public Algorithm {
  explicit EcKeyImportParams(Handle h) noexcept;
public:
    static EcKeyImportParams take_ownership(Handle h) noexcept;
    explicit EcKeyImportParams(const emlite::Val &val) noexcept;
    EcKeyImportParams() noexcept;
    [[nodiscard]] EcKeyImportParams clone() const noexcept;
    /// Getter of the `namedCurve` attribute.
    [[nodiscard]] jsbind::Any namedCurve() const;
    /// Setter of the `namedCurve` attribute.
    void namedCurve(const jsbind::Any& value);
};

} // namespace webbind