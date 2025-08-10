#include <webbind/VideoEncoderConfig.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind