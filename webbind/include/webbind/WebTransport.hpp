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
    [[nodiscard]] jsbind::Any datagrams() const;
    void datagrams(const jsbind::Any& value);
    [[nodiscard]] long long estimatedSendRate() const;
    void estimatedSendRate(long long value);
    [[nodiscard]] bool atSendCapacity() const;
    void atSendCapacity(bool value);
};

class WebTransportCloseInfo : public emlite::Val {
  explicit WebTransportCloseInfo(Handle h) noexcept;
public:
    static WebTransportCloseInfo take_ownership(Handle h) noexcept;
    explicit WebTransportCloseInfo(const emlite::Val &val) noexcept;
    WebTransportCloseInfo() noexcept;
    [[nodiscard]] WebTransportCloseInfo clone() const noexcept;
    [[nodiscard]] unsigned long closeCode() const;
    void closeCode(unsigned long value);
    [[nodiscard]] jsbind::String reason() const;
    void reason(const jsbind::String& value);
};

class WebTransportSendStreamOptions : public emlite::Val {
  explicit WebTransportSendStreamOptions(Handle h) noexcept;
public:
    static WebTransportSendStreamOptions take_ownership(Handle h) noexcept;
    explicit WebTransportSendStreamOptions(const emlite::Val &val) noexcept;
    WebTransportSendStreamOptions() noexcept;
    [[nodiscard]] WebTransportSendStreamOptions clone() const noexcept;
    [[nodiscard]] bool waitUntilAvailable() const;
    void waitUntilAvailable(bool value);
};

/// The WebTransport class.
/// [`WebTransport`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport)
class WebTransport : public emlite::Val {
    explicit WebTransport(Handle h) noexcept;

public:
    explicit WebTransport(const emlite::Val &val) noexcept;
    static WebTransport take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransport clone() const noexcept;
    /// The `new WebTransport(..)` constructor, creating a new WebTransport instance
    WebTransport(const jsbind::String& url);
    /// The `new WebTransport(..)` constructor, creating a new WebTransport instance
    WebTransport(const jsbind::String& url, const jsbind::Any& options);
    /// The getStats method.
    /// [`WebTransport.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/getStats)
    jsbind::Promise<WebTransportConnectionStats> getStats();
    /// The exportKeyingMaterial method.
    /// [`WebTransport.exportKeyingMaterial`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/exportKeyingMaterial)
    jsbind::Promise<jsbind::ArrayBuffer> exportKeyingMaterial(const jsbind::Any& label);
    /// The exportKeyingMaterial method.
    /// [`WebTransport.exportKeyingMaterial`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/exportKeyingMaterial)
    jsbind::Promise<jsbind::ArrayBuffer> exportKeyingMaterial(const jsbind::Any& label, const jsbind::Any& context);
    /// Getter of the `ready` attribute.
    /// [`WebTransport.ready`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/ready)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> ready() const;
    /// Getter of the `reliability` attribute.
    /// [`WebTransport.reliability`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/reliability)
    [[nodiscard]] WebTransportReliabilityMode reliability() const;
    /// Getter of the `congestionControl` attribute.
    /// [`WebTransport.congestionControl`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/congestionControl)
    [[nodiscard]] WebTransportCongestionControl congestionControl() const;
    /// Getter of the `anticipatedConcurrentIncomingUnidirectionalStreams` attribute.
    /// [`WebTransport.anticipatedConcurrentIncomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingUnidirectionalStreams)
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingUnidirectionalStreams() const;
    /// Setter of the `anticipatedConcurrentIncomingUnidirectionalStreams` attribute.
    /// [`WebTransport.anticipatedConcurrentIncomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingUnidirectionalStreams)
    void anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value);
    /// Getter of the `anticipatedConcurrentIncomingBidirectionalStreams` attribute.
    /// [`WebTransport.anticipatedConcurrentIncomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingBidirectionalStreams)
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingBidirectionalStreams() const;
    /// Setter of the `anticipatedConcurrentIncomingBidirectionalStreams` attribute.
    /// [`WebTransport.anticipatedConcurrentIncomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingBidirectionalStreams)
    void anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value);
    /// Getter of the `protocol` attribute.
    /// [`WebTransport.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Getter of the `closed` attribute.
    /// [`WebTransport.closed`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/closed)
    [[nodiscard]] jsbind::Promise<WebTransportCloseInfo> closed() const;
    /// Getter of the `draining` attribute.
    /// [`WebTransport.draining`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/draining)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> draining() const;
    /// The close method.
    /// [`WebTransport.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/close)
    jsbind::Undefined close();
    /// The close method.
    /// [`WebTransport.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/close)
    jsbind::Undefined close(const WebTransportCloseInfo& closeInfo);
    /// Getter of the `datagrams` attribute.
    /// [`WebTransport.datagrams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/datagrams)
    [[nodiscard]] WebTransportDatagramDuplexStream datagrams() const;
    /// The createBidirectionalStream method.
    /// [`WebTransport.createBidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createBidirectionalStream)
    jsbind::Promise<WebTransportBidirectionalStream> createBidirectionalStream();
    /// The createBidirectionalStream method.
    /// [`WebTransport.createBidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createBidirectionalStream)
    jsbind::Promise<WebTransportBidirectionalStream> createBidirectionalStream(const WebTransportSendStreamOptions& options);
    /// Getter of the `incomingBidirectionalStreams` attribute.
    /// [`WebTransport.incomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/incomingBidirectionalStreams)
    [[nodiscard]] ReadableStream incomingBidirectionalStreams() const;
    /// The createUnidirectionalStream method.
    /// [`WebTransport.createUnidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createUnidirectionalStream)
    jsbind::Promise<WebTransportSendStream> createUnidirectionalStream();
    /// The createUnidirectionalStream method.
    /// [`WebTransport.createUnidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createUnidirectionalStream)
    jsbind::Promise<WebTransportSendStream> createUnidirectionalStream(const WebTransportSendStreamOptions& options);
    /// Getter of the `incomingUnidirectionalStreams` attribute.
    /// [`WebTransport.incomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/incomingUnidirectionalStreams)
    [[nodiscard]] ReadableStream incomingUnidirectionalStreams() const;
    /// The createSendGroup method.
    /// [`WebTransport.createSendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createSendGroup)
    WebTransportSendGroup createSendGroup();
    /// Getter of the `supportsReliableOnly` static attribute.
    /// [`WebTransport.supportsReliableOnly`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/supportsReliableOnly)
    [[nodiscard]] static bool supportsReliableOnly();
};

