#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSMatrixComponentOptions
class CSSMatrixComponentOptions : public emlite::Val {
  explicit CSSMatrixComponentOptions(Handle h) noexcept;
public:
    static CSSMatrixComponentOptions take_ownership(Handle h) noexcept;
    explicit CSSMatrixComponentOptions(const emlite::Val &val) noexcept;
    CSSMatrixComponentOptions() noexcept;
    [[nodiscard]] CSSMatrixComponentOptions clone() const noexcept;
    /// Getter of the `is2D` attribute.
    [[nodiscard]] bool is2D() const;
    /// Setter of the `is2D` attribute.
    void is2D(bool value);
};

} // namespace webbind