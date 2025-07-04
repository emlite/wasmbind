#include <webbind/HTMLFrameSetElement.hpp>


HTMLFrameSetElement HTMLFrameSetElement::take_ownership(Handle h) noexcept {
        return HTMLFrameSetElement(h);
    }
HTMLFrameSetElement HTMLFrameSetElement::clone() const noexcept { return *this; }
HTMLFrameSetElement::HTMLFrameSetElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFrameSetElement::HTMLFrameSetElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFrameSetElement::HTMLFrameSetElement(): HTMLElement(emlite::Val::global("HTMLFrameSetElement").new_()) {}

jsbind::DOMString HTMLFrameSetElement::cols() const {
    return HTMLElement::get("cols").as<jsbind::DOMString>();
}

void HTMLFrameSetElement::cols(const jsbind::DOMString& value) {
    HTMLElement::set("cols", value);
}

jsbind::DOMString HTMLFrameSetElement::rows() const {
    return HTMLElement::get("rows").as<jsbind::DOMString>();
}

void HTMLFrameSetElement::rows(const jsbind::DOMString& value) {
    HTMLElement::set("rows", value);
}

jsbind::Any HTMLFrameSetElement::onportalactivate() const {
    return HTMLElement::get("onportalactivate").as<jsbind::Any>();
}

void HTMLFrameSetElement::onportalactivate(const jsbind::Any& value) {
    HTMLElement::set("onportalactivate", value);
}

