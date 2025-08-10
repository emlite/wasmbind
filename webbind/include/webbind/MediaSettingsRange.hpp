#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaSettingsRange
/// [`MediaSettingsRange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSettingsRange)
class MediaSettingsRange : public emlite::Val {
  explicit MediaSettingsRange(Handle h) noexcept;
public:
    static MediaSettingsRange take_ownership(Handle h) noexcept;
    explicit MediaSettingsRange(const emlite::Val &val) noexcept;
    MediaSettingsRange() noexcept;
    [[nodiscard]] MediaSettingsRange clone() const noexcept;
    [[nodiscard]] double max() const;
    void max(double value);
    [[nodiscard]] double min() const;
    void min(double value);
    [[nodiscard]] double step() const;
    void step(double value);
};

} // namespace webbind