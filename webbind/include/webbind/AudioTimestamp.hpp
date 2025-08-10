#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioTimestamp
/// [`AudioTimestamp`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTimestamp)
class AudioTimestamp : public emlite::Val {
  explicit AudioTimestamp(Handle h) noexcept;
public:
    static AudioTimestamp take_ownership(Handle h) noexcept;
    explicit AudioTimestamp(const emlite::Val &val) noexcept;
    AudioTimestamp() noexcept;
    [[nodiscard]] AudioTimestamp clone() const noexcept;
    [[nodiscard]] double contextTime() const;
    void contextTime(double value);
    [[nodiscard]] jsbind::Any performanceTime() const;
    void performanceTime(const jsbind::Any& value);
};

} // namespace webbind