#include <webbind/ImageDecoder.hpp>
#include <webbind/ImageTrackList.hpp>
#include <webbind/VideoFrame.hpp>


ImageDecodeResult::ImageDecodeResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDecodeResult ImageDecodeResult::take_ownership(Handle h) noexcept {
        return ImageDecodeResult(h);
    }
ImageDecodeResult::ImageDecodeResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageDecodeResult::ImageDecodeResult() noexcept: emlite::Val(emlite::Val::object()) {}
ImageDecodeResult ImageDecodeResult::clone() const noexcept { return *this; }

VideoFrame ImageDecodeResult::image() const {
    return emlite::Val::get("image").as<VideoFrame>();
}

void ImageDecodeResult::image(const VideoFrame& value) {
    emlite::Val::set("image", value);
}

bool ImageDecodeResult::complete() const {
    return emlite::Val::get("complete").as<bool>();
}

void ImageDecodeResult::complete(bool value) {
    emlite::Val::set("complete", value);
}

ImageDecodeOptions::ImageDecodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDecodeOptions ImageDecodeOptions::take_ownership(Handle h) noexcept {
        return ImageDecodeOptions(h);
    }
ImageDecodeOptions::ImageDecodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageDecodeOptions::ImageDecodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ImageDecodeOptions ImageDecodeOptions::clone() const noexcept { return *this; }

unsigned long ImageDecodeOptions::frameIndex() const {
    return emlite::Val::get("frameIndex").as<unsigned long>();
}

void ImageDecodeOptions::frameIndex(unsigned long value) {
    emlite::Val::set("frameIndex", value);
}

bool ImageDecodeOptions::completeFramesOnly() const {
    return emlite::Val::get("completeFramesOnly").as<bool>();
}

void ImageDecodeOptions::completeFramesOnly(bool value) {
    emlite::Val::set("completeFramesOnly", value);
}

ImageDecoder ImageDecoder::take_ownership(Handle h) noexcept {
        return ImageDecoder(h);
    }
ImageDecoder ImageDecoder::clone() const noexcept { return *this; }
ImageDecoder::ImageDecoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDecoder::ImageDecoder(const emlite::Val &val) noexcept: emlite::Val(val) {}


ImageDecoder::ImageDecoder(const jsbind::Any& init) : emlite::Val(emlite::Val::global("ImageDecoder").new_(init)) {}

jsbind::String ImageDecoder::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

bool ImageDecoder::complete() const {
    return emlite::Val::get("complete").as<bool>();
}

jsbind::Promise<jsbind::Undefined> ImageDecoder::completed() const {
    return emlite::Val::get("completed").as<jsbind::Promise<jsbind::Undefined>>();
}

ImageTrackList ImageDecoder::tracks() const {
    return emlite::Val::get("tracks").as<ImageTrackList>();
}

jsbind::Promise<ImageDecodeResult> ImageDecoder::decode() {
    return emlite::Val::call("decode").as<jsbind::Promise<ImageDecodeResult>>();
}

jsbind::Promise<ImageDecodeResult> ImageDecoder::decode(const ImageDecodeOptions& options) {
    return emlite::Val::call("decode", options).as<jsbind::Promise<ImageDecodeResult>>();
}

jsbind::Undefined ImageDecoder::reset() {
    return emlite::Val::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined ImageDecoder::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}

jsbind::Promise<bool> ImageDecoder::isTypeSupported(const jsbind::String& type) {
    return emlite::Val::global("imagedecoder").call("isTypeSupported", type).as<jsbind::Promise<bool>>();
}

