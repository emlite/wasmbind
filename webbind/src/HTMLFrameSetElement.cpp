#include <webbind/HTMLFrameSetElement.hpp>

namespace webbind {

HTMLFrameSetElement HTMLFrameSetElement::take_ownership(Handle h) noexcept {
    return HTMLFrameSetElement(h);
}

HTMLFrameSetElement HTMLFrameSetElement::clone() const noexcept { return *this; }

emlite::Val HTMLFrameSetElement::instance() noexcept { return emlite::Val::global("HTMLFrameSetElement"); }

HTMLFrameSetElement::HTMLFrameSetElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLFrameSetElement::HTMLFrameSetElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLFrameSetElement::HTMLFrameSetElement() : HTMLElement(emlite::Val::global("HTMLFrameSetElement").new_()) {}

jsbind::String HTMLFrameSetElement::cols() const {
    return HTMLElement::get("cols").as<jsbind::String>();
}

void HTMLFrameSetElement::cols(const jsbind::String& value) {
    HTMLElement::set("cols", value);
}

jsbind::String HTMLFrameSetElement::rows() const {
    return HTMLElement::get("rows").as<jsbind::String>();
}

void HTMLFrameSetElement::rows(const jsbind::String& value) {
    HTMLElement::set("rows", value);
}

jsbind::Any HTMLFrameSetElement::onportalactivate() const {
    return HTMLElement::get("onportalactivate").as<jsbind::Any>();
}

void HTMLFrameSetElement::onportalactivate(const jsbind::Any& value) {
    HTMLElement::set("onportalactivate", value);
}


} // namespace webbind