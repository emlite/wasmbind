#include <webbind/MediaElementAudioSourceOptions.hpp>
#include <webbind/HTMLMediaElement.hpp>

using emlite::Val;
namespace webbind {

MediaElementAudioSourceOptions::MediaElementAudioSourceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaElementAudioSourceOptions MediaElementAudioSourceOptions::take_ownership(Handle h) noexcept {
        return MediaElementAudioSourceOptions(h);
    }
MediaElementAudioSourceOptions::MediaElementAudioSourceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaElementAudioSourceOptions::MediaElementAudioSourceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MediaElementAudioSourceOptions MediaElementAudioSourceOptions::clone() const noexcept { return *this; }

HTMLMediaElement MediaElementAudioSourceOptions::mediaElement() const {
    return emlite::Val::get("mediaElement").as<HTMLMediaElement>();
}

void MediaElementAudioSourceOptions::mediaElement(const HTMLMediaElement& value) {
    emlite::Val::set("mediaElement", value);
}


} // namespace webbind