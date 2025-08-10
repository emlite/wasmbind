#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCOfferOptions
/// [`RTCOfferOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RTCOfferOptions)
class RTCOfferOptions : public emlite::Val {
  explicit RTCOfferOptions(Handle h) noexcept;
public:
    static RTCOfferOptions take_ownership(Handle h) noexcept;
    explicit RTCOfferOptions(const emlite::Val &val) noexcept;
    RTCOfferOptions() noexcept;
    [[nodiscard]] RTCOfferOptions clone() const noexcept;
    [[nodiscard]] bool offerToReceiveAudio() const;
    void offerToReceiveAudio(bool value);
    [[nodiscard]] bool offerToReceiveVideo() const;
    void offerToReceiveVideo(bool value);
};

} // namespace webbind