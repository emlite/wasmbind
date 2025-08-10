#include <webbind/RTCEncodedFrameMetadata.hpp>

namespace webbind {

RTCEncodedFrameMetadata::RTCEncodedFrameMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCEncodedFrameMetadata RTCEncodedFrameMetadata::take_ownership(Handle h) noexcept {
    return RTCEncodedFrameMetadata(h);
}

RTCEncodedFrameMetadata::RTCEncodedFrameMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCEncodedFrameMetadata::RTCEncodedFrameMetadata() noexcept: emlite::Val(emlite::Val::object()) {}

RTCEncodedFrameMetadata RTCEncodedFrameMetadata::clone() const noexcept { return *this; }

unsigned long RTCEncodedFrameMetadata::synchronizationSource() const {
    return emlite::Val::get("synchronizationSource").as<unsigned long>();
}

void RTCEncodedFrameMetadata::synchronizationSource(unsigned long value) {
    emlite::Val::set("synchronizationSource", value);
}

unsigned char RTCEncodedFrameMetadata::payloadType() const {
    return emlite::Val::get("payloadType").as<unsigned char>();
}

void RTCEncodedFrameMetadata::payloadType(unsigned char value) {
    emlite::Val::set("payloadType", value);
}

jsbind::TypedArray<unsigned long> RTCEncodedFrameMetadata::contributingSources() const {
    return emlite::Val::get("contributingSources").as<jsbind::TypedArray<unsigned long>>();
}

void RTCEncodedFrameMetadata::contributingSources(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("contributingSources", value);
}

unsigned long RTCEncodedFrameMetadata::rtpTimestamp() const {
    return emlite::Val::get("rtpTimestamp").as<unsigned long>();
}

void RTCEncodedFrameMetadata::rtpTimestamp(unsigned long value) {
    emlite::Val::set("rtpTimestamp", value);
}

jsbind::Any RTCEncodedFrameMetadata::receiveTime() const {
    return emlite::Val::get("receiveTime").as<jsbind::Any>();
}

void RTCEncodedFrameMetadata::receiveTime(const jsbind::Any& value) {
    emlite::Val::set("receiveTime", value);
}

jsbind::Any RTCEncodedFrameMetadata::captureTime() const {
    return emlite::Val::get("captureTime").as<jsbind::Any>();
}

void RTCEncodedFrameMetadata::captureTime(const jsbind::Any& value) {
    emlite::Val::set("captureTime", value);
}

jsbind::Any RTCEncodedFrameMetadata::senderCaptureTimeOffset() const {
    return emlite::Val::get("senderCaptureTimeOffset").as<jsbind::Any>();
}

void RTCEncodedFrameMetadata::senderCaptureTimeOffset(const jsbind::Any& value) {
    emlite::Val::set("senderCaptureTimeOffset", value);
}

jsbind::String RTCEncodedFrameMetadata::mimeType() const {
    return emlite::Val::get("mimeType").as<jsbind::String>();
}

void RTCEncodedFrameMetadata::mimeType(const jsbind::String& value) {
    emlite::Val::set("mimeType", value);
}


} // namespace webbind