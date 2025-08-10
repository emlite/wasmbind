#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpContributingSource
class RTCRtpContributingSource : public emlite::Val {
  explicit RTCRtpContributingSource(Handle h) noexcept;
public:
    static RTCRtpContributingSource take_ownership(Handle h) noexcept;
    explicit RTCRtpContributingSource(const emlite::Val &val) noexcept;
    RTCRtpContributingSource() noexcept;
    [[nodiscard]] RTCRtpContributingSource clone() const noexcept;
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(const jsbind::Any& value);
    /// Getter of the `source` attribute.
    [[nodiscard]] unsigned long source() const;
    /// Setter of the `source` attribute.
    void source(unsigned long value);
    /// Getter of the `audioLevel` attribute.
    [[nodiscard]] double audioLevel() const;
    /// Setter of the `audioLevel` attribute.
    void audioLevel(double value);
    /// Getter of the `rtpTimestamp` attribute.
    [[nodiscard]] unsigned long rtpTimestamp() const;
    /// Setter of the `rtpTimestamp` attribute.
    void rtpTimestamp(unsigned long value);
};

} // namespace webbind