#include <webbind/VideoConfiguration.hpp>

using emlite::Val;
namespace webbind {

VideoConfiguration::VideoConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoConfiguration VideoConfiguration::take_ownership(Handle h) noexcept {
        return VideoConfiguration(h);
    }
VideoConfiguration::VideoConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoConfiguration::VideoConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
VideoConfiguration VideoConfiguration::clone() const noexcept { return *this; }

jsbind::String VideoConfiguration::contentType() const {
    return emlite::Val::get("contentType").as<jsbind::String>();
}

void VideoConfiguration::contentType(const jsbind::String& value) {
    emlite::Val::set("contentType", value);
}

unsigned long VideoConfiguration::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

void VideoConfiguration::width(unsigned long value) {
    emlite::Val::set("width", value);
}

unsigned long VideoConfiguration::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

void VideoConfiguration::height(unsigned long value) {
    emlite::Val::set("height", value);
}

long long VideoConfiguration::bitrate() const {
    return emlite::Val::get("bitrate").as<long long>();
}

void VideoConfiguration::bitrate(long long value) {
    emlite::Val::set("bitrate", value);
}

double VideoConfiguration::framerate() const {
    return emlite::Val::get("framerate").as<double>();
}

void VideoConfiguration::framerate(double value) {
    emlite::Val::set("framerate", value);
}

bool VideoConfiguration::hasAlphaChannel() const {
    return emlite::Val::get("hasAlphaChannel").as<bool>();
}

void VideoConfiguration::hasAlphaChannel(bool value) {
    emlite::Val::set("hasAlphaChannel", value);
}

HdrMetadataType VideoConfiguration::hdrMetadataType() const {
    return emlite::Val::get("hdrMetadataType").as<HdrMetadataType>();
}

void VideoConfiguration::hdrMetadataType(const HdrMetadataType& value) {
    emlite::Val::set("hdrMetadataType", value);
}

ColorGamut VideoConfiguration::colorGamut() const {
    return emlite::Val::get("colorGamut").as<ColorGamut>();
}

void VideoConfiguration::colorGamut(const ColorGamut& value) {
    emlite::Val::set("colorGamut", value);
}

TransferFunction VideoConfiguration::transferFunction() const {
    return emlite::Val::get("transferFunction").as<TransferFunction>();
}

void VideoConfiguration::transferFunction(const TransferFunction& value) {
    emlite::Val::set("transferFunction", value);
}

jsbind::String VideoConfiguration::scalabilityMode() const {
    return emlite::Val::get("scalabilityMode").as<jsbind::String>();
}

void VideoConfiguration::scalabilityMode(const jsbind::String& value) {
    emlite::Val::set("scalabilityMode", value);
}

bool VideoConfiguration::spatialScalability() const {
    return emlite::Val::get("spatialScalability").as<bool>();
}

void VideoConfiguration::spatialScalability(bool value) {
    emlite::Val::set("spatialScalability", value);
}


} // namespace webbind