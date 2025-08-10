#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaSettingsRange
class MediaSettingsRange : public emlite::Val {
  explicit MediaSettingsRange(Handle h) noexcept;
public:
    static MediaSettingsRange take_ownership(Handle h) noexcept;
    explicit MediaSettingsRange(const emlite::Val &val) noexcept;
    MediaSettingsRange() noexcept;
    [[nodiscard]] MediaSettingsRange clone() const noexcept;
    /// Getter of the `max` attribute.
    [[nodiscard]] double max() const;
    /// Setter of the `max` attribute.
    void max(double value);
    /// Getter of the `min` attribute.
    [[nodiscard]] double min() const;
    /// Setter of the `min` attribute.
    void min(double value);
    /// Getter of the `step` attribute.
    [[nodiscard]] double step() const;
    /// Setter of the `step` attribute.
    void step(double value);
};

} // namespace webbind