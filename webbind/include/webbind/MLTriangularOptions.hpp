#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLTriangularOptions
/// [`MLTriangularOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLTriangularOptions)
class MLTriangularOptions : public MLOperatorOptions {
  explicit MLTriangularOptions(Handle h) noexcept;
public:
    static MLTriangularOptions take_ownership(Handle h) noexcept;
    explicit MLTriangularOptions(const emlite::Val &val) noexcept;
    MLTriangularOptions() noexcept;
    [[nodiscard]] MLTriangularOptions clone() const noexcept;
    [[nodiscard]] bool upper() const;
    void upper(bool value);
    [[nodiscard]] long diagonal() const;
    void diagonal(long value);
};

} // namespace webbind