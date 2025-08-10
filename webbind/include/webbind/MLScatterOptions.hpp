#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLScatterOptions
class MLScatterOptions : public MLOperatorOptions {
  explicit MLScatterOptions(Handle h) noexcept;
public:
    static MLScatterOptions take_ownership(Handle h) noexcept;
    explicit MLScatterOptions(const emlite::Val &val) noexcept;
    MLScatterOptions() noexcept;
    [[nodiscard]] MLScatterOptions clone() const noexcept;
    /// Getter of the `axis` attribute.
    [[nodiscard]] unsigned long axis() const;
    /// Setter of the `axis` attribute.
    void axis(unsigned long value);
};

} // namespace webbind