#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCIceCandidateInit.hpp"

namespace webbind {

/// Dictionary type RTCLocalIceCandidateInit
class RTCLocalIceCandidateInit : public RTCIceCandidateInit {
  explicit RTCLocalIceCandidateInit(Handle h) noexcept;
public:
    static RTCLocalIceCandidateInit take_ownership(Handle h) noexcept;
    explicit RTCLocalIceCandidateInit(const emlite::Val &val) noexcept;
    RTCLocalIceCandidateInit() noexcept;
    [[nodiscard]] RTCLocalIceCandidateInit clone() const noexcept;
    /// Getter of the `relayProtocol` attribute.
    [[nodiscard]] RTCIceServerTransportProtocol relayProtocol() const;
    /// Setter of the `relayProtocol` attribute.
    void relayProtocol(const RTCIceServerTransportProtocol& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
};

} // namespace webbind