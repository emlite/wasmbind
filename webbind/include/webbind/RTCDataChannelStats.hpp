#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCDataChannelStats
class RTCDataChannelStats : public RTCStats {
  explicit RTCDataChannelStats(Handle h) noexcept;
public:
    static RTCDataChannelStats take_ownership(Handle h) noexcept;
    explicit RTCDataChannelStats(const emlite::Val &val) noexcept;
    RTCDataChannelStats() noexcept;
    [[nodiscard]] RTCDataChannelStats clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
    /// Getter of the `dataChannelIdentifier` attribute.
    [[nodiscard]] unsigned short dataChannelIdentifier() const;
    /// Setter of the `dataChannelIdentifier` attribute.
    void dataChannelIdentifier(unsigned short value);
    /// Getter of the `state` attribute.
    [[nodiscard]] RTCDataChannelState state() const;
    /// Setter of the `state` attribute.
    void state(const RTCDataChannelState& value);
    /// Getter of the `messagesSent` attribute.
    [[nodiscard]] unsigned long messagesSent() const;
    /// Setter of the `messagesSent` attribute.
    void messagesSent(unsigned long value);
    /// Getter of the `bytesSent` attribute.
    [[nodiscard]] long long bytesSent() const;
    /// Setter of the `bytesSent` attribute.
    void bytesSent(long long value);
    /// Getter of the `messagesReceived` attribute.
    [[nodiscard]] unsigned long messagesReceived() const;
    /// Setter of the `messagesReceived` attribute.
    void messagesReceived(unsigned long value);
    /// Getter of the `bytesReceived` attribute.
    [[nodiscard]] long long bytesReceived() const;
    /// Setter of the `bytesReceived` attribute.
    void bytesReceived(long long value);
};

} // namespace webbind