#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportDatagramStats
/// [`WebTransportDatagramStats`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramStats)
class WebTransportDatagramStats : public emlite::Val {
  explicit WebTransportDatagramStats(Handle h) noexcept;
public:
    static WebTransportDatagramStats take_ownership(Handle h) noexcept;
    explicit WebTransportDatagramStats(const emlite::Val &val) noexcept;
    WebTransportDatagramStats() noexcept;
    [[nodiscard]] WebTransportDatagramStats clone() const noexcept;
    [[nodiscard]] long long droppedIncoming() const;
    void droppedIncoming(long long value);
    [[nodiscard]] long long expiredIncoming() const;
    void expiredIncoming(long long value);
    [[nodiscard]] long long expiredOutgoing() const;
    void expiredOutgoing(long long value);
    [[nodiscard]] long long lostOutgoing() const;
    void lostOutgoing(long long value);
};

} // namespace webbind