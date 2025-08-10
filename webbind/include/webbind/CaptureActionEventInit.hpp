#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CaptureActionEventInit
/// [`CaptureActionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureActionEventInit)
class CaptureActionEventInit : public EventInit {
  explicit CaptureActionEventInit(Handle h) noexcept;
public:
    static CaptureActionEventInit take_ownership(Handle h) noexcept;
    explicit CaptureActionEventInit(const emlite::Val &val) noexcept;
    CaptureActionEventInit() noexcept;
    [[nodiscard]] CaptureActionEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String action() const;
    void action(const jsbind::String& value);
};

} // namespace webbind