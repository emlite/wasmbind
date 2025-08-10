#include <webbind/VideoDecoderConfig.hpp>
#include <webbind/VideoColorSpaceInit.hpp>

namespace webbind {

VideoDecoderConfig::VideoDecoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoDecoderConfig VideoDecoderConfig::take_ownership(Handle h) noexcept {
    return VideoDecoderConfig(h);
}

VideoDecoderConfig::VideoDecoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

VideoDecoderConfig::VideoDecoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}

VideoDecoderConfig VideoDecoderConfig::clone() const noexcept { return *this; }

jsbind::String VideoDecoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::String>();
}

void VideoDecoderConfig::codec(const jsbind::String& value) {
    emlite::Val::set("codec", value);
}

jsbind::Any VideoDecoderConfig::description() const {
    return emlite::Val::get("description").as<jsbind::Any>();
}

void VideoDecoderConfig::description(const jsbind::Any& value) {
    emlite::Val::set("description", value);
}

unsigned long VideoDecoderConfig::codedWidth() const {
    return emlite::Val::get("codedWidth").as<unsigned long>();
}

void VideoDecoderConfig::codedWidth(unsigned long value) {
    emlite::Val::set("codedWidth", value);
}

unsigned long VideoDecoderConfig::codedHeight() const {
    return emlite::Val::get("codedHeight").as<unsigned long>();
}

void VideoDecoderConfig::codedHeight(unsigned long value) {
    emlite::Val::set("codedHeight", value);
}

unsigned long VideoDecoderConfig::displayAspectWidth() const {
    return emlite::Val::get("displayAspectWidth").as<unsigned long>();
}

void VideoDecoderConfig::displayAspectWidth(unsigned long value) {
    emlite::Val::set("displayAspectWidth", value);
}

unsigned long VideoDecoderConfig::displayAspectHeight() const {
    return emlite::Val::get("displayAspectHeight").as<unsigned long>();
}

void VideoDecoderConfig::displayAspectHeight(unsigned long value) {
    emlite::Val::set("displayAspectHeight", value);
}

VideoColorSpaceInit VideoDecoderConfig::colorSpace() const {
    return emlite::Val::get("colorSpace").as<VideoColorSpaceInit>();
}

void VideoDecoderConfig::colorSpace(const VideoColorSpaceInit& value) {
    emlite::Val::set("colorSpace", value);
}

HardwareAcceleration VideoDecoderConfig::hardwareAcceleration() const {
    return emlite::Val::get("hardwareAcceleration").as<HardwareAcceleration>();
}

void VideoDecoderConfig::hardwareAcceleration(const HardwareAcceleration& value) {
    emlite::Val::set("hardwareAcceleration", value);
}

bool VideoDecoderConfig::optimizeForLatency() const {
    return emlite::Val::get("optimizeForLatency").as<bool>();
}

void VideoDecoderConfig::optimizeForLatency(bool value) {
    emlite::Val::set("optimizeForLatency", value);
}

double VideoDecoderConfig::rotation() const {
    return emlite::Val::get("rotation").as<double>();
}

void VideoDecoderConfig::rotation(double value) {
    emlite::Val::set("rotation", value);
}

bool VideoDecoderConfig::flip() const {
    return emlite::Val::get("flip").as<bool>();
}

void VideoDecoderConfig::flip(bool value) {
    emlite::Val::set("flip", value);
}


} // namespace webbind