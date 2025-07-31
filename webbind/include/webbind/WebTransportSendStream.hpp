#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStream.hpp"
#include "enums.hpp"

class WebTransportSendGroup;
class WebTransportSendStreamStats;
class WebTransportWriter;


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

/// The WebTransportSendStream class.
/// [`WebTransportSendStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream)
class WebTransportSendStream : public WritableStream {
    explicit WebTransportSendStream(Handle h) noexcept;

public:
    explicit WebTransportSendStream(const emlite::Val &val) noexcept;
    static WebTransportSendStream take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransportSendStream clone() const noexcept;
    /// Getter of the `sendGroup` attribute.
    /// [`WebTransportSendStream.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendGroup)
    [[nodiscard]] WebTransportSendGroup sendGroup() const;
    /// Setter of the `sendGroup` attribute.
    /// [`WebTransportSendStream.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendGroup)
    void sendGroup(const WebTransportSendGroup& value);
    /// Getter of the `sendOrder` attribute.
    /// [`WebTransportSendStream.sendOrder`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendOrder)
    [[nodiscard]] long long sendOrder() const;
    /// Setter of the `sendOrder` attribute.
    /// [`WebTransportSendStream.sendOrder`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendOrder)
    void sendOrder(long long value);
    /// The getStats method.
    /// [`WebTransportSendStream.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/getStats)
    jsbind::Promise<WebTransportSendStreamStats> getStats();
    /// The getWriter method.
    /// [`WebTransportSendStream.getWriter`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/getWriter)
    WebTransportWriter getWriter();
};

