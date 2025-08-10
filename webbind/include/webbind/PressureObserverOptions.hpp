#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PressureObserverOptions
class PressureObserverOptions : public emlite::Val {
  explicit PressureObserverOptions(Handle h) noexcept;
public:
    static PressureObserverOptions take_ownership(Handle h) noexcept;
    explicit PressureObserverOptions(const emlite::Val &val) noexcept;
    PressureObserverOptions() noexcept;
    [[nodiscard]] PressureObserverOptions clone() const noexcept;
    /// Getter of the `sampleInterval` attribute.
    [[nodiscard]] unsigned long sampleInterval() const;
    /// Setter of the `sampleInterval` attribute.
    void sampleInterval(unsigned long value);
};

} // namespace webbind