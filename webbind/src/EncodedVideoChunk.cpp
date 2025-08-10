#include <webbind/EncodedVideoChunk.hpp>
#include <webbind/EncodedVideoChunkInit.hpp>

namespace webbind {

EncodedVideoChunk EncodedVideoChunk::take_ownership(Handle h) noexcept {
        return EncodedVideoChunk(h);
    }
EncodedVideoChunk EncodedVideoChunk::clone() const noexcept { return *this; }
emlite::Val EncodedVideoChunk::instance() noexcept { return emlite::Val::global("EncodedVideoChunk"); }
EncodedVideoChunk::EncodedVideoChunk(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncodedVideoChunk::EncodedVideoChunk(const emlite::Val &val) noexcept: emlite::Val(val) {}

EncodedVideoChunk::EncodedVideoChunk(const EncodedVideoChunkInit& init) : emlite::Val(emlite::Val::global("EncodedVideoChunk").new_(init)) {}

EncodedVideoChunkType EncodedVideoChunk::type() const {
    return emlite::Val::get("type").as<EncodedVideoChunkType>();
}

long long EncodedVideoChunk::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

long long EncodedVideoChunk::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

unsigned long EncodedVideoChunk::byteLength() const {
    return emlite::Val::get("byteLength").as<unsigned long>();
}

jsbind::Undefined EncodedVideoChunk::copyTo(const jsbind::Any& destination) {
    return emlite::Val::call("copyTo", destination).as<jsbind::Undefined>();
}


} // namespace webbind