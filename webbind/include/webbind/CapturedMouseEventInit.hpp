#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CapturedMouseEventInit
/// [`CapturedMouseEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEventInit)
class CapturedMouseEventInit : public EventInit {
  explicit CapturedMouseEventInit(Handle h) noexcept;
public:
    static CapturedMouseEventInit take_ownership(Handle h) noexcept;
    explicit CapturedMouseEventInit(const emlite::Val &val) noexcept;
    CapturedMouseEventInit() noexcept;
    [[nodiscard]] CapturedMouseEventInit clone() const noexcept;
    [[nodiscard]] long surfaceX() const;
    void surfaceX(long value);
    [[nodiscard]] long surfaceY() const;
    void surfaceY(long value);
};

} // namespace webbind