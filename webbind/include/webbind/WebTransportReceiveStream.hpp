#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReadableStream.hpp"

namespace webbind {

class WebTransportReceiveStreamStats;

/// Interface WebTransportReceiveStream
/// [`WebTransportReceiveStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReceiveStream)
class WebTransportReceiveStream : public ReadableStream {
    explicit WebTransportReceiveStream(Handle h) noexcept;
public:
    explicit WebTransportReceiveStream(const emlite::Val &val) noexcept;
    static WebTransportReceiveStream take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportReceiveStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getStats method.
    /// [`WebTransportReceiveStream.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReceiveStream/getStats)
    jsbind::Promise<WebTransportReceiveStreamStats> getStats();
};

} // namespace webbind