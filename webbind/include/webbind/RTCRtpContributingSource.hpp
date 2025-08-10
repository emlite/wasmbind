#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpContributingSource
/// [`RTCRtpContributingSource`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpContributingSource)
class RTCRtpContributingSource : public emlite::Val {
  explicit RTCRtpContributingSource(Handle h) noexcept;
public:
    static RTCRtpContributingSource take_ownership(Handle h) noexcept;
    explicit RTCRtpContributingSource(const emlite::Val &val) noexcept;
    RTCRtpContributingSource() noexcept;
    [[nodiscard]] RTCRtpContributingSource clone() const noexcept;
    [[nodiscard]] jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    [[nodiscard]] unsigned long source() const;
    void source(unsigned long value);
    [[nodiscard]] double audioLevel() const;
    void audioLevel(double value);
    [[nodiscard]] unsigned long rtpTimestamp() const;
    void rtpTimestamp(unsigned long value);
};

} // namespace webbind