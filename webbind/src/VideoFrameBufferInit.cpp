#include "webbind/VideoFrameBufferInit.hpp"
#include "webbind/PlaneLayout.hpp"
#include "webbind/DOMRectInit.hpp"
#include "webbind/VideoColorSpaceInit.hpp"
#include "webbind/VideoFrameMetadata.hpp"

using emlite::Val;
namespace webbind {

VideoFrameBufferInit::VideoFrameBufferInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrameBufferInit VideoFrameBufferInit::take_ownership(Handle h) noexcept {
        return VideoFrameBufferInit(h);
    }
VideoFrameBufferInit::VideoFrameBufferInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoFrameBufferInit::VideoFrameBufferInit() noexcept: emlite::Val(emlite::Val::object()) {}
VideoFrameBufferInit VideoFrameBufferInit::clone() const noexcept { return *this; }

VideoPixelFormat VideoFrameBufferInit::format() const {
    return emlite::Val::get("format").as<VideoPixelFormat>();
}

void VideoFrameBufferInit::format(const VideoPixelFormat& value) {
    emlite::Val::set("format", value);
}

unsigned long VideoFrameBufferInit::codedWidth() const {
    return emlite::Val::get("codedWidth").as<unsigned long>();
}

void VideoFrameBufferInit::codedWidth(unsigned long value) {
    emlite::Val::set("codedWidth", value);
}

unsigned long VideoFrameBufferInit::codedHeight() const {
    return emlite::Val::get("codedHeight").as<unsigned long>();
}

void VideoFrameBufferInit::codedHeight(unsigned long value) {
    emlite::Val::set("codedHeight", value);
}

long long VideoFrameBufferInit::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

void VideoFrameBufferInit::timestamp(long long value) {
    emlite::Val::set("timestamp", value);
}

long long VideoFrameBufferInit::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

void VideoFrameBufferInit::duration(long long value) {
    emlite::Val::set("duration", value);
}

jsbind::TypedArray<PlaneLayout> VideoFrameBufferInit::layout() const {
    return emlite::Val::get("layout").as<jsbind::TypedArray<PlaneLayout>>();
}

void VideoFrameBufferInit::layout(const jsbind::TypedArray<PlaneLayout>& value) {
    emlite::Val::set("layout", value);
}

DOMRectInit VideoFrameBufferInit::visibleRect() const {
    return emlite::Val::get("visibleRect").as<DOMRectInit>();
}

void VideoFrameBufferInit::visibleRect(const DOMRectInit& value) {
    emlite::Val::set("visibleRect", value);
}

double VideoFrameBufferInit::rotation() const {
    return emlite::Val::get("rotation").as<double>();
}

void VideoFrameBufferInit::rotation(double value) {
    emlite::Val::set("rotation", value);
}

bool VideoFrameBufferInit::flip() const {
    return emlite::Val::get("flip").as<bool>();
}

void VideoFrameBufferInit::flip(bool value) {
    emlite::Val::set("flip", value);
}

unsigned long VideoFrameBufferInit::displayWidth() const {
    return emlite::Val::get("displayWidth").as<unsigned long>();
}

void VideoFrameBufferInit::displayWidth(unsigned long value) {
    emlite::Val::set("displayWidth", value);
}

unsigned long VideoFrameBufferInit::displayHeight() const {
    return emlite::Val::get("displayHeight").as<unsigned long>();
}

void VideoFrameBufferInit::displayHeight(unsigned long value) {
    emlite::Val::set("displayHeight", value);
}

VideoColorSpaceInit VideoFrameBufferInit::colorSpace() const {
    return emlite::Val::get("colorSpace").as<VideoColorSpaceInit>();
}

void VideoFrameBufferInit::colorSpace(const VideoColorSpaceInit& value) {
    emlite::Val::set("colorSpace", value);
}

jsbind::TypedArray<jsbind::ArrayBuffer> VideoFrameBufferInit::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

void VideoFrameBufferInit::transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value) {
    emlite::Val::set("transfer", value);
}

VideoFrameMetadata VideoFrameBufferInit::metadata() const {
    return emlite::Val::get("metadata").as<VideoFrameMetadata>();
}

void VideoFrameBufferInit::metadata(const VideoFrameMetadata& value) {
    emlite::Val::set("metadata", value);
}


} // namespace webbind