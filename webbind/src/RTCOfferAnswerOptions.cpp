#include <webbind/RTCOfferAnswerOptions.hpp>

using emlite::Val;
namespace webbind {

RTCOfferAnswerOptions::RTCOfferAnswerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCOfferAnswerOptions RTCOfferAnswerOptions::take_ownership(Handle h) noexcept {
        return RTCOfferAnswerOptions(h);
    }
RTCOfferAnswerOptions::RTCOfferAnswerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCOfferAnswerOptions::RTCOfferAnswerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCOfferAnswerOptions RTCOfferAnswerOptions::clone() const noexcept { return *this; }


} // namespace webbind