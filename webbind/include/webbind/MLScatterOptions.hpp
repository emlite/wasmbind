#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLScatterOptions
/// [`MLScatterOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLScatterOptions)
class MLScatterOptions : public MLOperatorOptions {
  explicit MLScatterOptions(Handle h) noexcept;
public:
    static MLScatterOptions take_ownership(Handle h) noexcept;
    explicit MLScatterOptions(const emlite::Val &val) noexcept;
    MLScatterOptions() noexcept;
    [[nodiscard]] MLScatterOptions clone() const noexcept;
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
};

} // namespace webbind