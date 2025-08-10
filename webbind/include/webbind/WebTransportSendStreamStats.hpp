#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportSendStreamStats
class WebTransportSendStreamStats : public emlite::Val {
  explicit WebTransportSendStreamStats(Handle h) noexcept;
public:
    static WebTransportSendStreamStats take_ownership(Handle h) noexcept;
    explicit WebTransportSendStreamStats(const emlite::Val &val) noexcept;
    WebTransportSendStreamStats() noexcept;
    [[nodiscard]] WebTransportSendStreamStats clone() const noexcept;
    /// Getter of the `bytesWritten` attribute.
    [[nodiscard]] long long bytesWritten() const;
    /// Setter of the `bytesWritten` attribute.
    void bytesWritten(long long value);
    /// Getter of the `bytesSent` attribute.
    [[nodiscard]] long long bytesSent() const;
    /// Setter of the `bytesSent` attribute.
    void bytesSent(long long value);
    /// Getter of the `bytesAcknowledged` attribute.
    [[nodiscard]] long long bytesAcknowledged() const;
    /// Setter of the `bytesAcknowledged` attribute.
    void bytesAcknowledged(long long value);
};

} // namespace webbind