#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PositionOptions
/// [`PositionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PositionOptions)
class PositionOptions : public emlite::Val {
  explicit PositionOptions(Handle h) noexcept;
public:
    static PositionOptions take_ownership(Handle h) noexcept;
    explicit PositionOptions(const emlite::Val &val) noexcept;
    PositionOptions() noexcept;
    [[nodiscard]] PositionOptions clone() const noexcept;
    [[nodiscard]] bool enableHighAccuracy() const;
    void enableHighAccuracy(bool value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] unsigned long maximumAge() const;
    void maximumAge(unsigned long value);
};

} // namespace webbind