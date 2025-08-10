#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioTimestamp
class AudioTimestamp : public emlite::Val {
  explicit AudioTimestamp(Handle h) noexcept;
public:
    static AudioTimestamp take_ownership(Handle h) noexcept;
    explicit AudioTimestamp(const emlite::Val &val) noexcept;
    AudioTimestamp() noexcept;
    [[nodiscard]] AudioTimestamp clone() const noexcept;
    /// Getter of the `contextTime` attribute.
    [[nodiscard]] double contextTime() const;
    /// Setter of the `contextTime` attribute.
    void contextTime(double value);
    /// Getter of the `performanceTime` attribute.
    [[nodiscard]] jsbind::Any performanceTime() const;
    /// Setter of the `performanceTime` attribute.
    void performanceTime(const jsbind::Any& value);
};

} // namespace webbind