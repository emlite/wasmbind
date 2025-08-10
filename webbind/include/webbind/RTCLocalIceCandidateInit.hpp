#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCIceCandidateInit.hpp"

namespace webbind {

/// Dictionary type RTCLocalIceCandidateInit
/// [`RTCLocalIceCandidateInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCLocalIceCandidateInit)
class RTCLocalIceCandidateInit : public RTCIceCandidateInit {
  explicit RTCLocalIceCandidateInit(Handle h) noexcept;
public:
    static RTCLocalIceCandidateInit take_ownership(Handle h) noexcept;
    explicit RTCLocalIceCandidateInit(const emlite::Val &val) noexcept;
    RTCLocalIceCandidateInit() noexcept;
    [[nodiscard]] RTCLocalIceCandidateInit clone() const noexcept;
    [[nodiscard]] RTCIceServerTransportProtocol relayProtocol() const;
    void relayProtocol(const RTCIceServerTransportProtocol& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

} // namespace webbind