#include <webbind/IntersectionObserverEntry.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/Element.hpp>


IntersectionObserverEntry IntersectionObserverEntry::take_ownership(Handle h) noexcept {
        return IntersectionObserverEntry(h);
    }
IntersectionObserverEntry IntersectionObserverEntry::clone() const noexcept { return *this; }
emlite::Val IntersectionObserverEntry::instance() noexcept { return emlite::Val::global("IntersectionObserverEntry"); }
IntersectionObserverEntry::IntersectionObserverEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IntersectionObserverEntry::IntersectionObserverEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}


IntersectionObserverEntry::IntersectionObserverEntry(const jsbind::Any& intersectionObserverEntryInit) : emlite::Val(emlite::Val::global("IntersectionObserverEntry").new_(intersectionObserverEntryInit)) {}

jsbind::Any IntersectionObserverEntry::time() const {
    return emlite::Val::get("time").as<jsbind::Any>();
}

DOMRectReadOnly IntersectionObserverEntry::rootBounds() const {
    return emlite::Val::get("rootBounds").as<DOMRectReadOnly>();
}

DOMRectReadOnly IntersectionObserverEntry::boundingClientRect() const {
    return emlite::Val::get("boundingClientRect").as<DOMRectReadOnly>();
}

DOMRectReadOnly IntersectionObserverEntry::intersectionRect() const {
    return emlite::Val::get("intersectionRect").as<DOMRectReadOnly>();
}

bool IntersectionObserverEntry::isIntersecting() const {
    return emlite::Val::get("isIntersecting").as<bool>();
}

bool IntersectionObserverEntry::isVisible() const {
    return emlite::Val::get("isVisible").as<bool>();
}

double IntersectionObserverEntry::intersectionRatio() const {
    return emlite::Val::get("intersectionRatio").as<double>();
}

Element IntersectionObserverEntry::target() const {
    return emlite::Val::get("target").as<Element>();
}

