#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportReceiveStreamStats
class WebTransportReceiveStreamStats : public emlite::Val {
  explicit WebTransportReceiveStreamStats(Handle h) noexcept;
public:
    static WebTransportReceiveStreamStats take_ownership(Handle h) noexcept;
    explicit WebTransportReceiveStreamStats(const emlite::Val &val) noexcept;
    WebTransportReceiveStreamStats() noexcept;
    [[nodiscard]] WebTransportReceiveStreamStats clone() const noexcept;
    /// Getter of the `bytesReceived` attribute.
    [[nodiscard]] long long bytesReceived() const;
    /// Setter of the `bytesReceived` attribute.
    void bytesReceived(long long value);
    /// Getter of the `bytesRead` attribute.
    [[nodiscard]] long long bytesRead() const;
    /// Setter of the `bytesRead` attribute.
    void bytesRead(long long value);
};

} // namespace webbind