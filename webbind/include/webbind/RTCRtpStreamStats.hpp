#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCRtpStreamStats
/// [`RTCRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpStreamStats)
class RTCRtpStreamStats : public RTCStats {
  explicit RTCRtpStreamStats(Handle h) noexcept;
public:
    static RTCRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCRtpStreamStats(const emlite::Val &val) noexcept;
    RTCRtpStreamStats() noexcept;
    [[nodiscard]] RTCRtpStreamStats clone() const noexcept;
    [[nodiscard]] unsigned long ssrc() const;
    void ssrc(unsigned long value);
    [[nodiscard]] jsbind::String kind() const;
    void kind(const jsbind::String& value);
    [[nodiscard]] jsbind::String transportId() const;
    void transportId(const jsbind::String& value);
    [[nodiscard]] jsbind::String codecId() const;
    void codecId(const jsbind::String& value);
};

} // namespace webbind