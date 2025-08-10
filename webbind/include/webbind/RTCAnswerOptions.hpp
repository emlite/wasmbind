#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCOfferAnswerOptions.hpp"

namespace webbind {

/// Dictionary type RTCAnswerOptions
class RTCAnswerOptions : public RTCOfferAnswerOptions {
  explicit RTCAnswerOptions(Handle h) noexcept;
public:
    static RTCAnswerOptions take_ownership(Handle h) noexcept;
    explicit RTCAnswerOptions(const emlite::Val &val) noexcept;
    RTCAnswerOptions() noexcept;
    [[nodiscard]] RTCAnswerOptions clone() const noexcept;
};

} // namespace webbind