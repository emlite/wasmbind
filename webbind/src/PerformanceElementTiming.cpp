#include <webbind/PerformanceElementTiming.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/Element.hpp>


PerformanceElementTiming PerformanceElementTiming::take_ownership(Handle h) noexcept {
        return PerformanceElementTiming(h);
    }
PerformanceElementTiming PerformanceElementTiming::clone() const noexcept { return *this; }
PerformanceElementTiming::PerformanceElementTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceElementTiming::PerformanceElementTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any PerformanceElementTiming::renderTime() const {
    return PerformanceEntry::get("renderTime").as<jsbind::Any>();
}

jsbind::Any PerformanceElementTiming::loadTime() const {
    return PerformanceEntry::get("loadTime").as<jsbind::Any>();
}

DOMRectReadOnly PerformanceElementTiming::intersectionRect() const {
    return PerformanceEntry::get("intersectionRect").as<DOMRectReadOnly>();
}

jsbind::DOMString PerformanceElementTiming::identifier() const {
    return PerformanceEntry::get("identifier").as<jsbind::DOMString>();
}

unsigned long PerformanceElementTiming::naturalWidth() const {
    return PerformanceEntry::get("naturalWidth").as<unsigned long>();
}

unsigned long PerformanceElementTiming::naturalHeight() const {
    return PerformanceEntry::get("naturalHeight").as<unsigned long>();
}

jsbind::DOMString PerformanceElementTiming::id() const {
    return PerformanceEntry::get("id").as<jsbind::DOMString>();
}

Element PerformanceElementTiming::element() const {
    return PerformanceEntry::get("element").as<Element>();
}

jsbind::USVString PerformanceElementTiming::url() const {
    return PerformanceEntry::get("url").as<jsbind::USVString>();
}

jsbind::Object PerformanceElementTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

jsbind::Any PerformanceElementTiming::paintTime() const {
    return PerformanceEntry::get("paintTime").as<jsbind::Any>();
}

jsbind::Any PerformanceElementTiming::presentationTime() const {
    return PerformanceEntry::get("presentationTime").as<jsbind::Any>();
}

