#include <webbind/RTCAnswerOptions.hpp>

using emlite::Val;
namespace webbind {

RTCAnswerOptions::RTCAnswerOptions(Handle h) noexcept : RTCOfferAnswerOptions(emlite::Val::take_ownership(h)) {}
RTCAnswerOptions RTCAnswerOptions::take_ownership(Handle h) noexcept {
        return RTCAnswerOptions(h);
    }
RTCAnswerOptions::RTCAnswerOptions(const emlite::Val &val) noexcept: RTCOfferAnswerOptions(val) {}
RTCAnswerOptions::RTCAnswerOptions() noexcept: RTCOfferAnswerOptions(emlite::Val::object()) {}
RTCAnswerOptions RTCAnswerOptions::clone() const noexcept { return *this; }


} // namespace webbind