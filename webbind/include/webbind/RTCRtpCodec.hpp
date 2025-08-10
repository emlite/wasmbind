#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpCodec
class RTCRtpCodec : public emlite::Val {
  explicit RTCRtpCodec(Handle h) noexcept;
public:
    static RTCRtpCodec take_ownership(Handle h) noexcept;
    explicit RTCRtpCodec(const emlite::Val &val) noexcept;
    RTCRtpCodec() noexcept;
    [[nodiscard]] RTCRtpCodec clone() const noexcept;
    /// Getter of the `mimeType` attribute.
    [[nodiscard]] jsbind::String mimeType() const;
    /// Setter of the `mimeType` attribute.
    void mimeType(const jsbind::String& value);
    /// Getter of the `clockRate` attribute.
    [[nodiscard]] unsigned long clockRate() const;
    /// Setter of the `clockRate` attribute.
    void clockRate(unsigned long value);
    /// Getter of the `channels` attribute.
    [[nodiscard]] unsigned short channels() const;
    /// Setter of the `channels` attribute.
    void channels(unsigned short value);
    /// Getter of the `sdpFmtpLine` attribute.
    [[nodiscard]] jsbind::String sdpFmtpLine() const;
    /// Setter of the `sdpFmtpLine` attribute.
    void sdpFmtpLine(const jsbind::String& value);
};

} // namespace webbind