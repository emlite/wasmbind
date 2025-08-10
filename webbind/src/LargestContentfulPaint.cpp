#include <webbind/LargestContentfulPaint.hpp>
#include <webbind/Element.hpp>

namespace webbind {

LargestContentfulPaint LargestContentfulPaint::take_ownership(Handle h) noexcept {
    return LargestContentfulPaint(h);
}

LargestContentfulPaint LargestContentfulPaint::clone() const noexcept { return *this; }

emlite::Val LargestContentfulPaint::instance() noexcept { return emlite::Val::global("LargestContentfulPaint"); }

LargestContentfulPaint::LargestContentfulPaint(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}

LargestContentfulPaint::LargestContentfulPaint(const emlite::Val &val) noexcept: PerformanceEntry(val) {}

jsbind::Any LargestContentfulPaint::loadTime() const {
    return PerformanceEntry::get("loadTime").as<jsbind::Any>();
}

unsigned long LargestContentfulPaint::size() const {
    return PerformanceEntry::get("size").as<unsigned long>();
}

jsbind::String LargestContentfulPaint::id() const {
    return PerformanceEntry::get("id").as<jsbind::String>();
}

jsbind::String LargestContentfulPaint::url() const {
    return PerformanceEntry::get("url").as<jsbind::String>();
}

Element LargestContentfulPaint::element() const {
    return PerformanceEntry::get("element").as<Element>();
}

jsbind::Object LargestContentfulPaint::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

jsbind::Any LargestContentfulPaint::paintTime() const {
    return PerformanceEntry::get("paintTime").as<jsbind::Any>();
}

jsbind::Any LargestContentfulPaint::presentationTime() const {
    return PerformanceEntry::get("presentationTime").as<jsbind::Any>();
}


} // namespace webbind