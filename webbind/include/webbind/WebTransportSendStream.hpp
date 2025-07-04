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
    WebTransportSendStreamStats clone() const noexcept;
    long long bytesWritten() const;
    void bytesWritten(long long value);
    long long bytesSent() const;
    void bytesSent(long long value);
    long long bytesAcknowledged() const;
    void bytesAcknowledged(long long value);
};

class WebTransportSendStream : public WritableStream {
    explicit WebTransportSendStream(Handle h) noexcept;

public:
    explicit WebTransportSendStream(const emlite::Val &val) noexcept;
    static WebTransportSendStream take_ownership(Handle h) noexcept;

    WebTransportSendStream clone() const noexcept;
    WebTransportSendGroup sendGroup() const;
    void sendGroup(const WebTransportSendGroup& value);
    long long sendOrder() const;
    void sendOrder(long long value);
    jsbind::Promise getStats();
    WebTransportWriter getWriter();
};

