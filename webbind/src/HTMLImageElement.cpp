#include "webbind/HTMLImageElement.hpp"

namespace webbind {

HTMLImageElement HTMLImageElement::take_ownership(Handle h) noexcept {
        return HTMLImageElement(h);
    }
HTMLImageElement HTMLImageElement::clone() const noexcept { return *this; }
emlite::Val HTMLImageElement::instance() noexcept { return emlite::Val::global("HTMLImageElement"); }
HTMLImageElement::HTMLImageElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLImageElement::HTMLImageElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLImageElement::HTMLImageElement() : HTMLElement(emlite::Val::global("HTMLImageElement").new_()) {}

jsbind::String HTMLImageElement::alt() const {
    return HTMLElement::get("alt").as<jsbind::String>();
}

void HTMLImageElement::alt(const jsbind::String& value) {
    HTMLElement::set("alt", value);
}

jsbind::String HTMLImageElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLImageElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLImageElement::srcset() const {
    return HTMLElement::get("srcset").as<jsbind::String>();
}

void HTMLImageElement::srcset(const jsbind::String& value) {
    HTMLElement::set("srcset", value);
}

jsbind::String HTMLImageElement::sizes() const {
    return HTMLElement::get("sizes").as<jsbind::String>();
}

void HTMLImageElement::sizes(const jsbind::String& value) {
    HTMLElement::set("sizes", value);
}

jsbind::String HTMLImageElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::String>();
}

void HTMLImageElement::crossOrigin(const jsbind::String& value) {
    HTMLElement::set("crossOrigin", value);
}

jsbind::String HTMLImageElement::useMap() const {
    return HTMLElement::get("useMap").as<jsbind::String>();
}

void HTMLImageElement::useMap(const jsbind::String& value) {
    HTMLElement::set("useMap", value);
}

bool HTMLImageElement::isMap() const {
    return HTMLElement::get("isMap").as<bool>();
}

void HTMLImageElement::isMap(bool value) {
    HTMLElement::set("isMap", value);
}

unsigned long HTMLImageElement::width() const {
    return HTMLElement::get("width").as<unsigned long>();
}

void HTMLImageElement::width(unsigned long value) {
    HTMLElement::set("width", value);
}

unsigned long HTMLImageElement::height() const {
    return HTMLElement::get("height").as<unsigned long>();
}

void HTMLImageElement::height(unsigned long value) {
    HTMLElement::set("height", value);
}

unsigned long HTMLImageElement::naturalWidth() const {
    return HTMLElement::get("naturalWidth").as<unsigned long>();
}

unsigned long HTMLImageElement::naturalHeight() const {
    return HTMLElement::get("naturalHeight").as<unsigned long>();
}

bool HTMLImageElement::complete() const {
    return HTMLElement::get("complete").as<bool>();
}

jsbind::String HTMLImageElement::currentSrc() const {
    return HTMLElement::get("currentSrc").as<jsbind::String>();
}

jsbind::String HTMLImageElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLImageElement::referrerPolicy(const jsbind::String& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::String HTMLImageElement::decoding() const {
    return HTMLElement::get("decoding").as<jsbind::String>();
}

void HTMLImageElement::decoding(const jsbind::String& value) {
    HTMLElement::set("decoding", value);
}

jsbind::String HTMLImageElement::loading() const {
    return HTMLElement::get("loading").as<jsbind::String>();
}

void HTMLImageElement::loading(const jsbind::String& value) {
    HTMLElement::set("loading", value);
}

jsbind::String HTMLImageElement::fetchPriority() const {
    return HTMLElement::get("fetchPriority").as<jsbind::String>();
}

void HTMLImageElement::fetchPriority(const jsbind::String& value) {
    HTMLElement::set("fetchPriority", value);
}

jsbind::Promise<jsbind::Undefined> HTMLImageElement::decode() {
    return HTMLElement::call("decode").as<jsbind::Promise<jsbind::Undefined>>();
}

long HTMLImageElement::x() const {
    return HTMLElement::get("x").as<long>();
}

long HTMLImageElement::y() const {
    return HTMLElement::get("y").as<long>();
}

jsbind::String HTMLImageElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLImageElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLImageElement::lowsrc() const {
    return HTMLElement::get("lowsrc").as<jsbind::String>();
}

void HTMLImageElement::lowsrc(const jsbind::String& value) {
    HTMLElement::set("lowsrc", value);
}

jsbind::String HTMLImageElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLImageElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

unsigned long HTMLImageElement::hspace() const {
    return HTMLElement::get("hspace").as<unsigned long>();
}

void HTMLImageElement::hspace(unsigned long value) {
    HTMLElement::set("hspace", value);
}

unsigned long HTMLImageElement::vspace() const {
    return HTMLElement::get("vspace").as<unsigned long>();
}

void HTMLImageElement::vspace(unsigned long value) {
    HTMLElement::set("vspace", value);
}

jsbind::String HTMLImageElement::longDesc() const {
    return HTMLElement::get("longDesc").as<jsbind::String>();
}

void HTMLImageElement::longDesc(const jsbind::String& value) {
    HTMLElement::set("longDesc", value);
}

jsbind::String HTMLImageElement::border() const {
    return HTMLElement::get("border").as<jsbind::String>();
}

void HTMLImageElement::border(const jsbind::String& value) {
    HTMLElement::set("border", value);
}

jsbind::String HTMLImageElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::String>();
}

void HTMLImageElement::attributionSrc(const jsbind::String& value) {
    HTMLElement::set("attributionSrc", value);
}

bool HTMLImageElement::sharedStorageWritable() const {
    return HTMLElement::get("sharedStorageWritable").as<bool>();
}

void HTMLImageElement::sharedStorageWritable(bool value) {
    HTMLElement::set("sharedStorageWritable", value);
}


} // namespace webbind