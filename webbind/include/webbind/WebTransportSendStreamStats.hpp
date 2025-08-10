#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportSendStreamStats
/// [`WebTransportSendStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStreamStats)
class WebTransportSendStreamStats : public emlite::Val {
  explicit WebTransportSendStreamStats(Handle h) noexcept;
public:
    static WebTransportSendStreamStats take_ownership(Handle h) noexcept;
    explicit WebTransportSendStreamStats(const emlite::Val &val) noexcept;
    WebTransportSendStreamStats() noexcept;
    [[nodiscard]] WebTransportSendStreamStats clone() const noexcept;
    [[nodiscard]] long long bytesWritten() const;
    void bytesWritten(long long value);
    [[nodiscard]] long long bytesSent() const;
    void bytesSent(long long value);
    [[nodiscard]] long long bytesAcknowledged() const;
    void bytesAcknowledged(long long value);
};

} // namespace webbind