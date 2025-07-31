#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ReadableStream.hpp"
#include "enums.hpp"

class WebTransportReceiveStreamStats;


class WebTransportReceiveStreamStats : public emlite::Val {
  explicit WebTransportReceiveStreamStats(Handle h) noexcept;
public:
    static WebTransportReceiveStreamStats take_ownership(Handle h) noexcept;
    explicit WebTransportReceiveStreamStats(const emlite::Val &val) noexcept;
    WebTransportReceiveStreamStats() noexcept;
    [[nodiscard]] WebTransportReceiveStreamStats clone() const noexcept;
    [[nodiscard]] long long bytesReceived() const;
    void bytesReceived(long long value);
    [[nodiscard]] long long bytesRead() const;
    void bytesRead(long long value);
};

/// The WebTransportReceiveStream class.
/// [`WebTransportReceiveStream`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReceiveStream)
class WebTransportReceiveStream : public ReadableStream {
    explicit WebTransportReceiveStream(Handle h) noexcept;

public:
    explicit WebTransportReceiveStream(const emlite::Val &val) noexcept;
    static WebTransportReceiveStream take_ownership(Handle h) noexcept;

    [[nodiscard]] WebTransportReceiveStream clone() const noexcept;
    /// The getStats method.
    /// [`WebTransportReceiveStream.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReceiveStream/getStats)
    jsbind::Promise<WebTransportReceiveStreamStats> getStats();
};

