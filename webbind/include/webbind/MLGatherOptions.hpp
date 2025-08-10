#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLGatherOptions
class MLGatherOptions : public MLOperatorOptions {
  explicit MLGatherOptions(Handle h) noexcept;
public:
    static MLGatherOptions take_ownership(Handle h) noexcept;
    explicit MLGatherOptions(const emlite::Val &val) noexcept;
    MLGatherOptions() noexcept;
    [[nodiscard]] MLGatherOptions clone() const noexcept;
    /// Getter of the `axis` attribute.
    [[nodiscard]] unsigned long axis() const;
    /// Setter of the `axis` attribute.
    void axis(unsigned long value);
};

} // namespace webbind