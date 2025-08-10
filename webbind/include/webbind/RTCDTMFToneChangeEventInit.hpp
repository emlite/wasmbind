#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type RTCDTMFToneChangeEventInit
/// [`RTCDTMFToneChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFToneChangeEventInit)
class RTCDTMFToneChangeEventInit : public EventInit {
  explicit RTCDTMFToneChangeEventInit(Handle h) noexcept;
public:
    static RTCDTMFToneChangeEventInit take_ownership(Handle h) noexcept;
    explicit RTCDTMFToneChangeEventInit(const emlite::Val &val) noexcept;
    RTCDTMFToneChangeEventInit() noexcept;
    [[nodiscard]] RTCDTMFToneChangeEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String tone() const;
    void tone(const jsbind::String& value);
};

} // namespace webbind