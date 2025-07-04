#include <webbind/VideoFrame.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/VideoColorSpace.hpp>


VideoFrameMetadata::VideoFrameMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrameMetadata VideoFrameMetadata::take_ownership(Handle h) noexcept {
        return VideoFrameMetadata(h);
    }
VideoFrameMetadata::VideoFrameMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoFrameMetadata::VideoFrameMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
VideoFrameMetadata VideoFrameMetadata::clone() const noexcept { return *this; }

VideoFrameCopyToOptions::VideoFrameCopyToOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrameCopyToOptions VideoFrameCopyToOptions::take_ownership(Handle h) noexcept {
        return VideoFrameCopyToOptions(h);
    }
VideoFrameCopyToOptions::VideoFrameCopyToOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoFrameCopyToOptions::VideoFrameCopyToOptions() noexcept: emlite::Val(emlite::Val::object()) {}
VideoFrameCopyToOptions VideoFrameCopyToOptions::clone() const noexcept { return *this; }

DOMRectInit VideoFrameCopyToOptions::rect() const {
    return emlite::Val::get("rect").as<DOMRectInit>();
}

void VideoFrameCopyToOptions::rect(const DOMRectInit& value) {
    emlite::Val::set("rect", value);
}

jsbind::Sequence<PlaneLayout> VideoFrameCopyToOptions::layout() const {
    return emlite::Val::get("layout").as<jsbind::Sequence<PlaneLayout>>();
}

void VideoFrameCopyToOptions::layout(const jsbind::Sequence<PlaneLayout>& value) {
    emlite::Val::set("layout", value);
}

VideoPixelFormat VideoFrameCopyToOptions::format() const {
    return emlite::Val::get("format").as<VideoPixelFormat>();
}

void VideoFrameCopyToOptions::format(const VideoPixelFormat& value) {
    emlite::Val::set("format", value);
}

PredefinedColorSpace VideoFrameCopyToOptions::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void VideoFrameCopyToOptions::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

PlaneLayout::PlaneLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PlaneLayout PlaneLayout::take_ownership(Handle h) noexcept {
        return PlaneLayout(h);
    }
PlaneLayout::PlaneLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
PlaneLayout::PlaneLayout() noexcept: emlite::Val(emlite::Val::object()) {}
PlaneLayout PlaneLayout::clone() const noexcept { return *this; }

unsigned long PlaneLayout::offset() const {
    return emlite::Val::get("offset").as<unsigned long>();
}

void PlaneLayout::offset(unsigned long value) {
    emlite::Val::set("offset", value);
}

unsigned long PlaneLayout::stride() const {
    return emlite::Val::get("stride").as<unsigned long>();
}

void PlaneLayout::stride(unsigned long value) {
    emlite::Val::set("stride", value);
}

VideoFrame VideoFrame::take_ownership(Handle h) noexcept {
        return VideoFrame(h);
    }
VideoFrame VideoFrame::clone() const noexcept { return *this; }
VideoFrame::VideoFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrame::VideoFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}


VideoFrame::VideoFrame(const jsbind::Any& data, const jsbind::Any& init): emlite::Val(emlite::Val::global("VideoFrame").new_(data, init)) {}

VideoPixelFormat VideoFrame::format() const {
    return emlite::Val::get("format").as<VideoPixelFormat>();
}

unsigned long VideoFrame::codedWidth() const {
    return emlite::Val::get("codedWidth").as<unsigned long>();
}

unsigned long VideoFrame::codedHeight() const {
    return emlite::Val::get("codedHeight").as<unsigned long>();
}

DOMRectReadOnly VideoFrame::codedRect() const {
    return emlite::Val::get("codedRect").as<DOMRectReadOnly>();
}

DOMRectReadOnly VideoFrame::visibleRect() const {
    return emlite::Val::get("visibleRect").as<DOMRectReadOnly>();
}

double VideoFrame::rotation() const {
    return emlite::Val::get("rotation").as<double>();
}

bool VideoFrame::flip() const {
    return emlite::Val::get("flip").as<bool>();
}

unsigned long VideoFrame::displayWidth() const {
    return emlite::Val::get("displayWidth").as<unsigned long>();
}

unsigned long VideoFrame::displayHeight() const {
    return emlite::Val::get("displayHeight").as<unsigned long>();
}

long long VideoFrame::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

long long VideoFrame::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

VideoColorSpace VideoFrame::colorSpace() const {
    return emlite::Val::get("colorSpace").as<VideoColorSpace>();
}

VideoFrameMetadata VideoFrame::metadata() {
    return emlite::Val::call("metadata").as<VideoFrameMetadata>();
}

unsigned long VideoFrame::allocationSize(const VideoFrameCopyToOptions& options) {
    return emlite::Val::call("allocationSize", options).as<unsigned long>();
}

jsbind::Promise VideoFrame::copyTo(const jsbind::Any& destination, const VideoFrameCopyToOptions& options) {
    return emlite::Val::call("copyTo", destination, options).as<jsbind::Promise>();
}

VideoFrame VideoFrame::clone() {
    return emlite::Val::call("clone").as<VideoFrame>();
}

jsbind::Undefined VideoFrame::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}

