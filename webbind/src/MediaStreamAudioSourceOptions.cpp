#include "webbind/MediaStreamAudioSourceOptions.hpp"
#include "webbind/MediaStream.hpp"

using emlite::Val;
namespace webbind {

MediaStreamAudioSourceOptions::MediaStreamAudioSourceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamAudioSourceOptions MediaStreamAudioSourceOptions::take_ownership(Handle h) noexcept {
        return MediaStreamAudioSourceOptions(h);
    }
MediaStreamAudioSourceOptions::MediaStreamAudioSourceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaStreamAudioSourceOptions::MediaStreamAudioSourceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MediaStreamAudioSourceOptions MediaStreamAudioSourceOptions::clone() const noexcept { return *this; }

MediaStream MediaStreamAudioSourceOptions::mediaStream() const {
    return emlite::Val::get("mediaStream").as<MediaStream>();
}

void MediaStreamAudioSourceOptions::mediaStream(const MediaStream& value) {
    emlite::Val::set("mediaStream", value);
}


} // namespace webbind