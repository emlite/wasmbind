#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCSentRtpStreamStats
class RTCSentRtpStreamStats : public RTCRtpStreamStats {
  explicit RTCSentRtpStreamStats(Handle h) noexcept;
public:
    static RTCSentRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCSentRtpStreamStats(const emlite::Val &val) noexcept;
    RTCSentRtpStreamStats() noexcept;
    [[nodiscard]] RTCSentRtpStreamStats clone() const noexcept;
    /// Getter of the `packetsSent` attribute.
    [[nodiscard]] long long packetsSent() const;
    /// Setter of the `packetsSent` attribute.
    void packetsSent(long long value);
    /// Getter of the `bytesSent` attribute.
    [[nodiscard]] long long bytesSent() const;
    /// Setter of the `bytesSent` attribute.
    void bytesSent(long long value);
};

} // namespace webbind