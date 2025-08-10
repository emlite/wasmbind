#include <webbind/NavigateEvent.hpp>
#include <webbind/NavigateEventInit.hpp>
#include <webbind/NavigationDestination.hpp>
#include <webbind/AbortSignal.hpp>
#include <webbind/FormData.hpp>
#include <webbind/Element.hpp>
#include <webbind/NavigationInterceptOptions.hpp>

namespace webbind {

NavigateEvent NavigateEvent::take_ownership(Handle h) noexcept {
    return NavigateEvent(h);
}

NavigateEvent NavigateEvent::clone() const noexcept { return *this; }

emlite::Val NavigateEvent::instance() noexcept { return emlite::Val::global("NavigateEvent"); }

NavigateEvent::NavigateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

NavigateEvent::NavigateEvent(const emlite::Val &val) noexcept: Event(val) {}

NavigateEvent::NavigateEvent(const jsbind::String& type, const NavigateEventInit& eventInitDict) : Event(emlite::Val::global("NavigateEvent").new_(type, eventInitDict)) {}

NavigationType NavigateEvent::navigationType() const {
    return Event::get("navigationType").as<NavigationType>();
}

NavigationDestination NavigateEvent::destination() const {
    return Event::get("destination").as<NavigationDestination>();
}

bool NavigateEvent::canIntercept() const {
    return Event::get("canIntercept").as<bool>();
}

bool NavigateEvent::userInitiated() const {
    return Event::get("userInitiated").as<bool>();
}

bool NavigateEvent::hashChange() const {
    return Event::get("hashChange").as<bool>();
}

AbortSignal NavigateEvent::signal() const {
    return Event::get("signal").as<AbortSignal>();
}

FormData NavigateEvent::formData() const {
    return Event::get("formData").as<FormData>();
}

jsbind::String NavigateEvent::downloadRequest() const {
    return Event::get("downloadRequest").as<jsbind::String>();
}

jsbind::Any NavigateEvent::info() const {
    return Event::get("info").as<jsbind::Any>();
}

bool NavigateEvent::hasUAVisualTransition() const {
    return Event::get("hasUAVisualTransition").as<bool>();
}

Element NavigateEvent::sourceElement() const {
    return Event::get("sourceElement").as<Element>();
}

jsbind::Undefined NavigateEvent::intercept() {
    return Event::call("intercept").as<jsbind::Undefined>();
}

jsbind::Undefined NavigateEvent::intercept(const NavigationInterceptOptions& options) {
    return Event::call("intercept", options).as<jsbind::Undefined>();
}

jsbind::Undefined NavigateEvent::scroll() {
    return Event::call("scroll").as<jsbind::Undefined>();
}


} // namespace webbind