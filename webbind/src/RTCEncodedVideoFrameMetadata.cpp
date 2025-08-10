#include <webbind/RTCEncodedVideoFrameMetadata.hpp>

using emlite::Val;
namespace webbind {

RTCEncodedVideoFrameMetadata::RTCEncodedVideoFrameMetadata(Handle h) noexcept : RTCEncodedFrameMetadata(emlite::Val::take_ownership(h)) {}
RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata::take_ownership(Handle h) noexcept {
        return RTCEncodedVideoFrameMetadata(h);
    }
RTCEncodedVideoFrameMetadata::RTCEncodedVideoFrameMetadata(const emlite::Val &val) noexcept: RTCEncodedFrameMetadata(val) {}
RTCEncodedVideoFrameMetadata::RTCEncodedVideoFrameMetadata() noexcept: RTCEncodedFrameMetadata(emlite::Val::object()) {}
RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata::clone() const noexcept { return *this; }

long long RTCEncodedVideoFrameMetadata::frameId() const {
    return emlite::Val::get("frameId").as<long long>();
}

void RTCEncodedVideoFrameMetadata::frameId(long long value) {
    emlite::Val::set("frameId", value);
}

jsbind::TypedArray<long long> RTCEncodedVideoFrameMetadata::dependencies() const {
    return emlite::Val::get("dependencies").as<jsbind::TypedArray<long long>>();
}

void RTCEncodedVideoFrameMetadata::dependencies(jsbind::TypedArray<long long> value) {
    emlite::Val::set("dependencies", value);
}

unsigned short RTCEncodedVideoFrameMetadata::width() const {
    return emlite::Val::get("width").as<unsigned short>();
}

void RTCEncodedVideoFrameMetadata::width(unsigned short value) {
    emlite::Val::set("width", value);
}

unsigned short RTCEncodedVideoFrameMetadata::height() const {
    return emlite::Val::get("height").as<unsigned short>();
}

void RTCEncodedVideoFrameMetadata::height(unsigned short value) {
    emlite::Val::set("height", value);
}

unsigned long RTCEncodedVideoFrameMetadata::spatialIndex() const {
    return emlite::Val::get("spatialIndex").as<unsigned long>();
}

void RTCEncodedVideoFrameMetadata::spatialIndex(unsigned long value) {
    emlite::Val::set("spatialIndex", value);
}

unsigned long RTCEncodedVideoFrameMetadata::temporalIndex() const {
    return emlite::Val::get("temporalIndex").as<unsigned long>();
}

void RTCEncodedVideoFrameMetadata::temporalIndex(unsigned long value) {
    emlite::Val::set("temporalIndex", value);
}

long long RTCEncodedVideoFrameMetadata::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

void RTCEncodedVideoFrameMetadata::timestamp(long long value) {
    emlite::Val::set("timestamp", value);
}


} // namespace webbind