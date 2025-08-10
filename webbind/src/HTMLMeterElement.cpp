#include <webbind/HTMLMeterElement.hpp>
#include <webbind/NodeList.hpp>

namespace webbind {

HTMLMeterElement HTMLMeterElement::take_ownership(Handle h) noexcept {
    return HTMLMeterElement(h);
}

HTMLMeterElement HTMLMeterElement::clone() const noexcept { return *this; }

emlite::Val HTMLMeterElement::instance() noexcept { return emlite::Val::global("HTMLMeterElement"); }

HTMLMeterElement::HTMLMeterElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLMeterElement::HTMLMeterElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLMeterElement::HTMLMeterElement() : HTMLElement(emlite::Val::global("HTMLMeterElement").new_()) {}

double HTMLMeterElement::value() const {
    return HTMLElement::get("value").as<double>();
}

void HTMLMeterElement::value(double value) {
    HTMLElement::set("value", value);
}

double HTMLMeterElement::min() const {
    return HTMLElement::get("min").as<double>();
}

void HTMLMeterElement::min(double value) {
    HTMLElement::set("min", value);
}

double HTMLMeterElement::max() const {
    return HTMLElement::get("max").as<double>();
}

void HTMLMeterElement::max(double value) {
    HTMLElement::set("max", value);
}

double HTMLMeterElement::low() const {
    return HTMLElement::get("low").as<double>();
}

void HTMLMeterElement::low(double value) {
    HTMLElement::set("low", value);
}

double HTMLMeterElement::high() const {
    return HTMLElement::get("high").as<double>();
}

void HTMLMeterElement::high(double value) {
    HTMLElement::set("high", value);
}

double HTMLMeterElement::optimum() const {
    return HTMLElement::get("optimum").as<double>();
}

void HTMLMeterElement::optimum(double value) {
    HTMLElement::set("optimum", value);
}

NodeList HTMLMeterElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}


} // namespace webbind