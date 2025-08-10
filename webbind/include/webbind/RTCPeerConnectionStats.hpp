#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCPeerConnectionStats
/// [`RTCPeerConnectionStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionStats)
class RTCPeerConnectionStats : public RTCStats {
  explicit RTCPeerConnectionStats(Handle h) noexcept;
public:
    static RTCPeerConnectionStats take_ownership(Handle h) noexcept;
    explicit RTCPeerConnectionStats(const emlite::Val &val) noexcept;
    RTCPeerConnectionStats() noexcept;
    [[nodiscard]] RTCPeerConnectionStats clone() const noexcept;
    [[nodiscard]] unsigned long dataChannelsOpened() const;
    void dataChannelsOpened(unsigned long value);
    [[nodiscard]] unsigned long dataChannelsClosed() const;
    void dataChannelsClosed(unsigned long value);
};

} // namespace webbind