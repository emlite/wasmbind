#include <webbind/SVGAnimationElement.hpp>
#include <webbind/SVGStringList.hpp>

namespace webbind {

SVGAnimationElement SVGAnimationElement::take_ownership(Handle h) noexcept {
    return SVGAnimationElement(h);
}

SVGAnimationElement SVGAnimationElement::clone() const noexcept { return *this; }

emlite::Val SVGAnimationElement::instance() noexcept { return emlite::Val::global("SVGAnimationElement"); }

SVGAnimationElement::SVGAnimationElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGAnimationElement::SVGAnimationElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGElement SVGAnimationElement::targetElement() const {
    return SVGElement::get("targetElement").as<SVGElement>();
}

jsbind::Any SVGAnimationElement::onbegin() const {
    return SVGElement::get("onbegin").as<jsbind::Any>();
}

void SVGAnimationElement::onbegin(const jsbind::Any& value) {
    SVGElement::set("onbegin", value);
}

jsbind::Any SVGAnimationElement::onend() const {
    return SVGElement::get("onend").as<jsbind::Any>();
}

void SVGAnimationElement::onend(const jsbind::Any& value) {
    SVGElement::set("onend", value);
}

jsbind::Any SVGAnimationElement::onrepeat() const {
    return SVGElement::get("onrepeat").as<jsbind::Any>();
}

void SVGAnimationElement::onrepeat(const jsbind::Any& value) {
    SVGElement::set("onrepeat", value);
}

float SVGAnimationElement::getStartTime() {
    return SVGElement::call("getStartTime").as<float>();
}

float SVGAnimationElement::getCurrentTime() {
    return SVGElement::call("getCurrentTime").as<float>();
}

float SVGAnimationElement::getSimpleDuration() {
    return SVGElement::call("getSimpleDuration").as<float>();
}

jsbind::Undefined SVGAnimationElement::beginElement() {
    return SVGElement::call("beginElement").as<jsbind::Undefined>();
}

jsbind::Undefined SVGAnimationElement::beginElementAt(float offset) {
    return SVGElement::call("beginElementAt", offset).as<jsbind::Undefined>();
}

jsbind::Undefined SVGAnimationElement::endElement() {
    return SVGElement::call("endElement").as<jsbind::Undefined>();
}

jsbind::Undefined SVGAnimationElement::endElementAt(float offset) {
    return SVGElement::call("endElementAt", offset).as<jsbind::Undefined>();
}

SVGStringList SVGAnimationElement::requiredExtensions() const {
    return SVGElement::get("requiredExtensions").as<SVGStringList>();
}

SVGStringList SVGAnimationElement::systemLanguage() const {
    return SVGElement::get("systemLanguage").as<SVGStringList>();
}


} // namespace webbind