#include <webbind/HTMLImageElement.hpp>


HTMLImageElement HTMLImageElement::take_ownership(Handle h) noexcept {
        return HTMLImageElement(h);
    }
HTMLImageElement HTMLImageElement::clone() const noexcept { return *this; }
HTMLImageElement::HTMLImageElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLImageElement::HTMLImageElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLImageElement::HTMLImageElement(): HTMLElement(emlite::Val::global("HTMLImageElement").new_()) {}

jsbind::DOMString HTMLImageElement::alt() const {
    return HTMLElement::get("alt").as<jsbind::DOMString>();
}

void HTMLImageElement::alt(const jsbind::DOMString& value) {
    HTMLElement::set("alt", value);
}

jsbind::USVString HTMLImageElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLImageElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::USVString HTMLImageElement::srcset() const {
    return HTMLElement::get("srcset").as<jsbind::USVString>();
}

void HTMLImageElement::srcset(const jsbind::USVString& value) {
    HTMLElement::set("srcset", value);
}

jsbind::DOMString HTMLImageElement::sizes() const {
    return HTMLElement::get("sizes").as<jsbind::DOMString>();
}

void HTMLImageElement::sizes(const jsbind::DOMString& value) {
    HTMLElement::set("sizes", value);
}

jsbind::DOMString HTMLImageElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::DOMString>();
}

void HTMLImageElement::crossOrigin(const jsbind::DOMString& value) {
    HTMLElement::set("crossOrigin", value);
}

jsbind::DOMString HTMLImageElement::useMap() const {
    return HTMLElement::get("useMap").as<jsbind::DOMString>();
}

void HTMLImageElement::useMap(const jsbind::DOMString& value) {
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

jsbind::USVString HTMLImageElement::currentSrc() const {
    return HTMLElement::get("currentSrc").as<jsbind::USVString>();
}

jsbind::DOMString HTMLImageElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLImageElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::DOMString HTMLImageElement::decoding() const {
    return HTMLElement::get("decoding").as<jsbind::DOMString>();
}

void HTMLImageElement::decoding(const jsbind::DOMString& value) {
    HTMLElement::set("decoding", value);
}

jsbind::DOMString HTMLImageElement::loading() const {
    return HTMLElement::get("loading").as<jsbind::DOMString>();
}

void HTMLImageElement::loading(const jsbind::DOMString& value) {
    HTMLElement::set("loading", value);
}

jsbind::DOMString HTMLImageElement::fetchPriority() const {
    return HTMLElement::get("fetchPriority").as<jsbind::DOMString>();
}

void HTMLImageElement::fetchPriority(const jsbind::DOMString& value) {
    HTMLElement::set("fetchPriority", value);
}

jsbind::Promise HTMLImageElement::decode() {
    return HTMLElement::call("decode").as<jsbind::Promise>();
}

long HTMLImageElement::x() const {
    return HTMLElement::get("x").as<long>();
}

long HTMLImageElement::y() const {
    return HTMLElement::get("y").as<long>();
}

jsbind::DOMString HTMLImageElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLImageElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::USVString HTMLImageElement::lowsrc() const {
    return HTMLElement::get("lowsrc").as<jsbind::USVString>();
}

void HTMLImageElement::lowsrc(const jsbind::USVString& value) {
    HTMLElement::set("lowsrc", value);
}

jsbind::DOMString HTMLImageElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLImageElement::align(const jsbind::DOMString& value) {
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

jsbind::USVString HTMLImageElement::longDesc() const {
    return HTMLElement::get("longDesc").as<jsbind::USVString>();
}

void HTMLImageElement::longDesc(const jsbind::USVString& value) {
    HTMLElement::set("longDesc", value);
}

jsbind::DOMString HTMLImageElement::border() const {
    return HTMLElement::get("border").as<jsbind::DOMString>();
}

void HTMLImageElement::border(const jsbind::DOMString& value) {
    HTMLElement::set("border", value);
}

jsbind::USVString HTMLImageElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::USVString>();
}

void HTMLImageElement::attributionSrc(const jsbind::USVString& value) {
    HTMLElement::set("attributionSrc", value);
}

bool HTMLImageElement::sharedStorageWritable() const {
    return HTMLElement::get("sharedStorageWritable").as<bool>();
}

void HTMLImageElement::sharedStorageWritable(bool value) {
    HTMLElement::set("sharedStorageWritable", value);
}

