#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCIceServer.hpp"

namespace webbind {

/// Dictionary type RTCIceGatherOptions
class RTCIceGatherOptions : public emlite::Val {
  explicit RTCIceGatherOptions(Handle h) noexcept;
public:
    static RTCIceGatherOptions take_ownership(Handle h) noexcept;
    explicit RTCIceGatherOptions(const emlite::Val &val) noexcept;
    RTCIceGatherOptions() noexcept;
    [[nodiscard]] RTCIceGatherOptions clone() const noexcept;
    /// Getter of the `gatherPolicy` attribute.
    [[nodiscard]] RTCIceTransportPolicy gatherPolicy() const;
    /// Setter of the `gatherPolicy` attribute.
    void gatherPolicy(const RTCIceTransportPolicy& value);
    /// Getter of the `iceServers` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCIceServer> iceServers() const;
    /// Setter of the `iceServers` attribute.
    void iceServers(const jsbind::TypedArray<RTCIceServer>& value);
};

} // namespace webbind