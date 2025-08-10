#include <webbind/EncodedAudioChunkMetadata.hpp>
#include <webbind/AudioDecoderConfig.hpp>

using emlite::Val;
namespace webbind {

EncodedAudioChunkMetadata::EncodedAudioChunkMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncodedAudioChunkMetadata EncodedAudioChunkMetadata::take_ownership(Handle h) noexcept {
        return EncodedAudioChunkMetadata(h);
    }
EncodedAudioChunkMetadata::EncodedAudioChunkMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
EncodedAudioChunkMetadata::EncodedAudioChunkMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
EncodedAudioChunkMetadata EncodedAudioChunkMetadata::clone() const noexcept { return *this; }

AudioDecoderConfig EncodedAudioChunkMetadata::decoderConfig() const {
    return emlite::Val::get("decoderConfig").as<AudioDecoderConfig>();
}

void EncodedAudioChunkMetadata::decoderConfig(const AudioDecoderConfig& value) {
    emlite::Val::set("decoderConfig", value);
}


} // namespace webbind