#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCSentRtpStreamStats
/// [`RTCSentRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSentRtpStreamStats)
class RTCSentRtpStreamStats : public RTCRtpStreamStats {
  explicit RTCSentRtpStreamStats(Handle h) noexcept;
public:
    static RTCSentRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCSentRtpStreamStats(const emlite::Val &val) noexcept;
    RTCSentRtpStreamStats() noexcept;
    [[nodiscard]] RTCSentRtpStreamStats clone() const noexcept;
    [[nodiscard]] long long packetsSent() const;
    void packetsSent(long long value);
    [[nodiscard]] long long bytesSent() const;
    void bytesSent(long long value);
    [[nodiscard]] long long packetsSentWithEct1() const;
    void packetsSentWithEct1(long long value);
};

} // namespace webbind