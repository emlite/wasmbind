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

jsbind::String PerformanceElementTiming::identifier() const {
    return PerformanceEntry::get("identifier").as<jsbind::String>();
}

unsigned long PerformanceElementTiming::naturalWidth() const {
    return PerformanceEntry::get("naturalWidth").as<unsigned long>();
}

unsigned long PerformanceElementTiming::naturalHeight() const {
    return PerformanceEntry::get("naturalHeight").as<unsigned long>();
}

jsbind::String PerformanceElementTiming::id() const {
    return PerformanceEntry::get("id").as<jsbind::String>();
}

Element PerformanceElementTiming::element() const {
    return PerformanceEntry::get("element").as<Element>();
}

jsbind::String PerformanceElementTiming::url() const {
    return PerformanceEntry::get("url").as<jsbind::String>();
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

