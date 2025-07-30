#include <webbind/IntersectionObserver.hpp>
#include <webbind/Element.hpp>
#include <webbind/IntersectionObserverEntry.hpp>


IntersectionObserver IntersectionObserver::take_ownership(Handle h) noexcept {
        return IntersectionObserver(h);
    }
IntersectionObserver IntersectionObserver::clone() const noexcept { return *this; }
IntersectionObserver::IntersectionObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IntersectionObserver::IntersectionObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}


IntersectionObserver::IntersectionObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("IntersectionObserver").new_(callback)) {}

IntersectionObserver::IntersectionObserver(const jsbind::Function& callback, const jsbind::Any& options) : emlite::Val(emlite::Val::global("IntersectionObserver").new_(callback, options)) {}

jsbind::Any IntersectionObserver::root() const {
    return emlite::Val::get("root").as<jsbind::Any>();
}

jsbind::String IntersectionObserver::rootMargin() const {
    return emlite::Val::get("rootMargin").as<jsbind::String>();
}

jsbind::String IntersectionObserver::scrollMargin() const {
    return emlite::Val::get("scrollMargin").as<jsbind::String>();
}

jsbind::TypedArray<double> IntersectionObserver::thresholds() const {
    return emlite::Val::get("thresholds").as<jsbind::TypedArray<double>>();
}

long IntersectionObserver::delay() const {
    return emlite::Val::get("delay").as<long>();
}

bool IntersectionObserver::trackVisibility() const {
    return emlite::Val::get("trackVisibility").as<bool>();
}

jsbind::Undefined IntersectionObserver::observe(const Element& target) {
    return emlite::Val::call("observe", target).as<jsbind::Undefined>();
}

jsbind::Undefined IntersectionObserver::unobserve(const Element& target) {
    return emlite::Val::call("unobserve", target).as<jsbind::Undefined>();
}

jsbind::Undefined IntersectionObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::TypedArray<IntersectionObserverEntry> IntersectionObserver::takeRecords() {
    return emlite::Val::call("takeRecords").as<jsbind::TypedArray<IntersectionObserverEntry>>();
}

