#include <webbind/EncodedVideoChunkMetadata.hpp>
#include <webbind/VideoDecoderConfig.hpp>
#include <webbind/SvcOutputMetadata.hpp>

using emlite::Val;
namespace webbind {

EncodedVideoChunkMetadata::EncodedVideoChunkMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncodedVideoChunkMetadata EncodedVideoChunkMetadata::take_ownership(Handle h) noexcept {
        return EncodedVideoChunkMetadata(h);
    }
EncodedVideoChunkMetadata::EncodedVideoChunkMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
EncodedVideoChunkMetadata::EncodedVideoChunkMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
EncodedVideoChunkMetadata EncodedVideoChunkMetadata::clone() const noexcept { return *this; }

VideoDecoderConfig EncodedVideoChunkMetadata::decoderConfig() const {
    return emlite::Val::get("decoderConfig").as<VideoDecoderConfig>();
}

void EncodedVideoChunkMetadata::decoderConfig(const VideoDecoderConfig& value) {
    emlite::Val::set("decoderConfig", value);
}

SvcOutputMetadata EncodedVideoChunkMetadata::svc() const {
    return emlite::Val::get("svc").as<SvcOutputMetadata>();
}

void EncodedVideoChunkMetadata::svc(const SvcOutputMetadata& value) {
    emlite::Val::set("svc", value);
}

jsbind::Any EncodedVideoChunkMetadata::alphaSideData() const {
    return emlite::Val::get("alphaSideData").as<jsbind::Any>();
}

void EncodedVideoChunkMetadata::alphaSideData(const jsbind::Any& value) {
    emlite::Val::set("alphaSideData", value);
}


} // namespace webbind