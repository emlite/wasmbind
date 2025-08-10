#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpCodec
/// [`RTCRtpCodec`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpCodec)
class RTCRtpCodec : public emlite::Val {
  explicit RTCRtpCodec(Handle h) noexcept;
public:
    static RTCRtpCodec take_ownership(Handle h) noexcept;
    explicit RTCRtpCodec(const emlite::Val &val) noexcept;
    RTCRtpCodec() noexcept;
    [[nodiscard]] RTCRtpCodec clone() const noexcept;
    [[nodiscard]] jsbind::String mimeType() const;
    void mimeType(const jsbind::String& value);
    [[nodiscard]] unsigned long clockRate() const;
    void clockRate(unsigned long value);
    [[nodiscard]] unsigned short channels() const;
    void channels(unsigned short value);
    [[nodiscard]] jsbind::String sdpFmtpLine() const;
    void sdpFmtpLine(const jsbind::String& value);
};

} // namespace webbind