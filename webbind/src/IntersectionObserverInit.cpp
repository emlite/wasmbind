#include <webbind/IntersectionObserverInit.hpp>

using emlite::Val;
namespace webbind {

IntersectionObserverInit::IntersectionObserverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IntersectionObserverInit IntersectionObserverInit::take_ownership(Handle h) noexcept {
        return IntersectionObserverInit(h);
    }
IntersectionObserverInit::IntersectionObserverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
IntersectionObserverInit::IntersectionObserverInit() noexcept: emlite::Val(emlite::Val::object()) {}
IntersectionObserverInit IntersectionObserverInit::clone() const noexcept { return *this; }

jsbind::Any IntersectionObserverInit::root() const {
    return emlite::Val::get("root").as<jsbind::Any>();
}

void IntersectionObserverInit::root(const jsbind::Any& value) {
    emlite::Val::set("root", value);
}

jsbind::String IntersectionObserverInit::rootMargin() const {
    return emlite::Val::get("rootMargin").as<jsbind::String>();
}

void IntersectionObserverInit::rootMargin(const jsbind::String& value) {
    emlite::Val::set("rootMargin", value);
}

jsbind::String IntersectionObserverInit::scrollMargin() const {
    return emlite::Val::get("scrollMargin").as<jsbind::String>();
}

void IntersectionObserverInit::scrollMargin(const jsbind::String& value) {
    emlite::Val::set("scrollMargin", value);
}

jsbind::Any IntersectionObserverInit::threshold() const {
    return emlite::Val::get("threshold").as<jsbind::Any>();
}

void IntersectionObserverInit::threshold(const jsbind::Any& value) {
    emlite::Val::set("threshold", value);
}

long IntersectionObserverInit::delay() const {
    return emlite::Val::get("delay").as<long>();
}

void IntersectionObserverInit::delay(long value) {
    emlite::Val::set("delay", value);
}

bool IntersectionObserverInit::trackVisibility() const {
    return emlite::Val::get("trackVisibility").as<bool>();
}

void IntersectionObserverInit::trackVisibility(bool value) {
    emlite::Val::set("trackVisibility", value);
}


} // namespace webbind