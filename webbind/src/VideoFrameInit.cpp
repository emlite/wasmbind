#include "webbind/VideoFrameInit.hpp"
#include "webbind/DOMRectInit.hpp"
#include "webbind/VideoFrameMetadata.hpp"

using emlite::Val;
namespace webbind {

VideoFrameInit::VideoFrameInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrameInit VideoFrameInit::take_ownership(Handle h) noexcept {
        return VideoFrameInit(h);
    }
VideoFrameInit::VideoFrameInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoFrameInit::VideoFrameInit() noexcept: emlite::Val(emlite::Val::object()) {}
VideoFrameInit VideoFrameInit::clone() const noexcept { return *this; }

long long VideoFrameInit::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

void VideoFrameInit::duration(long long value) {
    emlite::Val::set("duration", value);
}

long long VideoFrameInit::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

void VideoFrameInit::timestamp(long long value) {
    emlite::Val::set("timestamp", value);
}

AlphaOption VideoFrameInit::alpha() const {
    return emlite::Val::get("alpha").as<AlphaOption>();
}

void VideoFrameInit::alpha(const AlphaOption& value) {
    emlite::Val::set("alpha", value);
}

DOMRectInit VideoFrameInit::visibleRect() const {
    return emlite::Val::get("visibleRect").as<DOMRectInit>();
}

void VideoFrameInit::visibleRect(const DOMRectInit& value) {
    emlite::Val::set("visibleRect", value);
}

double VideoFrameInit::rotation() const {
    return emlite::Val::get("rotation").as<double>();
}

void VideoFrameInit::rotation(double value) {
    emlite::Val::set("rotation", value);
}

bool VideoFrameInit::flip() const {
    return emlite::Val::get("flip").as<bool>();
}

void VideoFrameInit::flip(bool value) {
    emlite::Val::set("flip", value);
}

unsigned long VideoFrameInit::displayWidth() const {
    return emlite::Val::get("displayWidth").as<unsigned long>();
}

void VideoFrameInit::displayWidth(unsigned long value) {
    emlite::Val::set("displayWidth", value);
}

unsigned long VideoFrameInit::displayHeight() const {
    return emlite::Val::get("displayHeight").as<unsigned long>();
}

void VideoFrameInit::displayHeight(unsigned long value) {
    emlite::Val::set("displayHeight", value);
}

VideoFrameMetadata VideoFrameInit::metadata() const {
    return emlite::Val::get("metadata").as<VideoFrameMetadata>();
}

void VideoFrameInit::metadata(const VideoFrameMetadata& value) {
    emlite::Val::set("metadata", value);
}


} // namespace webbind