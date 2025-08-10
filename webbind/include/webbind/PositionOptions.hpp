#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PositionOptions
class PositionOptions : public emlite::Val {
  explicit PositionOptions(Handle h) noexcept;
public:
    static PositionOptions take_ownership(Handle h) noexcept;
    explicit PositionOptions(const emlite::Val &val) noexcept;
    PositionOptions() noexcept;
    [[nodiscard]] PositionOptions clone() const noexcept;
    /// Getter of the `enableHighAccuracy` attribute.
    [[nodiscard]] bool enableHighAccuracy() const;
    /// Setter of the `enableHighAccuracy` attribute.
    void enableHighAccuracy(bool value);
    /// Getter of the `timeout` attribute.
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    void timeout(unsigned long value);
    /// Getter of the `maximumAge` attribute.
    [[nodiscard]] unsigned long maximumAge() const;
    /// Setter of the `maximumAge` attribute.
    void maximumAge(unsigned long value);
};

} // namespace webbind