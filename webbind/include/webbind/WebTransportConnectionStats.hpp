#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebTransportDatagramStats.hpp"

namespace webbind {

/// Dictionary type WebTransportConnectionStats
class WebTransportConnectionStats : public emlite::Val {
  explicit WebTransportConnectionStats(Handle h) noexcept;
public:
    static WebTransportConnectionStats take_ownership(Handle h) noexcept;
    explicit WebTransportConnectionStats(const emlite::Val &val) noexcept;
    WebTransportConnectionStats() noexcept;
    [[nodiscard]] WebTransportConnectionStats clone() const noexcept;
    /// Getter of the `bytesSent` attribute.
    [[nodiscard]] long long bytesSent() const;
    /// Setter of the `bytesSent` attribute.
    void bytesSent(long long value);
    /// Getter of the `packetsSent` attribute.
    [[nodiscard]] long long packetsSent() const;
    /// Setter of the `packetsSent` attribute.
    void packetsSent(long long value);
    /// Getter of the `bytesLost` attribute.
    [[nodiscard]] long long bytesLost() const;
    /// Setter of the `bytesLost` attribute.
    void bytesLost(long long value);
    /// Getter of the `packetsLost` attribute.
    [[nodiscard]] long long packetsLost() const;
    /// Setter of the `packetsLost` attribute.
    void packetsLost(long long value);
    /// Getter of the `bytesReceived` attribute.
    [[nodiscard]] long long bytesReceived() const;
    /// Setter of the `bytesReceived` attribute.
    void bytesReceived(long long value);
    /// Getter of the `packetsReceived` attribute.
    [[nodiscard]] long long packetsReceived() const;
    /// Setter of the `packetsReceived` attribute.
    void packetsReceived(long long value);
    /// Getter of the `smoothedRtt` attribute.
    [[nodiscard]] jsbind::Any smoothedRtt() const;
    /// Setter of the `smoothedRtt` attribute.
    void smoothedRtt(const jsbind::Any& value);
    /// Getter of the `rttVariation` attribute.
    [[nodiscard]] jsbind::Any rttVariation() const;
    /// Setter of the `rttVariation` attribute.
    void rttVariation(const jsbind::Any& value);
    /// Getter of the `minRtt` attribute.
    [[nodiscard]] jsbind::Any minRtt() const;
    /// Setter of the `minRtt` attribute.
    void minRtt(const jsbind::Any& value);
    /// Getter of the `datagrams` attribute.
    [[nodiscard]] WebTransportDatagramStats datagrams() const;
    /// Setter of the `datagrams` attribute.
    void datagrams(const WebTransportDatagramStats& value);
    /// Getter of the `estimatedSendRate` attribute.
    [[nodiscard]] long long estimatedSendRate() const;
    /// Setter of the `estimatedSendRate` attribute.
    void estimatedSendRate(long long value);
    /// Getter of the `atSendCapacity` attribute.
    [[nodiscard]] bool atSendCapacity() const;
    /// Setter of the `atSendCapacity` attribute.
    void atSendCapacity(bool value);
};

} // namespace webbind