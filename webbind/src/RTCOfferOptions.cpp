#include "webbind/RTCOfferOptions.hpp"

using emlite::Val;
namespace webbind {

RTCOfferOptions::RTCOfferOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCOfferOptions RTCOfferOptions::take_ownership(Handle h) noexcept {
        return RTCOfferOptions(h);
    }
RTCOfferOptions::RTCOfferOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCOfferOptions::RTCOfferOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCOfferOptions RTCOfferOptions::clone() const noexcept { return *this; }

bool RTCOfferOptions::offerToReceiveAudio() const {
    return emlite::Val::get("offerToReceiveAudio").as<bool>();
}

void RTCOfferOptions::offerToReceiveAudio(bool value) {
    emlite::Val::set("offerToReceiveAudio", value);
}

bool RTCOfferOptions::offerToReceiveVideo() const {
    return emlite::Val::get("offerToReceiveVideo").as<bool>();
}

void RTCOfferOptions::offerToReceiveVideo(bool value) {
    emlite::Val::set("offerToReceiveVideo", value);
}


} // namespace webbind