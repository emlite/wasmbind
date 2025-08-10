#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportReceiveStreamStats
/// [`WebTransportReceiveStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReceiveStreamStats)
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

} // namespace webbind