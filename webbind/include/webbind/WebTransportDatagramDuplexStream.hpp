#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebTransportSendOptions.hpp"

namespace webbind {

class WebTransportDatagramsWritable;
class ReadableStream;

/// Interface WebTransportDatagramDuplexStream
/// [`WebTransportDatagramDuplexStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream)
class WebTransportDatagramDuplexStream : public emlite::Val {
    explicit WebTransportDatagramDuplexStream(Handle h) noexcept;
public:
    explicit WebTransportDatagramDuplexStream(const emlite::Val &val) noexcept;
    static WebTransportDatagramDuplexStream take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportDatagramDuplexStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createWritable method.
    /// [`WebTransportDatagramDuplexStream.createWritable`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/createWritable)
    WebTransportDatagramsWritable createWritable();
    /// The createWritable method.
    /// [`WebTransportDatagramDuplexStream.createWritable`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/createWritable)
    WebTransportDatagramsWritable createWritable(const WebTransportSendOptions& options);
    /// Getter of the `readable` attribute.
    /// [`WebTransportDatagramDuplexStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `maxDatagramSize` attribute.
    /// [`WebTransportDatagramDuplexStream.maxDatagramSize`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/maxDatagramSize)
    [[nodiscard]] unsigned long maxDatagramSize() const;
    /// Getter of the `incomingMaxAge` attribute.
    /// [`WebTransportDatagramDuplexStream.incomingMaxAge`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/incomingMaxAge)
    [[nodiscard]] double incomingMaxAge() const;
    /// Setter of the `incomingMaxAge` attribute.
    /// [`WebTransportDatagramDuplexStream.incomingMaxAge`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/incomingMaxAge)
    void incomingMaxAge(double value);
    /// Getter of the `outgoingMaxAge` attribute.
    /// [`WebTransportDatagramDuplexStream.outgoingMaxAge`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/outgoingMaxAge)
    [[nodiscard]] double outgoingMaxAge() const;
    /// Setter of the `outgoingMaxAge` attribute.
    /// [`WebTransportDatagramDuplexStream.outgoingMaxAge`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/outgoingMaxAge)
    void outgoingMaxAge(double value);
    /// Getter of the `incomingHighWaterMark` attribute.
    /// [`WebTransportDatagramDuplexStream.incomingHighWaterMark`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/incomingHighWaterMark)
    [[nodiscard]] double incomingHighWaterMark() const;
    /// Setter of the `incomingHighWaterMark` attribute.
    /// [`WebTransportDatagramDuplexStream.incomingHighWaterMark`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/incomingHighWaterMark)
    void incomingHighWaterMark(double value);
    /// Getter of the `outgoingHighWaterMark` attribute.
    /// [`WebTransportDatagramDuplexStream.outgoingHighWaterMark`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/outgoingHighWaterMark)
    [[nodiscard]] double outgoingHighWaterMark() const;
    /// Setter of the `outgoingHighWaterMark` attribute.
    /// [`WebTransportDatagramDuplexStream.outgoingHighWaterMark`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream/outgoingHighWaterMark)
    void outgoingHighWaterMark(double value);
};

} // namespace webbind