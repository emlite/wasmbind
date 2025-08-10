#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class RTCDataChannel;

/// Dictionary type RTCDataChannelEventInit
/// [`RTCDataChannelEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelEventInit)
class RTCDataChannelEventInit : public EventInit {
  explicit RTCDataChannelEventInit(Handle h) noexcept;
public:
    static RTCDataChannelEventInit take_ownership(Handle h) noexcept;
    explicit RTCDataChannelEventInit(const emlite::Val &val) noexcept;
    RTCDataChannelEventInit() noexcept;
    [[nodiscard]] RTCDataChannelEventInit clone() const noexcept;
    [[nodiscard]] RTCDataChannel channel() const;
    void channel(const RTCDataChannel& value);
};

} // namespace webbind