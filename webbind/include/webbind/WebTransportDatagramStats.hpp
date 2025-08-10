#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportDatagramStats
class WebTransportDatagramStats : public emlite::Val {
  explicit WebTransportDatagramStats(Handle h) noexcept;
public:
    static WebTransportDatagramStats take_ownership(Handle h) noexcept;
    explicit WebTransportDatagramStats(const emlite::Val &val) noexcept;
    WebTransportDatagramStats() noexcept;
    [[nodiscard]] WebTransportDatagramStats clone() const noexcept;
    /// Getter of the `droppedIncoming` attribute.
    [[nodiscard]] long long droppedIncoming() const;
    /// Setter of the `droppedIncoming` attribute.
    void droppedIncoming(long long value);
    /// Getter of the `expiredIncoming` attribute.
    [[nodiscard]] long long expiredIncoming() const;
    /// Setter of the `expiredIncoming` attribute.
    void expiredIncoming(long long value);
    /// Getter of the `expiredOutgoing` attribute.
    [[nodiscard]] long long expiredOutgoing() const;
    /// Setter of the `expiredOutgoing` attribute.
    void expiredOutgoing(long long value);
    /// Getter of the `lostOutgoing` attribute.
    [[nodiscard]] long long lostOutgoing() const;
    /// Setter of the `lostOutgoing` attribute.
    void lostOutgoing(long long value);
};

} // namespace webbind