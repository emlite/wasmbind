#include <webbind/HTMLMarqueeElement.hpp>


HTMLMarqueeElement HTMLMarqueeElement::take_ownership(Handle h) noexcept {
        return HTMLMarqueeElement(h);
    }
HTMLMarqueeElement HTMLMarqueeElement::clone() const noexcept { return *this; }
HTMLMarqueeElement::HTMLMarqueeElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMarqueeElement::HTMLMarqueeElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLMarqueeElement::HTMLMarqueeElement() : HTMLElement(emlite::Val::global("HTMLMarqueeElement").new_()) {}

jsbind::DOMString HTMLMarqueeElement::behavior() const {
    return HTMLElement::get("behavior").as<jsbind::DOMString>();
}

void HTMLMarqueeElement::behavior(const jsbind::DOMString& value) {
    HTMLElement::set("behavior", value);
}

jsbind::DOMString HTMLMarqueeElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::DOMString>();
}

void HTMLMarqueeElement::bgColor(const jsbind::DOMString& value) {
    HTMLElement::set("bgColor", value);
}

jsbind::DOMString HTMLMarqueeElement::direction() const {
    return HTMLElement::get("direction").as<jsbind::DOMString>();
}

void HTMLMarqueeElement::direction(const jsbind::DOMString& value) {
    HTMLElement::set("direction", value);
}

jsbind::DOMString HTMLMarqueeElement::height() const {
    return HTMLElement::get("height").as<jsbind::DOMString>();
}

void HTMLMarqueeElement::height(const jsbind::DOMString& value) {
    HTMLElement::set("height", value);
}

unsigned long HTMLMarqueeElement::hspace() const {
    return HTMLElement::get("hspace").as<unsigned long>();
}

void HTMLMarqueeElement::hspace(unsigned long value) {
    HTMLElement::set("hspace", value);
}

long HTMLMarqueeElement::loop() const {
    return HTMLElement::get("loop").as<long>();
}

void HTMLMarqueeElement::loop(long value) {
    HTMLElement::set("loop", value);
}

unsigned long HTMLMarqueeElement::scrollAmount() const {
    return HTMLElement::get("scrollAmount").as<unsigned long>();
}

void HTMLMarqueeElement::scrollAmount(unsigned long value) {
    HTMLElement::set("scrollAmount", value);
}

unsigned long HTMLMarqueeElement::scrollDelay() const {
    return HTMLElement::get("scrollDelay").as<unsigned long>();
}

void HTMLMarqueeElement::scrollDelay(unsigned long value) {
    HTMLElement::set("scrollDelay", value);
}

bool HTMLMarqueeElement::trueSpeed() const {
    return HTMLElement::get("trueSpeed").as<bool>();
}

void HTMLMarqueeElement::trueSpeed(bool value) {
    HTMLElement::set("trueSpeed", value);
}

unsigned long HTMLMarqueeElement::vspace() const {
    return HTMLElement::get("vspace").as<unsigned long>();
}

void HTMLMarqueeElement::vspace(unsigned long value) {
    HTMLElement::set("vspace", value);
}

jsbind::DOMString HTMLMarqueeElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLMarqueeElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

jsbind::Undefined HTMLMarqueeElement::start() {
    return HTMLElement::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLMarqueeElement::stop() {
    return HTMLElement::call("stop").as<jsbind::Undefined>();
}

