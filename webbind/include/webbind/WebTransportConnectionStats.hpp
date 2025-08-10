#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebTransportDatagramStats.hpp"

namespace webbind {

/// Dictionary type WebTransportConnectionStats
/// [`WebTransportConnectionStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportConnectionStats)
class WebTransportConnectionStats : public emlite::Val {
  explicit WebTransportConnectionStats(Handle h) noexcept;
public:
    static WebTransportConnectionStats take_ownership(Handle h) noexcept;
    explicit WebTransportConnectionStats(const emlite::Val &val) noexcept;
    WebTransportConnectionStats() noexcept;
    [[nodiscard]] WebTransportConnectionStats clone() const noexcept;
    [[nodiscard]] long long bytesSent() const;
    void bytesSent(long long value);
    [[nodiscard]] long long packetsSent() const;
    void packetsSent(long long value);
    [[nodiscard]] long long bytesLost() const;
    void bytesLost(long long value);
    [[nodiscard]] long long packetsLost() const;
    void packetsLost(long long value);
    [[nodiscard]] long long bytesReceived() const;
    void bytesReceived(long long value);
    [[nodiscard]] long long packetsReceived() const;
    void packetsReceived(long long value);
    [[nodiscard]] jsbind::Any smoothedRtt() const;
    void smoothedRtt(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any rttVariation() const;
    void rttVariation(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any minRtt() const;
    void minRtt(const jsbind::Any& value);
    [[nodiscard]] WebTransportDatagramStats datagrams() const;
    void datagrams(const WebTransportDatagramStats& value);
    [[nodiscard]] long long estimatedSendRate() const;
    void estimatedSendRate(long long value);
    [[nodiscard]] bool atSendCapacity() const;
    void atSendCapacity(bool value);
};

} // namespace webbind