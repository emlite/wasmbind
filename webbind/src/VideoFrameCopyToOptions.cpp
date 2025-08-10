#include <webbind/VideoFrameCopyToOptions.hpp>
#include <webbind/DOMRectInit.hpp>
#include <webbind/PlaneLayout.hpp>

namespace webbind {

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

jsbind::TypedArray<PlaneLayout> VideoFrameCopyToOptions::layout() const {
    return emlite::Val::get("layout").as<jsbind::TypedArray<PlaneLayout>>();
}

void VideoFrameCopyToOptions::layout(const jsbind::TypedArray<PlaneLayout>& value) {
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


} // namespace webbind