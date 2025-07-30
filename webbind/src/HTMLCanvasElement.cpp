#include <webbind/HTMLCanvasElement.hpp>
#include <webbind/OffscreenCanvas.hpp>
#include <webbind/MediaStream.hpp>


HTMLCanvasElement HTMLCanvasElement::take_ownership(Handle h) noexcept {
        return HTMLCanvasElement(h);
    }
HTMLCanvasElement HTMLCanvasElement::clone() const noexcept { return *this; }
HTMLCanvasElement::HTMLCanvasElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLCanvasElement::HTMLCanvasElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLCanvasElement::HTMLCanvasElement() : HTMLElement(emlite::Val::global("HTMLCanvasElement").new_()) {}

unsigned long HTMLCanvasElement::width() const {
    return HTMLElement::get("width").as<unsigned long>();
}

void HTMLCanvasElement::width(unsigned long value) {
    HTMLElement::set("width", value);
}

unsigned long HTMLCanvasElement::height() const {
    return HTMLElement::get("height").as<unsigned long>();
}

void HTMLCanvasElement::height(unsigned long value) {
    HTMLElement::set("height", value);
}

jsbind::Any HTMLCanvasElement::getContext(const jsbind::String& contextId) {
    return HTMLElement::call("getContext", contextId).as<jsbind::Any>();
}

jsbind::Any HTMLCanvasElement::getContext(const jsbind::String& contextId, const jsbind::Any& options) {
    return HTMLElement::call("getContext", contextId, options).as<jsbind::Any>();
}

jsbind::String HTMLCanvasElement::toDataURL() {
    return HTMLElement::call("toDataURL").as<jsbind::String>();
}

jsbind::String HTMLCanvasElement::toDataURL(const jsbind::String& type) {
    return HTMLElement::call("toDataURL", type).as<jsbind::String>();
}

jsbind::String HTMLCanvasElement::toDataURL(const jsbind::String& type, const jsbind::Any& quality) {
    return HTMLElement::call("toDataURL", type, quality).as<jsbind::String>();
}

jsbind::Undefined HTMLCanvasElement::toBlob(const jsbind::Function& callback) {
    return HTMLElement::call("toBlob", callback).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLCanvasElement::toBlob(const jsbind::Function& callback, const jsbind::String& type) {
    return HTMLElement::call("toBlob", callback, type).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLCanvasElement::toBlob(const jsbind::Function& callback, const jsbind::String& type, const jsbind::Any& quality) {
    return HTMLElement::call("toBlob", callback, type, quality).as<jsbind::Undefined>();
}

OffscreenCanvas HTMLCanvasElement::transferControlToOffscreen() {
    return HTMLElement::call("transferControlToOffscreen").as<OffscreenCanvas>();
}

MediaStream HTMLCanvasElement::captureStream() {
    return HTMLElement::call("captureStream").as<MediaStream>();
}

MediaStream HTMLCanvasElement::captureStream(double frameRequestRate) {
    return HTMLElement::call("captureStream", frameRequestRate).as<MediaStream>();
}

