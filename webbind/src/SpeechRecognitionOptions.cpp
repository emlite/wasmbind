#include <webbind/SpeechRecognitionOptions.hpp>

using emlite::Val;
namespace webbind {

SpeechRecognitionOptions::SpeechRecognitionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpeechRecognitionOptions SpeechRecognitionOptions::take_ownership(Handle h) noexcept {
        return SpeechRecognitionOptions(h);
    }
SpeechRecognitionOptions::SpeechRecognitionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SpeechRecognitionOptions::SpeechRecognitionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SpeechRecognitionOptions SpeechRecognitionOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> SpeechRecognitionOptions::langs() const {
    return emlite::Val::get("langs").as<jsbind::TypedArray<jsbind::String>>();
}

void SpeechRecognitionOptions::langs(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("langs", value);
}

bool SpeechRecognitionOptions::processLocally() const {
    return emlite::Val::get("processLocally").as<bool>();
}

void SpeechRecognitionOptions::processLocally(bool value) {
    emlite::Val::set("processLocally", value);
}


} // namespace webbind