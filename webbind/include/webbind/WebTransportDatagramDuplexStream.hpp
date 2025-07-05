#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebTransportDatagramsWritable;
class WebTransportSendOptions;
class ReadableStream;
class WebTransportSendGroup;


class WebTransportSendOptions : public emlite::Val {
  explicit WebTransportSendOptions(Handle h) noexcept;
public:
    static WebTransportSendOptions take_ownership(Handle h) noexcept;
    explicit WebTransportSendOptions(const emlite::Val &val) noexcept;
    WebTransportSendOptions() noexcept;
    WebTransportSendOptions clone() const noexcept;
    WebTransportSendGroup sendGroup() const;
    void sendGroup(const WebTransportSendGroup& value);
    long long sendOrder() const;
    void sendOrder(long long value);
};

class WebTransportDatagramDuplexStream : public emlite::Val {
    explicit WebTransportDatagramDuplexStream(Handle h) noexcept;

public:
    explicit WebTransportDatagramDuplexStream(const emlite::Val &val) noexcept;
    static WebTransportDatagramDuplexStream take_ownership(Handle h) noexcept;

    WebTransportDatagramDuplexStream clone() const noexcept;
    WebTransportDatagramsWritable createWritable();
    WebTransportDatagramsWritable createWritable(const WebTransportSendOptions& options);
    ReadableStream readable() const;
    unsigned long maxDatagramSize() const;
    double incomingMaxAge() const;
    void incomingMaxAge(double value);
    double outgoingMaxAge() const;
    void outgoingMaxAge(double value);
    double incomingHighWaterMark() const;
    void incomingHighWaterMark(double value);
    double outgoingHighWaterMark() const;
    void outgoingHighWaterMark(double value);
};

