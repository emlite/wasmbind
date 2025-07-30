#include <webbind/VideoEncoder.hpp>
#include <webbind/VideoFrame.hpp>


VideoEncoderConfig::VideoEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderConfig VideoEncoderConfig::take_ownership(Handle h) noexcept {
        return VideoEncoderConfig(h);
    }
VideoEncoderConfig::VideoEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderConfig::VideoEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderConfig VideoEncoderConfig::clone() const noexcept { return *this; }

jsbind::String VideoEncoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::String>();
}

void VideoEncoderConfig::codec(const jsbind::String& value) {
    emlite::Val::set("codec", value);
}

unsigned long VideoEncoderConfig::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

void VideoEncoderConfig::width(unsigned long value) {
    emlite::Val::set("width", value);
}

unsigned long VideoEncoderConfig::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

void VideoEncoderConfig::height(unsigned long value) {
    emlite::Val::set("height", value);
}

unsigned long VideoEncoderConfig::displayWidth() const {
    return emlite::Val::get("displayWidth").as<unsigned long>();
}

void VideoEncoderConfig::displayWidth(unsigned long value) {
    emlite::Val::set("displayWidth", value);
}

unsigned long VideoEncoderConfig::displayHeight() const {
    return emlite::Val::get("displayHeight").as<unsigned long>();
}

void VideoEncoderConfig::displayHeight(unsigned long value) {
    emlite::Val::set("displayHeight", value);
}

long long VideoEncoderConfig::bitrate() const {
    return emlite::Val::get("bitrate").as<long long>();
}

void VideoEncoderConfig::bitrate(long long value) {
    emlite::Val::set("bitrate", value);
}

double VideoEncoderConfig::framerate() const {
    return emlite::Val::get("framerate").as<double>();
}

void VideoEncoderConfig::framerate(double value) {
    emlite::Val::set("framerate", value);
}

HardwareAcceleration VideoEncoderConfig::hardwareAcceleration() const {
    return emlite::Val::get("hardwareAcceleration").as<HardwareAcceleration>();
}

void VideoEncoderConfig::hardwareAcceleration(const HardwareAcceleration& value) {
    emlite::Val::set("hardwareAcceleration", value);
}

AlphaOption VideoEncoderConfig::alpha() const {
    return emlite::Val::get("alpha").as<AlphaOption>();
}

void VideoEncoderConfig::alpha(const AlphaOption& value) {
    emlite::Val::set("alpha", value);
}

jsbind::String VideoEncoderConfig::scalabilityMode() const {
    return emlite::Val::get("scalabilityMode").as<jsbind::String>();
}

void VideoEncoderConfig::scalabilityMode(const jsbind::String& value) {
    emlite::Val::set("scalabilityMode", value);
}

VideoEncoderBitrateMode VideoEncoderConfig::bitrateMode() const {
    return emlite::Val::get("bitrateMode").as<VideoEncoderBitrateMode>();
}

void VideoEncoderConfig::bitrateMode(const VideoEncoderBitrateMode& value) {
    emlite::Val::set("bitrateMode", value);
}

LatencyMode VideoEncoderConfig::latencyMode() const {
    return emlite::Val::get("latencyMode").as<LatencyMode>();
}

void VideoEncoderConfig::latencyMode(const LatencyMode& value) {
    emlite::Val::set("latencyMode", value);
}

jsbind::String VideoEncoderConfig::contentHint() const {
    return emlite::Val::get("contentHint").as<jsbind::String>();
}

void VideoEncoderConfig::contentHint(const jsbind::String& value) {
    emlite::Val::set("contentHint", value);
}

VideoEncoderEncodeOptions::VideoEncoderEncodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderEncodeOptions VideoEncoderEncodeOptions::take_ownership(Handle h) noexcept {
        return VideoEncoderEncodeOptions(h);
    }
VideoEncoderEncodeOptions::VideoEncoderEncodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderEncodeOptions::VideoEncoderEncodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderEncodeOptions VideoEncoderEncodeOptions::clone() const noexcept { return *this; }

bool VideoEncoderEncodeOptions::keyFrame() const {
    return emlite::Val::get("keyFrame").as<bool>();
}

void VideoEncoderEncodeOptions::keyFrame(bool value) {
    emlite::Val::set("keyFrame", value);
}

VideoEncoderSupport::VideoEncoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderSupport VideoEncoderSupport::take_ownership(Handle h) noexcept {
        return VideoEncoderSupport(h);
    }
VideoEncoderSupport::VideoEncoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderSupport::VideoEncoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderSupport VideoEncoderSupport::clone() const noexcept { return *this; }

bool VideoEncoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void VideoEncoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

VideoEncoderConfig VideoEncoderSupport::config() const {
    return emlite::Val::get("config").as<VideoEncoderConfig>();
}

void VideoEncoderSupport::config(const VideoEncoderConfig& value) {
    emlite::Val::set("config", value);
}

VideoEncoder VideoEncoder::take_ownership(Handle h) noexcept {
        return VideoEncoder(h);
    }
VideoEncoder VideoEncoder::clone() const noexcept { return *this; }
VideoEncoder::VideoEncoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
VideoEncoder::VideoEncoder(const emlite::Val &val) noexcept: EventTarget(val) {}


VideoEncoder::VideoEncoder(const jsbind::Any& init) : EventTarget(emlite::Val::global("VideoEncoder").new_(init)) {}

CodecState VideoEncoder::state() const {
    return EventTarget::get("state").as<CodecState>();
}

unsigned long VideoEncoder::encodeQueueSize() const {
    return EventTarget::get("encodeQueueSize").as<unsigned long>();
}

jsbind::Any VideoEncoder::ondequeue() const {
    return EventTarget::get("ondequeue").as<jsbind::Any>();
}

void VideoEncoder::ondequeue(const jsbind::Any& value) {
    EventTarget::set("ondequeue", value);
}

jsbind::Undefined VideoEncoder::configure(const VideoEncoderConfig& config) {
    return EventTarget::call("configure", config).as<jsbind::Undefined>();
}

jsbind::Undefined VideoEncoder::encode(const VideoFrame& frame) {
    return EventTarget::call("encode", frame).as<jsbind::Undefined>();
}

jsbind::Undefined VideoEncoder::encode(const VideoFrame& frame, const VideoEncoderEncodeOptions& options) {
    return EventTarget::call("encode", frame, options).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> VideoEncoder::flush() {
    return EventTarget::call("flush").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined VideoEncoder::reset() {
    return EventTarget::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined VideoEncoder::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Promise<VideoEncoderSupport> VideoEncoder::isConfigSupported(const VideoEncoderConfig& config) {
    return emlite::Val::global("videoencoder").call("isConfigSupported", config).as<jsbind::Promise<VideoEncoderSupport>>();
}

