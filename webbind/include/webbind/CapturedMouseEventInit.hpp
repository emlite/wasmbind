#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CapturedMouseEventInit
class CapturedMouseEventInit : public EventInit {
  explicit CapturedMouseEventInit(Handle h) noexcept;
public:
    static CapturedMouseEventInit take_ownership(Handle h) noexcept;
    explicit CapturedMouseEventInit(const emlite::Val &val) noexcept;
    CapturedMouseEventInit() noexcept;
    [[nodiscard]] CapturedMouseEventInit clone() const noexcept;
    /// Getter of the `surfaceX` attribute.
    [[nodiscard]] long surfaceX() const;
    /// Setter of the `surfaceX` attribute.
    void surfaceX(long value);
    /// Getter of the `surfaceY` attribute.
    [[nodiscard]] long surfaceY() const;
    /// Setter of the `surfaceY` attribute.
    void surfaceY(long value);
};

} // namespace webbind