#include <webbind/IntersectionObserverEntryInit.hpp>
#include <webbind/DOMRectInit.hpp>
#include <webbind/Element.hpp>

namespace webbind {

IntersectionObserverEntryInit::IntersectionObserverEntryInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IntersectionObserverEntryInit IntersectionObserverEntryInit::take_ownership(Handle h) noexcept {
    return IntersectionObserverEntryInit(h);
}

IntersectionObserverEntryInit::IntersectionObserverEntryInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

IntersectionObserverEntryInit::IntersectionObserverEntryInit() noexcept: emlite::Val(emlite::Val::object()) {}

IntersectionObserverEntryInit IntersectionObserverEntryInit::clone() const noexcept { return *this; }

jsbind::Any IntersectionObserverEntryInit::time() const {
    return emlite::Val::get("time").as<jsbind::Any>();
}

void IntersectionObserverEntryInit::time(const jsbind::Any& value) {
    emlite::Val::set("time", value);
}

DOMRectInit IntersectionObserverEntryInit::rootBounds() const {
    return emlite::Val::get("rootBounds").as<DOMRectInit>();
}

void IntersectionObserverEntryInit::rootBounds(const DOMRectInit& value) {
    emlite::Val::set("rootBounds", value);
}

DOMRectInit IntersectionObserverEntryInit::boundingClientRect() const {
    return emlite::Val::get("boundingClientRect").as<DOMRectInit>();
}

void IntersectionObserverEntryInit::boundingClientRect(const DOMRectInit& value) {
    emlite::Val::set("boundingClientRect", value);
}

DOMRectInit IntersectionObserverEntryInit::intersectionRect() const {
    return emlite::Val::get("intersectionRect").as<DOMRectInit>();
}

void IntersectionObserverEntryInit::intersectionRect(const DOMRectInit& value) {
    emlite::Val::set("intersectionRect", value);
}

bool IntersectionObserverEntryInit::isIntersecting() const {
    return emlite::Val::get("isIntersecting").as<bool>();
}

void IntersectionObserverEntryInit::isIntersecting(bool value) {
    emlite::Val::set("isIntersecting", value);
}

bool IntersectionObserverEntryInit::isVisible() const {
    return emlite::Val::get("isVisible").as<bool>();
}

void IntersectionObserverEntryInit::isVisible(bool value) {
    emlite::Val::set("isVisible", value);
}

double IntersectionObserverEntryInit::intersectionRatio() const {
    return emlite::Val::get("intersectionRatio").as<double>();
}

void IntersectionObserverEntryInit::intersectionRatio(double value) {
    emlite::Val::set("intersectionRatio", value);
}

Element IntersectionObserverEntryInit::target() const {
    return emlite::Val::get("target").as<Element>();
}

void IntersectionObserverEntryInit::target(const Element& value) {
    emlite::Val::set("target", value);
}


} // namespace webbind