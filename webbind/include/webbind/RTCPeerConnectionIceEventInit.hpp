#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class RTCIceCandidate;

/// Dictionary type RTCPeerConnectionIceEventInit
class RTCPeerConnectionIceEventInit : public EventInit {
  explicit RTCPeerConnectionIceEventInit(Handle h) noexcept;
public:
    static RTCPeerConnectionIceEventInit take_ownership(Handle h) noexcept;
    explicit RTCPeerConnectionIceEventInit(const emlite::Val &val) noexcept;
    RTCPeerConnectionIceEventInit() noexcept;
    [[nodiscard]] RTCPeerConnectionIceEventInit clone() const noexcept;
    /// Getter of the `candidate` attribute.
    [[nodiscard]] RTCIceCandidate candidate() const;
    /// Setter of the `candidate` attribute.
    void candidate(const RTCIceCandidate& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
};

} // namespace webbind