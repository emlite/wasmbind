#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLSplitOptions
class MLSplitOptions : public MLOperatorOptions {
  explicit MLSplitOptions(Handle h) noexcept;
public:
    static MLSplitOptions take_ownership(Handle h) noexcept;
    explicit MLSplitOptions(const emlite::Val &val) noexcept;
    MLSplitOptions() noexcept;
    [[nodiscard]] MLSplitOptions clone() const noexcept;
    /// Getter of the `axis` attribute.
    [[nodiscard]] unsigned long axis() const;
    /// Setter of the `axis` attribute.
    void axis(unsigned long value);
};

} // namespace webbind