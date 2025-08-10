#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class WebTransportOptions;
class WebTransportConnectionStats;
class WebTransportCloseInfo;
class WebTransportDatagramDuplexStream;
class WebTransportBidirectionalStream;
class WebTransportSendStreamOptions;
class ReadableStream;
class WebTransportSendStream;
class WebTransportSendGroup;

/// Interface WebTransport
/// [`WebTransport`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport)
class WebTransport : public emlite::Val {
    explicit WebTransport(Handle h) noexcept;
public:
    explicit WebTransport(const emlite::Val &val) noexcept;
    static WebTransport take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WebTransport(..)` constructor, creating a new WebTransport instance
    WebTransport(const jsbind::String& url);
    /// The `new WebTransport(..)` constructor, creating a new WebTransport instance
    WebTransport(const jsbind::String& url, const WebTransportOptions& options);
    /// The getStats method.
    /// [`WebTransport.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/getStats)
    jsbind::Promise<WebTransportConnectionStats> getStats();
    /// The exportKeyingMaterial method.
    /// [`WebTransport.exportKeyingMaterial`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/exportKeyingMaterial)
    jsbind::Promise<jsbind::ArrayBuffer> exportKeyingMaterial(const jsbind::Any& label);
    /// The exportKeyingMaterial method.
    /// [`WebTransport.exportKeyingMaterial`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/exportKeyingMaterial)
    jsbind::Promise<jsbind::ArrayBuffer> exportKeyingMaterial(const jsbind::Any& label, const jsbind::Any& context);
    /// [`WebTransport.ready`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/ready)
    /// [`WebTransport.ready`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/ready)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> ready() const;
    /// [`WebTransport.reliability`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/reliability)
    /// [`WebTransport.reliability`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/reliability)
    [[nodiscard]] WebTransportReliabilityMode reliability() const;
    /// [`WebTransport.congestionControl`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/congestionControl)
    /// [`WebTransport.congestionControl`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/congestionControl)
    [[nodiscard]] WebTransportCongestionControl congestionControl() const;
    /// [`WebTransport.anticipatedConcurrentIncomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingUnidirectionalStreams)
    /// [`WebTransport.anticipatedConcurrentIncomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingUnidirectionalStreams)
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingUnidirectionalStreams() const;
    /// Setter of the `anticipatedConcurrentIncomingUnidirectionalStreams` attribute.
    /// [`WebTransport.anticipatedConcurrentIncomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingUnidirectionalStreams)
    void anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value);
    /// [`WebTransport.anticipatedConcurrentIncomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingBidirectionalStreams)
    /// [`WebTransport.anticipatedConcurrentIncomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingBidirectionalStreams)
    [[nodiscard]] unsigned short anticipatedConcurrentIncomingBidirectionalStreams() const;
    /// Setter of the `anticipatedConcurrentIncomingBidirectionalStreams` attribute.
    /// [`WebTransport.anticipatedConcurrentIncomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/anticipatedConcurrentIncomingBidirectionalStreams)
    void anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value);
    /// [`WebTransport.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/protocol)
    /// [`WebTransport.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// [`WebTransport.closed`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/closed)
    /// [`WebTransport.closed`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/closed)
    [[nodiscard]] jsbind::Promise<WebTransportCloseInfo> closed() const;
    /// [`WebTransport.draining`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/draining)
    /// [`WebTransport.draining`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/draining)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> draining() const;
    /// The close method.
    /// [`WebTransport.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/close)
    jsbind::Undefined close();
    /// The close method.
    /// [`WebTransport.close`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/close)
    jsbind::Undefined close(const WebTransportCloseInfo& closeInfo);
    /// [`WebTransport.datagrams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/datagrams)
    /// [`WebTransport.datagrams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/datagrams)
    [[nodiscard]] WebTransportDatagramDuplexStream datagrams() const;
    /// The createBidirectionalStream method.
    /// [`WebTransport.createBidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createBidirectionalStream)
    jsbind::Promise<WebTransportBidirectionalStream> createBidirectionalStream();
    /// The createBidirectionalStream method.
    /// [`WebTransport.createBidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createBidirectionalStream)
    jsbind::Promise<WebTransportBidirectionalStream> createBidirectionalStream(const WebTransportSendStreamOptions& options);
    /// [`WebTransport.incomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/incomingBidirectionalStreams)
    /// [`WebTransport.incomingBidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/incomingBidirectionalStreams)
    [[nodiscard]] ReadableStream incomingBidirectionalStreams() const;
    /// The createUnidirectionalStream method.
    /// [`WebTransport.createUnidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createUnidirectionalStream)
    jsbind::Promise<WebTransportSendStream> createUnidirectionalStream();
    /// The createUnidirectionalStream method.
    /// [`WebTransport.createUnidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createUnidirectionalStream)
    jsbind::Promise<WebTransportSendStream> createUnidirectionalStream(const WebTransportSendStreamOptions& options);
    /// [`WebTransport.incomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/incomingUnidirectionalStreams)
    /// [`WebTransport.incomingUnidirectionalStreams`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/incomingUnidirectionalStreams)
    [[nodiscard]] ReadableStream incomingUnidirectionalStreams() const;
    /// The createSendGroup method.
    /// [`WebTransport.createSendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/createSendGroup)
    WebTransportSendGroup createSendGroup();
    /// Getter of the `supportsReliableOnly` static attribute.
    /// [`WebTransport.supportsReliableOnly`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/supportsReliableOnly)
    /// [`WebTransport.supportsReliableOnly`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport/supportsReliableOnly)
    [[nodiscard]] static bool supportsReliableOnly();
};

} // namespace webbind