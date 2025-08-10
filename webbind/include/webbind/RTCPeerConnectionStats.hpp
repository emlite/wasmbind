#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCPeerConnectionStats
class RTCPeerConnectionStats : public RTCStats {
  explicit RTCPeerConnectionStats(Handle h) noexcept;
public:
    static RTCPeerConnectionStats take_ownership(Handle h) noexcept;
    explicit RTCPeerConnectionStats(const emlite::Val &val) noexcept;
    RTCPeerConnectionStats() noexcept;
    [[nodiscard]] RTCPeerConnectionStats clone() const noexcept;
    /// Getter of the `dataChannelsOpened` attribute.
    [[nodiscard]] unsigned long dataChannelsOpened() const;
    /// Setter of the `dataChannelsOpened` attribute.
    void dataChannelsOpened(unsigned long value);
    /// Getter of the `dataChannelsClosed` attribute.
    [[nodiscard]] unsigned long dataChannelsClosed() const;
    /// Setter of the `dataChannelsClosed` attribute.
    void dataChannelsClosed(unsigned long value);
};

} // namespace webbind