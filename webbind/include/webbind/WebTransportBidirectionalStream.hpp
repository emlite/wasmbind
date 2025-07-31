#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebTransportReceiveStream;
class WebTransportSendStream;


/// The WebTransportBidirectionalStream class.
/// [`WebTransportBidirectionalStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportBidirectionalStream)
class WebTransportBidirectionalStream : public emlite::Val {
    explicit WebTransportBidirectionalStream(Handle h) noexcept;

public:
    explicit WebTransportBidirectionalStream(const emlite::Val &val) noexcept;
    static WebTransportBidirectionalStream take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransportBidirectionalStream clone() const noexcept;
    /// Getter of the `readable` attribute.
    /// [`WebTransportBidirectionalStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportBidirectionalStream/readable)
    [[nodiscard]] WebTransportReceiveStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`WebTransportBidirectionalStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportBidirectionalStream/writable)
    [[nodiscard]] WebTransportSendStream writable() const;
};

