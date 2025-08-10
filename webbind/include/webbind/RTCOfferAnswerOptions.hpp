#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCOfferAnswerOptions
class RTCOfferAnswerOptions : public emlite::Val {
  explicit RTCOfferAnswerOptions(Handle h) noexcept;
public:
    static RTCOfferAnswerOptions take_ownership(Handle h) noexcept;
    explicit RTCOfferAnswerOptions(const emlite::Val &val) noexcept;
    RTCOfferAnswerOptions() noexcept;
    [[nodiscard]] RTCOfferAnswerOptions clone() const noexcept;
};

} // namespace webbind