#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLTriangularOptions
class MLTriangularOptions : public MLOperatorOptions {
  explicit MLTriangularOptions(Handle h) noexcept;
public:
    static MLTriangularOptions take_ownership(Handle h) noexcept;
    explicit MLTriangularOptions(const emlite::Val &val) noexcept;
    MLTriangularOptions() noexcept;
    [[nodiscard]] MLTriangularOptions clone() const noexcept;
    /// Getter of the `upper` attribute.
    [[nodiscard]] bool upper() const;
    /// Setter of the `upper` attribute.
    void upper(bool value);
    /// Getter of the `diagonal` attribute.
    [[nodiscard]] long diagonal() const;
    /// Setter of the `diagonal` attribute.
    void diagonal(long value);
};

} // namespace webbind