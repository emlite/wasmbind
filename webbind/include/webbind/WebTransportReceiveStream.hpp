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
    WebTransportReceiveStreamStats clone() const noexcept;
    long long bytesReceived() const;
    void bytesReceived(long long value);
    long long bytesRead() const;
    void bytesRead(long long value);
};

class WebTransportReceiveStream : public ReadableStream {
    explicit WebTransportReceiveStream(Handle h) noexcept;

public:
    explicit WebTransportReceiveStream(const emlite::Val &val) noexcept;
    static WebTransportReceiveStream take_ownership(Handle h) noexcept;

    WebTransportReceiveStream clone() const noexcept;
    jsbind::Promise getStats();
};

