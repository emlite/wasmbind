#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCCodecStats
class RTCCodecStats : public RTCStats {
  explicit RTCCodecStats(Handle h) noexcept;
public:
    static RTCCodecStats take_ownership(Handle h) noexcept;
    explicit RTCCodecStats(const emlite::Val &val) noexcept;
    RTCCodecStats() noexcept;
    [[nodiscard]] RTCCodecStats clone() const noexcept;
    /// Getter of the `payloadType` attribute.
    [[nodiscard]] unsigned long payloadType() const;
    /// Setter of the `payloadType` attribute.
    void payloadType(unsigned long value);
    /// Getter of the `transportId` attribute.
    [[nodiscard]] jsbind::String transportId() const;
    /// Setter of the `transportId` attribute.
    void transportId(const jsbind::String& value);
    /// Getter of the `mimeType` attribute.
    [[nodiscard]] jsbind::String mimeType() const;
    /// Setter of the `mimeType` attribute.
    void mimeType(const jsbind::String& value);
    /// Getter of the `clockRate` attribute.
    [[nodiscard]] unsigned long clockRate() const;
    /// Setter of the `clockRate` attribute.
    void clockRate(unsigned long value);
    /// Getter of the `channels` attribute.
    [[nodiscard]] unsigned long channels() const;
    /// Setter of the `channels` attribute.
    void channels(unsigned long value);
    /// Getter of the `sdpFmtpLine` attribute.
    [[nodiscard]] jsbind::String sdpFmtpLine() const;
    /// Setter of the `sdpFmtpLine` attribute.
    void sdpFmtpLine(const jsbind::String& value);
};

} // namespace webbind