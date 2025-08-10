#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WritableStream.hpp"

namespace webbind {

class WebTransportSendGroup;
class WebTransportSendStreamStats;
class WebTransportWriter;

/// Interface WebTransportSendStream
/// [`WebTransportSendStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream)
class WebTransportSendStream : public WritableStream {
    explicit WebTransportSendStream(Handle h) noexcept;
public:
    explicit WebTransportSendStream(const emlite::Val &val) noexcept;
    static WebTransportSendStream take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportSendStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`WebTransportSendStream.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendGroup)
    /// [`WebTransportSendStream.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendGroup)
    [[nodiscard]] WebTransportSendGroup sendGroup() const;
    /// Setter of the `sendGroup` attribute.
    /// [`WebTransportSendStream.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendGroup)
    void sendGroup(const WebTransportSendGroup& value);
    /// [`WebTransportSendStream.sendOrder`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream/sendOrder)
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

} // namespace webbind