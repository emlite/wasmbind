#include "webbind/VideoFrameCallbackMetadata.hpp"

using emlite::Val;
namespace webbind {

VideoFrameCallbackMetadata::VideoFrameCallbackMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrameCallbackMetadata VideoFrameCallbackMetadata::take_ownership(Handle h) noexcept {
        return VideoFrameCallbackMetadata(h);
    }
VideoFrameCallbackMetadata::VideoFrameCallbackMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoFrameCallbackMetadata::VideoFrameCallbackMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
VideoFrameCallbackMetadata VideoFrameCallbackMetadata::clone() const noexcept { return *this; }

jsbind::Any VideoFrameCallbackMetadata::presentationTime() const {
    return emlite::Val::get("presentationTime").as<jsbind::Any>();
}

void VideoFrameCallbackMetadata::presentationTime(const jsbind::Any& value) {
    emlite::Val::set("presentationTime", value);
}

jsbind::Any VideoFrameCallbackMetadata::expectedDisplayTime() const {
    return emlite::Val::get("expectedDisplayTime").as<jsbind::Any>();
}

void VideoFrameCallbackMetadata::expectedDisplayTime(const jsbind::Any& value) {
    emlite::Val::set("expectedDisplayTime", value);
}

unsigned long VideoFrameCallbackMetadata::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

void VideoFrameCallbackMetadata::width(unsigned long value) {
    emlite::Val::set("width", value);
}

unsigned long VideoFrameCallbackMetadata::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

void VideoFrameCallbackMetadata::height(unsigned long value) {
    emlite::Val::set("height", value);
}

double VideoFrameCallbackMetadata::mediaTime() const {
    return emlite::Val::get("mediaTime").as<double>();
}

void VideoFrameCallbackMetadata::mediaTime(double value) {
    emlite::Val::set("mediaTime", value);
}

unsigned long VideoFrameCallbackMetadata::presentedFrames() const {
    return emlite::Val::get("presentedFrames").as<unsigned long>();
}

void VideoFrameCallbackMetadata::presentedFrames(unsigned long value) {
    emlite::Val::set("presentedFrames", value);
}

double VideoFrameCallbackMetadata::processingDuration() const {
    return emlite::Val::get("processingDuration").as<double>();
}

void VideoFrameCallbackMetadata::processingDuration(double value) {
    emlite::Val::set("processingDuration", value);
}

jsbind::Any VideoFrameCallbackMetadata::captureTime() const {
    return emlite::Val::get("captureTime").as<jsbind::Any>();
}

void VideoFrameCallbackMetadata::captureTime(const jsbind::Any& value) {
    emlite::Val::set("captureTime", value);
}

jsbind::Any VideoFrameCallbackMetadata::receiveTime() const {
    return emlite::Val::get("receiveTime").as<jsbind::Any>();
}

void VideoFrameCallbackMetadata::receiveTime(const jsbind::Any& value) {
    emlite::Val::set("receiveTime", value);
}

unsigned long VideoFrameCallbackMetadata::rtpTimestamp() const {
    return emlite::Val::get("rtpTimestamp").as<unsigned long>();
}

void VideoFrameCallbackMetadata::rtpTimestamp(unsigned long value) {
    emlite::Val::set("rtpTimestamp", value);
}


} // namespace webbind