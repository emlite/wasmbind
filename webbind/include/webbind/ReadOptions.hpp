#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GeolocationSensorOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type ReadOptions
class ReadOptions : public GeolocationSensorOptions {
  explicit ReadOptions(Handle h) noexcept;
public:
    static ReadOptions take_ownership(Handle h) noexcept;
    explicit ReadOptions(const emlite::Val &val) noexcept;
    ReadOptions() noexcept;
    [[nodiscard]] ReadOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind