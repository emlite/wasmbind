#include <webbind/OffscreenCanvas.hpp>
#include <webbind/ImageBitmap.hpp>
#include <webbind/Blob.hpp>


ImageEncodeOptions::ImageEncodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageEncodeOptions ImageEncodeOptions::take_ownership(Handle h) noexcept {
        return ImageEncodeOptions(h);
    }
ImageEncodeOptions::ImageEncodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageEncodeOptions::ImageEncodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ImageEncodeOptions ImageEncodeOptions::clone() const noexcept { return *this; }

jsbind::DOMString ImageEncodeOptions::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

void ImageEncodeOptions::type(const jsbind::DOMString& value) {
    emlite::Val::set("type", value);
}

double ImageEncodeOptions::quality() const {
    return emlite::Val::get("quality").as<double>();
}

void ImageEncodeOptions::quality(double value) {
    emlite::Val::set("quality", value);
}

OffscreenCanvas OffscreenCanvas::take_ownership(Handle h) noexcept {
        return OffscreenCanvas(h);
    }
OffscreenCanvas OffscreenCanvas::clone() const noexcept { return *this; }
OffscreenCanvas::OffscreenCanvas(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
OffscreenCanvas::OffscreenCanvas(const emlite::Val &val) noexcept: EventTarget(val) {}


OffscreenCanvas::OffscreenCanvas(long long width, long long height): EventTarget(emlite::Val::global("OffscreenCanvas").new_(width, height)) {}

long long OffscreenCanvas::width() const {
    return EventTarget::get("width").as<long long>();
}

void OffscreenCanvas::width(long long value) {
    EventTarget::set("width", value);
}

long long OffscreenCanvas::height() const {
    return EventTarget::get("height").as<long long>();
}

void OffscreenCanvas::height(long long value) {
    EventTarget::set("height", value);
}

jsbind::Any OffscreenCanvas::getContext(const OffscreenRenderingContextId& contextId, const jsbind::Any& options) {
    return EventTarget::call("getContext", contextId, options).as<jsbind::Any>();
}

ImageBitmap OffscreenCanvas::transferToImageBitmap() {
    return EventTarget::call("transferToImageBitmap").as<ImageBitmap>();
}

jsbind::Promise OffscreenCanvas::convertToBlob(const ImageEncodeOptions& options) {
    return EventTarget::call("convertToBlob", options).as<jsbind::Promise>();
}

jsbind::Any OffscreenCanvas::oncontextlost() const {
    return EventTarget::get("oncontextlost").as<jsbind::Any>();
}

void OffscreenCanvas::oncontextlost(const jsbind::Any& value) {
    EventTarget::set("oncontextlost", value);
}

jsbind::Any OffscreenCanvas::oncontextrestored() const {
    return EventTarget::get("oncontextrestored").as<jsbind::Any>();
}

void OffscreenCanvas::oncontextrestored(const jsbind::Any& value) {
    EventTarget::set("oncontextrestored", value);
}

