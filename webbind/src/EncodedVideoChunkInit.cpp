#include <webbind/EncodedVideoChunkInit.hpp>

namespace webbind {

EncodedVideoChunkInit::EncodedVideoChunkInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EncodedVideoChunkInit EncodedVideoChunkInit::take_ownership(Handle h) noexcept {
    return EncodedVideoChunkInit(h);
}

EncodedVideoChunkInit::EncodedVideoChunkInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

EncodedVideoChunkInit::EncodedVideoChunkInit() noexcept: emlite::Val(emlite::Val::object()) {}

EncodedVideoChunkInit EncodedVideoChunkInit::clone() const noexcept { return *this; }

EncodedVideoChunkType EncodedVideoChunkInit::type() const {
    return emlite::Val::get("type").as<EncodedVideoChunkType>();
}

void EncodedVideoChunkInit::type(const EncodedVideoChunkType& value) {
    emlite::Val::set("type", value);
}

long long EncodedVideoChunkInit::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

void EncodedVideoChunkInit::timestamp(long long value) {
    emlite::Val::set("timestamp", value);
}

long long EncodedVideoChunkInit::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

void EncodedVideoChunkInit::duration(long long value) {
    emlite::Val::set("duration", value);
}

jsbind::Any EncodedVideoChunkInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void EncodedVideoChunkInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

jsbind::TypedArray<jsbind::ArrayBuffer> EncodedVideoChunkInit::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

void EncodedVideoChunkInit::transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value) {
    emlite::Val::set("transfer", value);
}


} // namespace webbind