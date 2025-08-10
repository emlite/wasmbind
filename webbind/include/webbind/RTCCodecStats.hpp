#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCCodecStats
/// [`RTCCodecStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCodecStats)
class RTCCodecStats : public RTCStats {
  explicit RTCCodecStats(Handle h) noexcept;
public:
    static RTCCodecStats take_ownership(Handle h) noexcept;
    explicit RTCCodecStats(const emlite::Val &val) noexcept;
    RTCCodecStats() noexcept;
    [[nodiscard]] RTCCodecStats clone() const noexcept;
    [[nodiscard]] unsigned long payloadType() const;
    void payloadType(unsigned long value);
    [[nodiscard]] jsbind::String transportId() const;
    void transportId(const jsbind::String& value);
    [[nodiscard]] jsbind::String mimeType() const;
    void mimeType(const jsbind::String& value);
    [[nodiscard]] unsigned long clockRate() const;
    void clockRate(unsigned long value);
    [[nodiscard]] unsigned long channels() const;
    void channels(unsigned long value);
    [[nodiscard]] jsbind::String sdpFmtpLine() const;
    void sdpFmtpLine(const jsbind::String& value);
};

} // namespace webbind