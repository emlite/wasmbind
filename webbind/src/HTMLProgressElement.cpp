#include "webbind/HTMLProgressElement.hpp"
#include "webbind/NodeList.hpp"

namespace webbind {

HTMLProgressElement HTMLProgressElement::take_ownership(Handle h) noexcept {
        return HTMLProgressElement(h);
    }
HTMLProgressElement HTMLProgressElement::clone() const noexcept { return *this; }
emlite::Val HTMLProgressElement::instance() noexcept { return emlite::Val::global("HTMLProgressElement"); }
HTMLProgressElement::HTMLProgressElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLProgressElement::HTMLProgressElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLProgressElement::HTMLProgressElement() : HTMLElement(emlite::Val::global("HTMLProgressElement").new_()) {}

double HTMLProgressElement::value() const {
    return HTMLElement::get("value").as<double>();
}

void HTMLProgressElement::value(double value) {
    HTMLElement::set("value", value);
}

double HTMLProgressElement::max() const {
    return HTMLElement::get("max").as<double>();
}

void HTMLProgressElement::max(double value) {
    HTMLElement::set("max", value);
}

double HTMLProgressElement::position() const {
    return HTMLElement::get("position").as<double>();
}

NodeList HTMLProgressElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}


} // namespace webbind