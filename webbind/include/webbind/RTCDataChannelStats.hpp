#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCDataChannelStats
/// [`RTCDataChannelStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelStats)
class RTCDataChannelStats : public RTCStats {
  explicit RTCDataChannelStats(Handle h) noexcept;
public:
    static RTCDataChannelStats take_ownership(Handle h) noexcept;
    explicit RTCDataChannelStats(const emlite::Val &val) noexcept;
    RTCDataChannelStats() noexcept;
    [[nodiscard]] RTCDataChannelStats clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] unsigned short dataChannelIdentifier() const;
    void dataChannelIdentifier(unsigned short value);
    [[nodiscard]] RTCDataChannelState state() const;
    void state(const RTCDataChannelState& value);
    [[nodiscard]] unsigned long messagesSent() const;
    void messagesSent(unsigned long value);
    [[nodiscard]] long long bytesSent() const;
    void bytesSent(long long value);
    [[nodiscard]] unsigned long messagesReceived() const;
    void messagesReceived(unsigned long value);
    [[nodiscard]] long long bytesReceived() const;
    void bytesReceived(long long value);
};

} // namespace webbind