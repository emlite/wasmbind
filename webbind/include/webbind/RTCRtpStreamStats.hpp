#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCRtpStreamStats
class RTCRtpStreamStats : public RTCStats {
  explicit RTCRtpStreamStats(Handle h) noexcept;
public:
    static RTCRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCRtpStreamStats(const emlite::Val &val) noexcept;
    RTCRtpStreamStats() noexcept;
    [[nodiscard]] RTCRtpStreamStats clone() const noexcept;
    /// Getter of the `ssrc` attribute.
    [[nodiscard]] unsigned long ssrc() const;
    /// Setter of the `ssrc` attribute.
    void ssrc(unsigned long value);
    /// Getter of the `kind` attribute.
    [[nodiscard]] jsbind::String kind() const;
    /// Setter of the `kind` attribute.
    void kind(const jsbind::String& value);
    /// Getter of the `transportId` attribute.
    [[nodiscard]] jsbind::String transportId() const;
    /// Setter of the `transportId` attribute.
    void transportId(const jsbind::String& value);
    /// Getter of the `codecId` attribute.
    [[nodiscard]] jsbind::String codecId() const;
    /// Setter of the `codecId` attribute.
    void codecId(const jsbind::String& value);
};

} // namespace webbind