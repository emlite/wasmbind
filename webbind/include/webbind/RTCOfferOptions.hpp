#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCOfferOptions
class RTCOfferOptions : public emlite::Val {
  explicit RTCOfferOptions(Handle h) noexcept;
public:
    static RTCOfferOptions take_ownership(Handle h) noexcept;
    explicit RTCOfferOptions(const emlite::Val &val) noexcept;
    RTCOfferOptions() noexcept;
    [[nodiscard]] RTCOfferOptions clone() const noexcept;
    /// Getter of the `offerToReceiveAudio` attribute.
    [[nodiscard]] bool offerToReceiveAudio() const;
    /// Setter of the `offerToReceiveAudio` attribute.
    void offerToReceiveAudio(bool value);
    /// Getter of the `offerToReceiveVideo` attribute.
    [[nodiscard]] bool offerToReceiveVideo() const;
    /// Setter of the `offerToReceiveVideo` attribute.
    void offerToReceiveVideo(bool value);
};

} // namespace webbind