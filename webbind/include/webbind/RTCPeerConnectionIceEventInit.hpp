#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class RTCIceCandidate;

/// Dictionary type RTCPeerConnectionIceEventInit
/// [`RTCPeerConnectionIceEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceEventInit)
class RTCPeerConnectionIceEventInit : public EventInit {
  explicit RTCPeerConnectionIceEventInit(Handle h) noexcept;
public:
    static RTCPeerConnectionIceEventInit take_ownership(Handle h) noexcept;
    explicit RTCPeerConnectionIceEventInit(const emlite::Val &val) noexcept;
    RTCPeerConnectionIceEventInit() noexcept;
    [[nodiscard]] RTCPeerConnectionIceEventInit clone() const noexcept;
    [[nodiscard]] RTCIceCandidate candidate() const;
    void candidate(const RTCIceCandidate& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

} // namespace webbind