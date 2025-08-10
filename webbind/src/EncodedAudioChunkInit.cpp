#include <webbind/EncodedAudioChunkInit.hpp>

namespace webbind {

EncodedAudioChunkInit::EncodedAudioChunkInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncodedAudioChunkInit EncodedAudioChunkInit::take_ownership(Handle h) noexcept {
    return EncodedAudioChunkInit(h);
}

EncodedAudioChunkInit::EncodedAudioChunkInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

EncodedAudioChunkInit::EncodedAudioChunkInit() noexcept: emlite::Val(emlite::Val::object()) {}

EncodedAudioChunkInit EncodedAudioChunkInit::clone() const noexcept { return *this; }

EncodedAudioChunkType EncodedAudioChunkInit::type() const {
    return emlite::Val::get("type").as<EncodedAudioChunkType>();
}

void EncodedAudioChunkInit::type(const EncodedAudioChunkType& value) {
    emlite::Val::set("type", value);
}

long long EncodedAudioChunkInit::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

void EncodedAudioChunkInit::timestamp(long long value) {
    emlite::Val::set("timestamp", value);
}

long long EncodedAudioChunkInit::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

void EncodedAudioChunkInit::duration(long long value) {
    emlite::Val::set("duration", value);
}

jsbind::Any EncodedAudioChunkInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void EncodedAudioChunkInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

jsbind::TypedArray<jsbind::ArrayBuffer> EncodedAudioChunkInit::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

void EncodedAudioChunkInit::transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value) {
    emlite::Val::set("transfer", value);
}


} // namespace webbind