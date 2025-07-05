#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebTransportConnectionStats;
class WebTransportCloseInfo;
class WebTransportDatagramDuplexStream;
class WebTransportBidirectionalStream;
class WebTransportSendStreamOptions;
class ReadableStream;
class WebTransportSendStream;
class WebTransportSendGroup;


class WebTransportConnectionStats : public emlite::Val {
  explicit WebTransportConnectionStats(Handle h) noexcept;
public:
    static WebTransportConnectionStats take_ownership(Handle h) noexcept;
    explicit WebTransportConnectionStats(const emlite::Val &val) noexcept;
    WebTransportConnectionStats() noexcept;
    WebTransportConnectionStats clone() const noexcept;
    long long bytesSent() const;
    void bytesSent(long long value);
    long long packetsSent() const;
    void packetsSent(long long value);
    long long bytesLost() const;
    void bytesLost(long long value);
    long long packetsLost() const;
    void packetsLost(long long value);
    long long bytesReceived() const;
    void bytesReceived(long long value);
    long long packetsReceived() const;
    void packetsReceived(long long value);
    jsbind::Any smoothedRtt() const;
    void smoothedRtt(const jsbind::Any& value);
    jsbind::Any rttVariation() const;
    void rttVariation(const jsbind::Any& value);
    jsbind::Any minRtt() const;
    void minRtt(const jsbind::Any& value);
    jsbind::Any datagrams() const;
    void datagrams(const jsbind::Any& value);
    long long estimatedSendRate() const;
    void estimatedSendRate(long long value);
    bool atSendCapacity() const;
    void atSendCapacity(bool value);
};

class WebTransportCloseInfo : public emlite::Val {
  explicit WebTransportCloseInfo(Handle h) noexcept;
public:
    static WebTransportCloseInfo take_ownership(Handle h) noexcept;
    explicit WebTransportCloseInfo(const emlite::Val &val) noexcept;
    WebTransportCloseInfo() noexcept;
    WebTransportCloseInfo clone() const noexcept;
    unsigned long closeCode() const;
    void closeCode(unsigned long value);
    jsbind::USVString reason() const;
    void reason(const jsbind::USVString& value);
};

class WebTransportSendStreamOptions : public emlite::Val {
  explicit WebTransportSendStreamOptions(Handle h) noexcept;
public:
    static WebTransportSendStreamOptions take_ownership(Handle h) noexcept;
    explicit WebTransportSendStreamOptions(const emlite::Val &val) noexcept;
    WebTransportSendStreamOptions() noexcept;
    WebTransportSendStreamOptions clone() const noexcept;
    bool waitUntilAvailable() const;
    void waitUntilAvailable(bool value);
};

class WebTransport : public emlite::Val {
    explicit WebTransport(Handle h) noexcept;

public:
    explicit WebTransport(const emlite::Val &val) noexcept;
    static WebTransport take_ownership(Handle h) noexcept;

    WebTransport clone() const noexcept;
    WebTransport(const jsbind::USVString& url);
    WebTransport(const jsbind::USVString& url, const jsbind::Any& options);
    jsbind::Promise getStats();
    jsbind::Promise exportKeyingMaterial(const jsbind::Any& label);
    jsbind::Promise exportKeyingMaterial(const jsbind::Any& label, const jsbind::Any& context);
    jsbind::Promise ready() const;
    WebTransportReliabilityMode reliability() const;
    WebTransportCongestionControl congestionControl() const;
    unsigned short anticipatedConcurrentIncomingUnidirectionalStreams() const;
    void anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value);
    unsigned short anticipatedConcurrentIncomingBidirectionalStreams() const;
    void anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value);
    jsbind::DOMString protocol() const;
    jsbind::Promise closed() const;
    jsbind::Promise draining() const;
    jsbind::Undefined close();
    jsbind::Undefined close(const WebTransportCloseInfo& closeInfo);
    WebTransportDatagramDuplexStream datagrams() const;
    jsbind::Promise createBidirectionalStream();
    jsbind::Promise createBidirectionalStream(const WebTransportSendStreamOptions& options);
    ReadableStream incomingBidirectionalStreams() const;
    jsbind::Promise createUnidirectionalStream();
    jsbind::Promise createUnidirectionalStream(const WebTransportSendStreamOptions& options);
    ReadableStream incomingUnidirectionalStreams() const;
    WebTransportSendGroup createSendGroup();
    static bool supportsReliableOnly();
};

