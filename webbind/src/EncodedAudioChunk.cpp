#include <webbind/EncodedAudioChunk.hpp>
#include <webbind/EncodedAudioChunkInit.hpp>

namespace webbind {

EncodedAudioChunk EncodedAudioChunk::take_ownership(Handle h) noexcept {
    return EncodedAudioChunk(h);
}

EncodedAudioChunk EncodedAudioChunk::clone() const noexcept { return *this; }

emlite::Val EncodedAudioChunk::instance() noexcept { return emlite::Val::global("EncodedAudioChunk"); }

EncodedAudioChunk::EncodedAudioChunk(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EncodedAudioChunk::EncodedAudioChunk(const emlite::Val &val) noexcept: emlite::Val(val) {}

EncodedAudioChunk::EncodedAudioChunk(const EncodedAudioChunkInit& init) : emlite::Val(emlite::Val::global("EncodedAudioChunk").new_(init)) {}

EncodedAudioChunkType EncodedAudioChunk::type() const {
    return emlite::Val::get("type").as<EncodedAudioChunkType>();
}

long long EncodedAudioChunk::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

long long EncodedAudioChunk::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

unsigned long EncodedAudioChunk::byteLength() const {
    return emlite::Val::get("byteLength").as<unsigned long>();
}

jsbind::Undefined EncodedAudioChunk::copyTo(const jsbind::Any& destination) {
    return emlite::Val::call("copyTo", destination).as<jsbind::Undefined>();
}


} // namespace webbind