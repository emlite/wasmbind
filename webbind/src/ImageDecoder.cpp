#include <webbind/ImageDecoder.hpp>
#include <webbind/ImageDecoderInit.hpp>
#include <webbind/ImageTrackList.hpp>
#include <webbind/ImageDecodeResult.hpp>
#include <webbind/ImageDecodeOptions.hpp>

namespace webbind {

ImageDecoder ImageDecoder::take_ownership(Handle h) noexcept {
    return ImageDecoder(h);
}

ImageDecoder ImageDecoder::clone() const noexcept { return *this; }

emlite::Val ImageDecoder::instance() noexcept { return emlite::Val::global("ImageDecoder"); }

ImageDecoder::ImageDecoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

ImageDecoder::ImageDecoder(const emlite::Val &val) noexcept: emlite::Val(val) {}

ImageDecoder::ImageDecoder(const ImageDecoderInit& init) : emlite::Val(emlite::Val::global("ImageDecoder").new_(init)) {}

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


} // namespace webbind