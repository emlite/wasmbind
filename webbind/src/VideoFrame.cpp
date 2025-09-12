#include <webbind/VideoFrame.hpp>
#include <webbind/VideoFrameInit.hpp>
#include <webbind/VideoFrameBufferInit.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/VideoColorSpace.hpp>
#include <webbind/VideoFrameMetadata.hpp>
#include <webbind/VideoFrameCopyToOptions.hpp>
#include <webbind/PlaneLayout.hpp>
#include <webbind/VideoFrame.hpp>

namespace webbind {

VideoFrame VideoFrame::take_ownership(Handle h) noexcept {
    return VideoFrame(h);
}

VideoFrame VideoFrame::clone() const noexcept { return *this; }

emlite::Val VideoFrame::instance() noexcept { return emlite::Val::global("VideoFrame"); }

VideoFrame::VideoFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

VideoFrame::VideoFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}

VideoFrame::VideoFrame(const jsbind::Any& image) : emlite::Val(emlite::Val::global("VideoFrame").new_(image)) {}

VideoFrame::VideoFrame(const jsbind::Any& image, const VideoFrameInit& init) : emlite::Val(emlite::Val::global("VideoFrame").new_(image, init)) {}

VideoFrame::VideoFrame(const jsbind::Any& data, const VideoFrameBufferInit& init) : emlite::Val(emlite::Val::global("VideoFrame").new_(data, init)) {}

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

unsigned long VideoFrame::allocationSize() {
    return emlite::Val::call("allocationSize").as<unsigned long>();
}

unsigned long VideoFrame::allocationSize(const VideoFrameCopyToOptions& options) {
    return emlite::Val::call("allocationSize", options).as<unsigned long>();
}

jsbind::Promise<jsbind::TypedArray<PlaneLayout>> VideoFrame::copyTo(const jsbind::Any& destination) {
    return emlite::Val::call("copyTo", destination).as<jsbind::Promise<jsbind::TypedArray<PlaneLayout>>>();
}

jsbind::Promise<jsbind::TypedArray<PlaneLayout>> VideoFrame::copyTo(const jsbind::Any& destination, const VideoFrameCopyToOptions& options) {
    return emlite::Val::call("copyTo", destination, options).as<jsbind::Promise<jsbind::TypedArray<PlaneLayout>>>();
}

VideoFrame VideoFrame::clone() {
    return emlite::Val::call("clone").as<VideoFrame>();
}

jsbind::Undefined VideoFrame::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}


} // namespace webbind