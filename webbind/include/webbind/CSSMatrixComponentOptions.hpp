#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSMatrixComponentOptions
/// [`CSSMatrixComponentOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMatrixComponentOptions)
class CSSMatrixComponentOptions : public emlite::Val {
  explicit CSSMatrixComponentOptions(Handle h) noexcept;
public:
    static CSSMatrixComponentOptions take_ownership(Handle h) noexcept;
    explicit CSSMatrixComponentOptions(const emlite::Val &val) noexcept;
    CSSMatrixComponentOptions() noexcept;
    [[nodiscard]] CSSMatrixComponentOptions clone() const noexcept;
    [[nodiscard]] bool is2D() const;
    void is2D(bool value);
};

} // namespace webbind