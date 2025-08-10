#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCIceServer.hpp"

namespace webbind {

/// Dictionary type RTCIceGatherOptions
/// [`RTCIceGatherOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceGatherOptions)
class RTCIceGatherOptions : public emlite::Val {
  explicit RTCIceGatherOptions(Handle h) noexcept;
public:
    static RTCIceGatherOptions take_ownership(Handle h) noexcept;
    explicit RTCIceGatherOptions(const emlite::Val &val) noexcept;
    RTCIceGatherOptions() noexcept;
    [[nodiscard]] RTCIceGatherOptions clone() const noexcept;
    [[nodiscard]] RTCIceTransportPolicy gatherPolicy() const;
    void gatherPolicy(const RTCIceTransportPolicy& value);
    [[nodiscard]] jsbind::TypedArray<RTCIceServer> iceServers() const;
    void iceServers(const jsbind::TypedArray<RTCIceServer>& value);
};

} // namespace webbind