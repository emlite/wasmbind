#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStream.hpp"
#include "enums.hpp"

class WebTransportSendGroup;


/// The WebTransportDatagramsWritable class.
/// [`WebTransportDatagramsWritable`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramsWritable)
class WebTransportDatagramsWritable : public WritableStream {
    explicit WebTransportDatagramsWritable(Handle h) noexcept;

public:
    explicit WebTransportDatagramsWritable(const emlite::Val &val) noexcept;
    static WebTransportDatagramsWritable take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransportDatagramsWritable clone() const noexcept;
    /// Getter of the `sendGroup` attribute.
    /// [`WebTransportDatagramsWritable.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramsWritable/sendGroup)
    [[nodiscard]] WebTransportSendGroup sendGroup() const;
    /// Setter of the `sendGroup` attribute.
    /// [`WebTransportDatagramsWritable.sendGroup`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramsWritable/sendGroup)
    void sendGroup(const WebTransportSendGroup& value);
    /// Getter of the `sendOrder` attribute.
    /// [`WebTransportDatagramsWritable.sendOrder`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramsWritable/sendOrder)
    [[nodiscard]] long long sendOrder() const;
    /// Setter of the `sendOrder` attribute.
    /// [`WebTransportDatagramsWritable.sendOrder`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramsWritable/sendOrder)
    void sendOrder(long long value);
};

